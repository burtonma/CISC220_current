#!/bin/bash

# test_regex.sh

if (( $# != 2 )); then
    echo "Usage: test_regex string regex" >&2
    exit 1
fi
str=$1
re=$2
if [[ $str =~ $re ]]; then
    echo "The string $str is matched by the regex $re"
else
    echo "The string $str is not matched by the regex $re"
fi

