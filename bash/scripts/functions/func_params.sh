#!/bin/bash

# func_params.sh

test() {
    param1=$1
    param2=$2
    param3=$3
    echo "$# arguments passed to function"
    echo "param1 = ${param1}"
    echo "param2 = ${param2}"
    echo "param3 = ${param3}"
}

# call function with varying number of arguments
test
echo "---"
test a
echo "---"
test a b
echo "---"
test a b c
echo "---"
test a b c d
echo "---"

# check if arguments passed to the script are still intact
n=$#
echo "${n} arguments passed to script"
for (( i = 1; i <= n ; i++ )); do
    echo "\$${i} = $1"
    shift
done
echo "---"