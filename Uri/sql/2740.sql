-- https://www.beecrowd.com.br/judge/en/problems/view/2740

(SELECT CONCAT('Podium: ', team)
FROM league
ORDER BY position ASC
LIMIT 3
)
UNION ALL
(SELECT concat('Demoted: ',team)
FROM league
WHERE position > 13
)
