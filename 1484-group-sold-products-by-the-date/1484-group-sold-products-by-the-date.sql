# Write your MySQL query statement below
select 
sell_date as sell_date ,
count(distinct product) as num_sold ,
group_concat(DISTINCT product ORDER BY product ASC SEPARATOR ',') as products

from activities 
group by sell_date
order by sell_date asc;
