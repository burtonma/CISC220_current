#!/bin/bash

# namedsh.sh

if [[ $@ -ne 1 ]]; then
    # oops, no filename specified
    echo "namedsh.sh: output filename required" >&2
    exit 2
fi

if [[ -e $1 ]]; then
    # oops, specified file already exists
    echo "namedsh.sh: $1 already exists" >&2
    exit 1
fi

# specified does not exist, go ahead and create it
echo '#!/bin/bash' > ${1}
chmod u+x ${1}
