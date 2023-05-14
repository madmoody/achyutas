#!/bin/bash


echo   "Enter the name"
read name
echo "my Entered  name: $name"
read name1 name2 name3
echo "my Entered  name: $name1 $name2 $name3"

read -p  'username : ' user_var
read -sp 'password :' pass_var    #sp is the flag help to hide value                   #p is the flag which help to read user
echo "username : $user_var"
echo "password : $pass_var"

echo "Enter the name : "
read -a names   #defining array 
echo "Names : ${names[0]},${names[1]}"


echo "Enter name : "
read 
echo "name : $REPLY"
