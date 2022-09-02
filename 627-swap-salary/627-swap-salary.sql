# Write your MySQL query statement below
update salary set sex= if(sex='f','m' ,'f');
#                       if(sex==f){ sex=m} else sex=f;

--                sex= case sex 
--                     when 'm' then 'f'
--                     else 'm'
--                     end;
