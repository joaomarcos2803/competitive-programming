-- https://www.beecrowd.com.br/judge/en/problems/view/2621

SELECT p.name
FROM products p 
JOIN providers f ON p.id_providers = f.id
WHERE p.amount >= 10 A p.amount <= 20 AND f.name LIKE 'P%'