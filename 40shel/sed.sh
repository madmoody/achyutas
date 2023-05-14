#!/bin/bash
echo "I am in GREEN" | sed ''/GREEN/s//`printf "33[32mGREEN33[0m"`/''
