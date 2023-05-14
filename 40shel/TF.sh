#! /bin/bash

echo -n "Oceans are larger than lakes"
read User_input

case $User_input in
	"TRUE" | "true")
	echo "yes you are rite";;
	"FALSE" | "false")
	echo "no you are wrong";;
     *)	echo "Please enter either true or false";;

esac

