#!/bin/bash

count=0
read num
for i in 0 1 2 3 4
do
	echo "loop1 is $count"
	count=$((count + 1))

done
count=0
for((i =0;i<$num;i++))
do 
	echo "loop2 is $count"
	count=$((count + 1))
done    
