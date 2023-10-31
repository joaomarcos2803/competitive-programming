-- https://www.beecrowd.com.br/judge/en/problems/view/3481

SELECT DISTINCT(node_id),  
    (CASE 
        WHEN node_id = 50 THEN 'ROOT'
        WHEN pointer IS NULL THEN 'LEAF'
	 	ELSE 'INNER'
    END) AS type
FROM nodes
ORDER BY node_id ASC