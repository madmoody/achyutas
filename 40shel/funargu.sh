#!/bin/bash

function find_sum()
{
    echo "Arg count: $#"
    echo "Arg list: $@"
    SUM=0
 
    for ARG in $@
    do
	SUM=`expr $ARG + $SUM`
    done
    echo $SUM
}

find_sum 1 2 3 4 5

find_sum 10 20

