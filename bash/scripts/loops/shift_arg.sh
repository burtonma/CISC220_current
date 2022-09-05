#!/bin/bash

# shift_arg.sh

while (( $# > 0 )); do
    # do something with first positional parameter
    # e.g., print its value
    echo "$1"

    # now shift positional parameters
    shift
done