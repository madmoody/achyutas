#!/bin/bash

FRUITS=(apple mango banana orange)
echo "element 0: ${FRUITS[0]}"
echo "element 1: ${FRUITS[1]}"
echo "element 2: ${FRUITS[2]}"
echo "element 3: ${FRUITS[3]}"

echo "Length: ${#FRUITS[@]}"
echo "Whole array: ${FRUITS[@]}"
echo "Whole array: ${FRUITS[*]}"

echo "Looping over array elements"

for ITEM in ${FRUITS[@]}
do
    echo $ITEM
done

