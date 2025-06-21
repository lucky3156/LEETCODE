/* Write your T-SQL query statement below */
with cte as(
    select *,row_number() over(partition by email order by id) rnk from Person
)
delete from Person
where id not in (select id from cte where rnk<=1)