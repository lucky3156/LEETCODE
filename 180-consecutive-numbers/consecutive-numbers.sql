/* Write your T-SQL query statement below */
with cte as(
    select
    num,
    lag(num,1,0) over(order by id) as prev_row,
    lead(num,1,num+1) over(order by id) as next_row
    from Logs
)
select distinct num as 'ConsecutiveNums' from cte
where num=prev_row and num=next_row;