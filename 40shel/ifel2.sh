#!/bin/bash

echo -n "Enter the number"
read n

if [ $n -lt 10 ]
then
 echo "number is less then 10"
else
 echo "it a 2 digit number"
fi

