-- https://www.beecrowd.com.br/judge/en/problems/view/2744

SELECT id, password, MD5(password) as MD5
FROM account