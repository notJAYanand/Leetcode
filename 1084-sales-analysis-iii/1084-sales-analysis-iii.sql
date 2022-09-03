# Write your MySQL query statement below
# select p.product_id,p.product_name from product p left join sales s on p.product_id=s.product_id 

# select p.product_id,p.product_name from product p where p.product_id not in (select s.product_id from sales s where s.sale_date not between '2019-01-01' and '2019-03-31');


select p.product_id,p.product_name from product p left join sales s on p.product_id=s.product_id group by s.product_id having min(s.sale_date)>='2019-01-01' and max(s.sale_date)<='2019-03-31';