-- https://www.beecrowd.com.br/judge/en/problems/view/2739

SELECT name, cast(extract(day FROM payday) AS int)
FROM loan