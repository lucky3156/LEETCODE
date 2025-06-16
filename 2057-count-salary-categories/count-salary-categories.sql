/* Write your T-SQL query statement below */
select 'Low Salary' as category,coalesce(count(*),0) as accounts_count from Accounts where income<20000

union all 

select 'Average Salary' as category,coalesce(count(*),0) as accounts_count from Accounts where income>=20000 and income<=50000

union all

select 'High Salary' as category,coalesce(count(*),0) as accounts_count from Accounts where income>50000