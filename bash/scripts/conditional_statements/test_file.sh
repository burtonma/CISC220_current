#!/bin/bash
#
# test_file.sh: Evaluate the status of a file

file=$1
if [[ -e $file ]]; then                # no need to double quote $file
                                       # because word splitting is suppressed
  if [[ -f $file ]]; then
    echo "$file is a regular file"
  fi
  if [[ -d $file ]]; then
    echo "$file is a directory"
  fi
  if [[ -r $file ]]; then
    echo "$file is readable"
  fi
  if [[ -w $file ]]; then
    echo "$file is writable"
  fi
  if [[ -x $file ]]; then
    echo "$file is executable"
  fi
else
  echo "$file does not exist"
  exit 1
fi
