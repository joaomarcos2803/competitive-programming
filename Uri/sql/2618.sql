-- https://www.beecrowd.com.br/judge/en/problems/view/2618

SELECT p.name, f.name, c.name 
FROM products p 
JOIN providers f ON p.id_providers = f.id
JOIN categories c ON p.id_categories = c.id
WHERE f.name = 'Sansul SA' AND c.name = 'Imported'