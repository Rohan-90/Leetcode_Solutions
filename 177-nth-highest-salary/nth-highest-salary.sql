CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    DECLARE val INT;
    SET val = N - 1;
  RETURN (
      # Write your MySQL query statement below.
        select distinct salary from Employee e
        order by salary desc
        limit 1 offset val
  );
END