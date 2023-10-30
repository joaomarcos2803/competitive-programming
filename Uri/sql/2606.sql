-- https://www.beecrowd.com.br/judge/en/problems/view/2606

SELECT p.id, p.name
FROM products p join categories c on p.id_categories = c.id
WHERE c.name LIKE 'super%'