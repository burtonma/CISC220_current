#!/bin/bash

# max.sh

# prints the maximum of two integer arguments
# prints the first integer if both values are equal
max2() {
    if (( $1 >= $2 )); then
        echo $1
    else
        echo $2
    fi
}

# exits with 0 if argument is an integer, 1 otherwise
is_int() {
    if [[ $1 =~ ^[-+]?[0-9]+$ ]]; then 
        return 0
    else
        return 1
    fi
}


if (( $# == 0 )); then 
    exit 1
fi
if is_int "$1"; then 
    hi=$1
else 
    exit 2
fi
while (( $# > 0 )); do
    if is_int "$1"; then 
        hi=$(max2 $hi $1)
    else
        exit 2
    fi
    shift
done
echo $hi
