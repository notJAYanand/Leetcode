# Write your MySQL query statement below
select o.customer_number from orders o group by o.customer_number order by count(*) desc limit 1;