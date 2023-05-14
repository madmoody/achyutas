#!/bin/bash
echo -n "Enter the number : "
read num

case $num in 
100)
	echo "hundred!"
200)
       echo "double hundred!"
*)
echo "Niethe 100 nor 200"
esac
