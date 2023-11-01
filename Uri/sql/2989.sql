-- https://www.beecrowd.com.br/judge/en/problems/view/2989

-- LEFT JOIN foi utilizado nas subqueries para incluir os empregados
-- que não possuiam relacionamento com as tabelas que foram utilizadas para realizar
-- o calculo do salario bruto e descontos

-- Já o COALESCE foi usado para substituir o valor nulo dos empregados 
-- no calculo do salario bruto e descontos por 0, já que isso pode acontecer
-- devido ao uso do LEFT JOIN
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
	dept.nome AS departamento,
	div.nome AS divisao,
	ROUND(AVG(gs.gross_salary - d.discounts), 2) AS average_salary,
	ROUND(MAX(gs.gross_salary - d.discounts), 2) AS highest_salary
FROM departamento dept
INNER JOIN divisao div ON dept.cod_dep = div.cod_dep
INNER JOIN empregado emp ON div.cod_divisao = emp.lotacao_div
INNER JOIN gross_salary gs ON gs.matr = emp.matr
INNER JOIN discounts d ON d.matr = emp.matr
GROUP BY div.nome, dept.nome
ORDER BY average_salary DESC