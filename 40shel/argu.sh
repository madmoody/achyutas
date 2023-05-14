#! /bin/bash

echo $0 $1 $2 $3 '> echo $1 $2 $3'    #add statemetn to CML it will be printed along with it / it is nothing but commadnline orgument
args=("$@")    #store the argument as an array

echo ${args[0]} ${args[1]}  ${args[2]} ${args[3]}     #declaring the array


echo $@            #all argument are printed
echo $#            #it will print count of argument
