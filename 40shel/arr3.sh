#!/bin/bash

array=(zero one two three four)

echo ${array[0]}
echo ${array:0}
echo ${array:1}
echo "..............."
echo ${#array[0]}
echo ${#array}
echo ${#array[1]}
echo ${#array[*]}
echo ${#array[@]}
echo "..............."
array2=([0]="first element" [1]="second element" [3]="fourth element")
echo "The ${array2[0]}"   
echo "The ${array2[1]}"   
echo "The ${array2[2]}"   
echo "The ${array2[3]}"   
echo "The lenght of ${array2[0]} ${#array2[0]}" 
echo "The number of elements in the array ${#array2[*]}"
echo "..........................."


