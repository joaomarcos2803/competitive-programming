-- https://www.beecrowd.com.br/judge/en/problems/view/2738

SELECT c.name, cast((((s.math * 2) + (s.specific * 3) + (s.project_plan * 5)) / 10) 
AS NUMERIC(15, 2)) AS avg
FROM candidate c 
JOIN score s ON c.id = s.candidate_id
ORDER BY avg DESC