#!/bin/bash

echo -n "Enter the number : "

read num

if [[ ( $num -eq 15 ) || ( $num -eq 45 ) ]]
then
echo "you won"
else
echo "You lost"
fi

