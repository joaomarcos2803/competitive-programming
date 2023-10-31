-- https://www.beecrowd.com.br/judge/en/problems/view/3480

WITH chair_data AS (
    SELECT
        id,
        queue,
        available,
        LAG(available) OVER (PARTITION BY queue ORDER BY id) AS prev_is_empty
    FROM chairs
)

SELECT
    c.queue,
    c.id - 1 AS left,
    c.id AS right
FROM chair_data c
WHERE c.available = TRUE
AND c.prev_is_empty = TRUE;