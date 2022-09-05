#!/bin/bash

# dynamic_scope.sh

f() {
    echo "  a at beginning of f()   = $a"
    a="f: hello"
    g
    echo "  a at end of f()         = $a"
    echo "  b at end of f()         = $b"
}

g() {
    echo "    a at beginning of g() = $a"
    b="g: goodbye"
    echo "    a at end of g()       = $a"
}

a="hello"
echo "a before calling f()      = $a"
f
echo "a after calling f()       = $a"
echo "b after calling f()       = $b"
