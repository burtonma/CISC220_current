#!/bin/bash

# backup.sh

in="$1"
out="$in_.bak"
cp "$in" "$out"