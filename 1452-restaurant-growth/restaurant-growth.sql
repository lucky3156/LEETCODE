/* Write your T-SQL query statement below */

with cte1 as (select visited_on,sum(amount) as 'amount'
from Customer
group by visited_on)
,cte_2 as (select 
	visited_on,
	sum(amount) over(order by visited_on ROWS between 6 preceding and current row) as total_amount,
	cast(sum(amount) over(order by visited_on ROWS between 6 preceding and current row)*1.00 / 7 as decimal(10,2)) as average_sales,
	Rank() over(order by visited_on) as rnk 
	from 
cte1)
select visited_on,total_amount as 'amount',average_sales as 'average_amount' from cte_2 where rnk>6