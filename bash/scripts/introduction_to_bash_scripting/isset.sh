#!/bin/bash

var=""
if [[ ${var-_} ]]; then
    echo "not null, not set"
fi
if [[ ${var:-_} ]]; then
    echo "always true"
fi
if [[ ${var} ]]; then
    echo "not null, set"
fi
if [[ ${!var[@]} ]]; then
    echo "might be null, set"
fi

if [ $1 = "abc" ]; then
    echo "\$1 equal to abc"
fi
