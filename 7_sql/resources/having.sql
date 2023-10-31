SELECT SUM(level), type_1 FROM pokemon 
GROUP BY type_1
HAVING level > 10;;