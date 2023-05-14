#!/bin/bash

function find_sum()
{
SUM=`expr $1 + $2 + $3`
echo $SUM
}
 
find_sum 10 20 30

RESULT=`find_sum 100 200 300`
echo $RESULT

