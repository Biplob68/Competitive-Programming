--- URI Online Judge SQL
--- Problem 2738

SELECT candidate.name, ROUND(((Score.math*2) + (specific*3) + (project_plan*5))/10,2)  as avg
FROM candidate JOIN score ON candidate.id = score.candidate_id
ORDER BY avg DESC;
