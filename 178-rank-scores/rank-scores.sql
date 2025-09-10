# Write your MySQL query statement below

select s.score,
dense_rank() over (order by s.score DESC) as 'rank'
from Scores s;
; 