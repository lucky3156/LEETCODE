with q1 as (
    select tiv_2015 from Insurance group by tiv_2015 having  count(*)>1
),
q2 as(
    select lat,lon from Insurance group by lat,lon having count(*)=1
)
select cast(round(sum(i.tiv_2016),2) as decimal(10,2)) as 'tiv_2016' from Insurance i
join q1 on i.tiv_2015=q1.tiv_2015
join q2 on i.lat=q2.lat and i.lon=q2.lon;