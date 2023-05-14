#!/bin/bash

echo -n "Enter the number :  "
read num

if [[ $num -gt 10 ]] 
then 
echo "Number is greater then 10"
elif [[ $num -eq 10 ]]
then
echo "number is equal to 10"
else
echo "number is less then 10"
fi

