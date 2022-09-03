# Write your MySQL query statement below
select id,
sum(if(month='Jan',revenue,null)) as Jan_Revenue,
sum(if(month='Feb',revenue,null)) as Feb_Revenue,
sum(if(month='Mar',revenue,null)) as Mar_Revenue,
sum(if(month='Apr',revenue,null)) as Apr_Revenue,
sum(if(month='May',revenue,null)) as May_Revenue,
sum(if(month='Jun',revenue,null)) as Jun_Revenue,
sum(if(month='Jul',revenue,null)) as Jul_Revenue,
sum(if(month='Aug',revenue,null)) as Aug_Revenue,
sum(if(month='Sep',revenue,null)) as Sep_Revenue,
sum(if(month='Oct',revenue,null)) as Oct_Revenue,
sum(if(month='Nov',revenue,null)) as Nov_Revenue,
sum(if(month='Dec',revenue,null)) as Dec_Revenue
from Department
group by id;

--  


# IF()
# IF(condition, if_true, if_false)
# condition - If month is equal to the respective column (for Jan_revenue column it should be month = 'Jan')
# if_true= return all the list of values with respect to the individual id, afterwards we will sum all the values in the next step.
# if_false - Just return NULL id there is no revenure with respect to that ID and the month.

# SUM()
# We sum all the values of respective id per month and then return it in the front of that id in the respective month column.
# SUM(will sum all the values under the conidtion in this bracket)

# Why I have used Group By and SUM?
# For same id, month value can be repeated. Sum function will add all those to display in single row as group by id is used ((not month).