# Write your MySQL query statement below
select p.product_name,s.year,s.price from product p inner join sales s using(product_id);