with cte as (select count(*) as total from Seat)
select
    case
        when c.total%2=0
        then case
             when s.id%2=0 then s.id-1
             else s.id+1
             end
        else case
             when s.id=c.total then s.id
             when s.id%2=0 then s.id-1
             else s.id+1
             end
        end as id, s.student from seat s,cte c order by id
        
