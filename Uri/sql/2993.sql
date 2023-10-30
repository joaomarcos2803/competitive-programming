-- https://www.beecrowd.com.br/judge/en/problems/view/2993

SELECT amount
FROM value_table     
GROUP BY amount
ORDER BY COUNT(*) DESC
LIMIT 1