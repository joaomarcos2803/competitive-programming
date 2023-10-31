-- https://www.beecrowd.com.br/judge/en/problems/view/3483


WITH second_largest AS (
	SELECT city_name, population
	FROM cities
	ORDER BY population DESC OFFSET 1 LIMIT 1
), second_smallest AS (
	SELECT city_name, population
	FROM cities
	ORDER BY population ASC OFFSET 1 LIMIT 1
)

SELECT city_name, population
FROM second_largest
UNION ALL 
SELECT city_name, population
FROM second_smallest