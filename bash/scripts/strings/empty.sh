#!/bin/bash

# empty.sh

# Assigns a value to str or unsets str depending on if s_in is set or unset
set_str() {
    if [[ -n ${s_in+x} ]]; then 
        str=$s_in
    else 
        unset str
    fi
}


# s_in is the original input string from the command line
# s_out is equal to s_in if s_in is unset, otherwise it is equal
#    to the string UNSET
if [[ $# -gt 0 ]]; then
    s_in="$1"
    s_out="$s_in"
else
    s_out=UNSET
fi

word="WORD"

set_str
res1=${str-$word}
new_str=${str-UNSET}
echo -e "\${${s_out}-${word}} \t${res1}\tstr=${new_str}"

set_str
res2=${str:-$word}
new_str=${str-UNSET}
echo -e "\${${s_out}:-${word}}\t${res2}\tstr=${new_str}"

set_str
res3=${str=$word}
new_str=${str-UNSET}
echo -e "\${${s_out}=${word}} \t${res3}\tstr=${new_str}"

set_str
res4=${str:=$word}
new_str=${str-UNSET}
echo -e "\${${s_out}:=${word}}\t${res4}\tstr=${new_str}"

set_str
res5=${str+$word}
new_str=${str-UNSET}
echo -e "\${${s_out}+${word}} \t${res5}\tstr=${new_str}"

set_str
res6=${str:+$word}
new_str=${str-UNSET}
echo -e "\${${s_out}:+${word}}\t${res6}\tstr=${new_str}"

set_str
res7=${str?$word}
new_str=${str-UNSET}
echo -e "\${${s_out}?${word}} \t${res7}\tstr=${new_str}"

set_str
res8=${str:?$word}
new_str=${str-UNSET}
echo -e "\${${s_out}:?${word}}\t${res8}\tstr=${new_str}"
