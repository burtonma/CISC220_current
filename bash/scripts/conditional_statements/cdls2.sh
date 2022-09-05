#!/bin/bash

# cdls.sh

if cd "$1" 2> /dev/null
then
    # cd successful
    ls
else
    # cd unsuccessful
    echo "error changing to directory $1" >&2
    exit 1
fi


