#!/bin/bash

read NUM

if [ $NUM -ge 10 -a $NUM -le 20 ]
then
    echo "$NUM is greater than 10"
else
    echo "$NUM is Lesser than 20"
fi

echo "Enter the anothe number"
read NUM2

if [ $NUM2 -lt 10 -o $NUM2 -gt 20 ]
 then 
    echo "$NUM2 is not between 10 and 20"
 else
    echo "$NUM2 is between 10 and 20"
fi
