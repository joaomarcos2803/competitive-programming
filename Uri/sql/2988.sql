-- https://www.beecrowd.com.br/judge/en/problems/view/2988

SELECT name, matches, victories, defeats, draws, ((victories * 3) + draws) AS score
FROM (
	SELECT t.name AS name,
	(SELECT COUNT(*) from matches
	WHERE t.id = matches.team_1 OR t.id = matches.team_2) AS matches,
	(SELECT COUNT(*) FROM matches 
	WHERE (team_1_goals > team_2_goals AND t.id = matches.team_1) 
	OR (team_2_goals > team_1_goals AND t.id = matches.team_2)) AS victories,
	(SELECT COUNT(*) FROM matches 
	WHERE (team_1_goals < team_2_goals AND t.id = matches.team_1)
	OR (team_2_goals < team_1_goals AND t.id = matches.team_2)) AS defeats, 
	(SELECT COUNT(*) FROM matches 
	WHERE (team_1_goals = team_2_goals AND t.id = matches.team_1)
	OR (team_2_goals = team_1_goals AND t.id = matches.team_2)) AS draws	
	FROM teams t
	JOIN matches m ON t.id = m.team_1 OR t.id = m.team_2
	GROUP BY t.id
) AS result
ORDER BY score DESC, name ASC