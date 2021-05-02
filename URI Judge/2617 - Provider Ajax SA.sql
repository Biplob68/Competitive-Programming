SELECT products.name, providers.name
FROM providers
JOIN products
ON providers.id = products.id_providers
WHERE providers.name = 'Ajax SA' ;

/***
SELECT products.name, providers.name
FROM products
INNER JOIN providers ON products.id_providers = providers.id
WHERE providers.name = 'Ajax SA';

***/
