CREATE OR REPLACE FUNCTION NthHighestSalary(N INT) RETURNS TABLE (Salary INT) AS $$
BEGIN
  IF N IS NULL OR N <= 0 THEN
    RETURN QUERY SELECT NULL::INT;
    RETURN;
  END IF;
  RETURN QUERY (
    
    select distinct e.salary 
    from Employee e
    order by e.salary DESC
    limit 1 offset N-1
      
  );
END;
$$ LANGUAGE plpgsql;