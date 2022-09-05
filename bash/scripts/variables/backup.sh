#!/bin/bash

# backup.sh

in="$1"
out="${in}_.bak"
cp "$in" "$out"
