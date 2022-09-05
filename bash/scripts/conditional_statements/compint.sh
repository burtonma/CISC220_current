#!/bin/bash

# compint.sh : Java-like compareTo comparison of integers

i1=$1
i2=$2
if [[ $i1 -ne $i2 ]]; then
    if [[ $i1 -lt $i2 ]]; then
        echo -1
    else
        echo 1
    fi
else 
    echo 0
fi
