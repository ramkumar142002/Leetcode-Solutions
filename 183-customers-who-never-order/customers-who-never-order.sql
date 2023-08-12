# Write your MySQL query statement below
select a.name as Customers from customers a where id not in(select customerID from orders);