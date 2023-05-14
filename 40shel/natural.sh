#!/bin/bash

echo -n "Enter the number :  "
read NUM

let sum=0
let I=1

while [ $I -le $NUM ]
do 
    sum=`expr $sum + $I`
    I=$((${I} +1))
 done

echo "The sum is $sum" 
