-- https://www.beecrowd.com.br/judge/en/problems/view/2991

-- Exercício bem parecido com o 2989, e não é mais necessário fazer
-- join a tabela divisao 
-- Foi necessário tirar o round do menor salário pois o resultado
-- da consulta esperado não era o mesmo do beecrowd

WITH gross_salary AS (
    SELECT emp.matr, COALESCE(SUM(v.valor), 0) AS gross_salary
    FROM empregado emp
    LEFT JOIN emp_venc ON emp.matr = emp_venc.matr
    LEFT JOIN vencimento v ON emp_venc.cod_venc = v.cod_venc
    GROUP BY emp.matr
), 
discounts AS (
    SELECT emp.matr, COALESCE(SUM(desconto.valor), 0) AS discounts
    FROM empregado emp
    LEFT JOIN emp_desc ON emp.matr = emp_desc.matr
    LEFT JOIN desconto ON emp_desc.cod_desc = desconto.cod_desc
    GROUP BY emp.matr
)

SELECT 
	dept.nome AS "Nome Departamento",
	COUNT(*) AS "Numero de Empregados",
    ROUND(AVG(gs.gross_salary - d.discounts), 2) AS "Media Salarial",
	ROUND(MAX(gs.gross_salary - d.discounts), 2) AS "Maior Salario",
    MIN(gs.gross_salary - d.discounts) AS "Menor Salario"
FROM departamento dept
INNER JOIN empregado emp ON dept.cod_dep = emp.lotacao
INNER JOIN gross_salary gs ON gs.matr = emp.matr
INNER JOIN discounts d ON d.matr = emp.matr
GROUP BY dept.nome
ORDER BY "Media Salarial" DESC