"" URI Online Judge - 2609 problem solve ""

SELECT categories.name, SUM(products.amount) 
FROM products JOIN categories 
ON products.id_categories = categories.id
GROUP BY categories.name;
