#!/bin/bash

echo -n "Enter the number : "
read num

let SUM=0

for I in `seq $num`
do
   SUM=`expr $SUM + $I`
   I=$((${I} + 1))
done

echo "The sum of the first $num is $SUM"

