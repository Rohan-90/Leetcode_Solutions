# Write your MySQL query statement below

 
select name, bonus from Employee e 
Left Join Bonus b On e.empId = b.empId
where b.bonus is null or b.bonus < 1000;


