#!/bin/bash
echo "Enter the number"
read NUM

if [ $NUM -gt 0 ]
then
    echo "$NUM is +ve"
elif [ $NUM -lt 0 ]
then
       	echo "$NUM is -ve"
else

   echo "$NUM is 0"

fi
echo "done"
   
