-- https://www.beecrowd.com.br/judge/en/problems/view/2611

SELECT m.id, m.name 
FROM movies m JOIN genres g ON m.id_genres = g.id
WHERE g.description = 'Action'