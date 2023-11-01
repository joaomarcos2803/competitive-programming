-- https://www.beecrowd.com.br/judge/en/problems/view/2992

-- Exercício parecido com o 2989, porém foi necessário
-- utilizar outra subquery para obter os salários médios de 
-- cada departamento e divisão, e somente após isso realizar a query
-- principal para obter a divisão de cada departamento que possui
-- o maior salario médio
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

SELECT departamento, divisao, average_salary
FROM average_salaries
WHERE (departamento, average_salary) IN (
    SELECT departamento, MAX(average_salary) AS max_average_salary
    FROM average_salaries
    GROUP BY departamento
)
ORDER BY average_salary DESC;