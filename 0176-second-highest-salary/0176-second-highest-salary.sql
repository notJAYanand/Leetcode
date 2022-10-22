# Write your MySQL query statement below
# select distinct salary as  SecondHighestSalary from employee order by salary desc limit 1,1;

select max(salary) as SecondHighestSalary  from employee where salary not in (select max(salary) as SecondHighestSalary  from employee);