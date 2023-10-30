-- https://www.beecrowd.com.br/judge/en/problems/view/2742

SELECT l.name, ROUND(l.omega * 1.618, 3)
FROM life_registry l 
JOIN dimensions d ON l.dimensions_id = d.id
WHERE l.name LIKE 'Richard%' and d.name IN ('C875','C774') 
ORDER BY l.omega