-- https://www.beecrowd.com.br/judge/en/problems/view/2995

SELECT temperature, COUNT(temperature) AS number_of_records 
FROM records
GROUP BY mark, temperature
ORDER BY mark