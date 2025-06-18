/* Write your T-SQL query statement below */
select u.unique_id,o.name from Employees o
left join EmployeeUNI u on 
o.id=u.id