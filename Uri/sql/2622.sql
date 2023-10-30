-- https://www.beecrowd.com.br/judge/en/problems/view/2622

SELECT customers.name 
FROM customers, legal_person
WHERE customers.id = legal_person.id_customers