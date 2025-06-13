/* Write your T-SQL query statement below */
with cte as (
    select *,
    lag(temperature,1,temperature+1) over(order by recordDate) as prevtemp,
    lag(recordDate,1,recordDate) over(order by recordDate) as prevday 
    from Weather
)
select id as Id from cte where temperature>prevtemp and datediff(day,recordDate,prevday)=-1