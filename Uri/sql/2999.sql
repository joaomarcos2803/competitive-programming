-- https://www.beecrowd.com.br/judge/en/problems/view/2999

-- Problema similar ao 2992 e 2997, foi necessário basicamente
-- somente adicionar duas condições a mais na query principal.

WITH gross_salary AS (
    SELECT emp.matr, COALESCE(SUM(v.valor), 0) AS gross_salary
    FROM empregado emp
    LEFT JOIN emp_venc ON emp.matr = emp_venc.matr
    LEFT JOIN vencimento v ON emp_venc.cod_venc = v.cod_venc
    GROUP BY emp.matr

), discounts AS (
    SELECT emp.matr, COALESCE(SUM(desconto.valor), 0) AS discounts
    FROM empregado emp
    LEFT JOIN emp_desc ON emp.matr = emp_desc.matr
    LEFT JOIN desconto ON emp_desc.cod_desc = desconto.cod_desc
    GROUP BY emp.matr
    
), average_salaries AS (
    SELECT 
		dept.nome AS departamento,
		div.nome AS divisao,
        ROUND(AVG(gs.gross_salary - d.discounts), 2) AS average_salary
    FROM departamento dept
    INNER JOIN divisao div ON dept.cod_dep = div.cod_dep
    INNER JOIN empregado emp ON div.cod_divisao = emp.lotacao_div
    INNER JOIN gross_salary gs ON gs.matr = emp.matr
    INNER JOIN discounts d ON d.matr = emp.matr
    GROUP BY div.nome, dept.nome
)

SELECT
	emp.nome AS nome,
	(gs.gross_salary - d.discounts) AS salario
FROM departamento dept
INNER JOIN divisao div ON dept.cod_dep = div.cod_dep
INNER JOIN empregado emp ON div.cod_divisao = emp.lotacao_div
INNER JOIN gross_salary gs ON gs.matr = emp.matr
INNER JOIN discounts d ON d.matr = emp.matr
WHERE (gs.gross_salary - d.discounts) > (
    SELECT average_salary
    FROM average_salaries avg
    WHERE avg.departamento = dept.nome
    AND avg.divisao = div.nome
) AND (gs.gross_salary - d.discounts) >= 8000
ORDER BY emp.lotacao_div ASC