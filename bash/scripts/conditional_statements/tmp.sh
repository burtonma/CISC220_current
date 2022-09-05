#!/bin/bash

if ls *txt
then
    echo "Found some text files"
else
    echo "No text files"
fi

unset x
if [[ -v x ]]; then
    echo "x assigned"
else 
    echo "x not assigned"
fi
