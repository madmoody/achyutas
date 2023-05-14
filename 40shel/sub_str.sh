#!/bin/bash

str="I Love Bengalore"

#substr=${str:0:6}

substr=$(echo $str| cut -d ' ' -f 1-3)
echo $substr
