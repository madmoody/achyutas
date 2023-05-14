#!/bin/bash
echo "Total no. of argument: $#"
echo "Argument list: $@" # Commonly used
echo "Argument list: $*"

# Iterate over arguments ($@)
for ARG in $@
do
    echo $ARG
done


