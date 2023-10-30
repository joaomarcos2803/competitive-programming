-- https://www.beecrowd.com.br/judge/en/problems/view/2743

SELECT name, LENGTH(name) as length
FROM people
ORDER BY LENGTH DESC