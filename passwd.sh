#!/bin/bash

Red=$'\033[0;31m'    #RED
Green=$'\033[0;32m'  #GREEN

read num
if [[ num -ge 0 ]]
then
    case $num in
	    1234) echo "${Green} Password success";;
		*) echo "${Red} Failure";;
esac	       
fi

