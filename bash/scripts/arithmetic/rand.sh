#!/bin/bash

# rand.sh

if (( $# > 2 )); then
    echo "rand.sh: Wrong number of arguments" >&2
    exit 1
fi
if (( $# == 0 )); then
    echo $RANDOM
elif (( $# == 1 )); then 
    n=$(( $RANDOM % $1 ))
    echo $n
else
    n=$(( $RANDOM % ($2 - $1) + $1 ))
    echo $n
fi

