with cte as(select 
    person_id,
    person_name,
    weight,
    sum(weight) over(order by turn ) as preceding_sum,
    turn 
from Queue )
select top 1 person_name from cte 
where preceding_sum<=1000
order by preceding_sum desc 