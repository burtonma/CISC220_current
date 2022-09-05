#!/bin/bash

# for_each_arg.sh

i=1
for arg in $@; do
    echo "\$${i} : $arg"
    (( i++ ))
done
