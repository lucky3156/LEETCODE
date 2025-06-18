/* Write your T-SQL query statement below */
select visits.customer_id,count(visits.customer_id) as count_no_trans
from visits  left join transactions on visits.visit_id = transactions.visit_id
where transaction_id is null 
group by customer_id