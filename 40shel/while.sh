#!/bin/bash
count=0

while [ $count -lt 5 ]
do
  echo "Loop is ${count}"
  count=$((count + 1))
done

