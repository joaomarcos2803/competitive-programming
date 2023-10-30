-- https://www.beecrowd.com.br/judge/en/problems/view/2619

SELECT p.name, f.name, p.price
FROM products p 
JOIN providers f ON p.id_providers = f.id
JOIN categories c ON p.id_categories = c.id
WHERE p.price > 1000 AND c.name = 'Super Luxury'