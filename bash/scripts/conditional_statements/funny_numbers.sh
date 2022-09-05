#!/bin/bash

x=$1
y=$2
z=$(( x + y ))
echo $z

if [[ $x -lt $y ]]; then
    echo "$x less than $y"
elif [[ $x -gt $y ]]; then
    echo "$x greater than $y"
else
    echo "$x equals $y"
fi