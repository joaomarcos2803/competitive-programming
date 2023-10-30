-- https://www.beecrowd.com.br/judge/en/problems/view/2617

SELECT p.name, f.name
FROM products p JOIN providers f ON p.id_providers = f.id
WHERE f.name = 'Ajax SA'