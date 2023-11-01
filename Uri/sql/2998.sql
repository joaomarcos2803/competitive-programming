-- https://www.beecrowd.com.br/judge/en/problems/view/2998

-- Nesse exercício foi necessário utilizar uma função de janela para calcular o lucro acumulado de cada cliente.
-- Com isso foi possível utilizar a função MIN na query principal para obter o mês de payback e o lucro nesse mês.

WITH clients_accumulated_profit AS (
  SELECT
    c.name AS name,
	c.investment as investment,
    o.month,
    SUM(o.profit) OVER (PARTITION BY o.client_id ORDER BY o.month) AS accumulated_profit
  FROM clients c
  JOIN operations o ON c.id = o.client_id
)

SELECT
  name,
  investment,
  MIN(month) AS month_of_payback,
  (MIN(accumulated_profit) - investment) AS return
FROM clients_accumulated_profit 
WHERE accumulated_profit >= investment
GROUP BY name, investment