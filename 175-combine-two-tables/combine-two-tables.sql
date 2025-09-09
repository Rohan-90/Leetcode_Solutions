# Write your MySQL query statement below
SELECT firstName, lastName, city, state FROM Person t 
LEFT JOIN  Address  t1 ON t.personId = t1.personId;

