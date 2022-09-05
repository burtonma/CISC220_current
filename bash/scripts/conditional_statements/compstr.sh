#!/bin/bash

# compstr.sh : Java-like compareTo comparison of strings

s1=$1
s2=$2
if [[ $s1 == $s2 ]]; then
    echo 0
elif [[ $s1 < $s2 ]]; then
    echo -1
else
    echo 1" : $s1 comes after $s2"
fi
