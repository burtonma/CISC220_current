#!/bin/bash

# iseven.sh

if (( $# != 0 )); then
    val=$1
    if (( val % 2 != 0 )); then 
        exit 1
    fi
fi
