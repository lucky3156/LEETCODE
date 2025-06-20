with cte as (select managerId as id,count(managerId) as cnt from Employee group by managerId)
select name from Employee where id in(select id from cte where cnt>=5)