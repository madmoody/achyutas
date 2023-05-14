#!/bin/bash

echo -n "Enter the number"
read num

if [[ ( $num -lt 10 ) && ( $num%2 -eq 0 ) ]];
then 
echo "It is EVEN number"
else
echo "It is an ODD number"
fi

