#! /bin/bash

echo -n "Enter the number"
read char 

case $char in
   a) echo "you entered $char is vowel";;
   e) echo "you entered $char is vowel";;
   i) echo "you entered $char is vowel";;
   o) echo "you entered $char is vowel";;
   u) echo "you entered $char is vowel";;
   *) echo "you entered $char is NOT VOWEL";;
esac

echo "check the character"
