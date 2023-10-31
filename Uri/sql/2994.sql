-- https://www.beecrowd.com.br/judge/en/problems/view/2994

SELECT d.name, ROUND(SUM((a.hours * 150) + a.hours * 150 * ws.bonus * 0.01), 1) AS salary
FROM doctors d 
JOIN attendances a ON d.id = a.id_doctor
JOIN work_shifts ws ON ws.id = a.id_work_shift
GROUP BY d.id
ORDER BY salary DESC