# Moutar Take Home Test

## Question 1

### Answer

See [1.cpp file](1.cpp)

## Question 2

### Answer

See the [demo here](http://andraantariksa.github.io/mourtar-take-home-test/2.html) or take a look on the [source code](2.html)

## Question 3

#### A

##### Answer

![Entity Relationship Diagram](3a.png)

#### B

##### Answer

```

```

#### C

##### Answer

```sql
SELECT *
FROM customers
INNER JOIN (
    SELECT transactions.customer_id, SUM(transaction_product.price) as total_spent FROM
        transaction_product INNER JOIN transactions ON transaction_product.order_id = transactions.id
    GROUP BY transactions.customer_id
    ORDER BY SUM(transaction_product.price) DESC
    LIMIT 1
) AS customer_total_spent
ON customer_total_spent.customer_id = customers.id;
```

#### D

##### Answer

```sql
SELECT DATE_ADD('1970-01-01 00:00:01.000000', INTERVAL ((TIMESTAMPDIFF(HOUR, '1970-01-01 00:00:01.000000', transactions.created_at) DIV 2) * 2) HOUR) AS Timestamp, COUNT(*)
FROM transactions
GROUP BY DATE_ADD('1970-01-01 00:00:01.000000', INTERVAL ((TIMESTAMPDIFF(HOUR, '1970-01-01 00:00:01.000000', transactions.created_at) DIV 2) * 2) HOUR)
ORDER BY DATE_ADD('1970-01-01 00:00:01.000000', INTERVAL ((TIMESTAMPDIFF(HOUR, '1970-01-01 00:00:01.000000', transactions.created_at) DIV 2) * 2) HOUR);
```
