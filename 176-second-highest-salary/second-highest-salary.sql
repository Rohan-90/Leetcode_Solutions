# Write your MySQL query statement below
# select max(salary) as SecondHighestSalary from Employee e 
# where e.salary < (select max(salary) from Employee e);


select (select distinct salary from Employee e
where salary is not null
order by salary desc
limit 1 offset 1) as SecondHighestSalary ; 