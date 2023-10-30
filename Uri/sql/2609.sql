-- https://www.beecrowd.com.br/judge/en/problems/view/2609

SELECT c.name, sum(p.amount)
FROM products p 
JOIN categories c ON p.id_categories = c.id
GROUP BY c.name
