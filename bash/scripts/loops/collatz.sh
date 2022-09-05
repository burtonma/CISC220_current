#!/bin/bash

# collatz.sh

if (( $# == 0 )); then
    echo "collatz.sh: missing positive integer argument" >&2
    exit 1
else
    val=$1
fi
if [[ ! $val =~ ^[-+]?[0-9]+$ ]]; then
    echo "collatz.sh: argument is not an integer" >&2
    exit 1
fi
if (( val < 1 )); then
    echo "collatz.sh: argument is not positive" >&2
    exit 2
fi
echo $val
while (( val != 1 )); do
    if (( val % 2 == 0 )); then
        val=$(( val / 2 ))
    else
        val=$(( 3 * val + 1 ))
    fi
    echo $val
done
