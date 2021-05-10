SELECT customers.name, orders.id
FROM customers
JOIN orders
On customers.id = orders.id_customers
WHERE orders_date >= '2016-01-01' 
AND orders_date <= '2016-06-30';
