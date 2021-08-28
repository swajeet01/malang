#!/usr/bin/env bash

# Temp script to compile mln files
if [[ "$#" -lt 1 ]]; then
    echo "$0: No input file specified"
    exit 1
fi
if [[ ! -d "out/" ]]; then
    mkdir "out/" || exit 1;
fi
declare -a ARGS
for ARG; do
    if [[ "$ARG" == *.mln ]]; then
        ARGS+=("out/$ARG.c")
        cp "$ARG" "out/$ARG.c"
        cpp "out/$ARG.c" > "out/$ARG.c.gen"
    else
        ARGS+=("$ARG")
    fi
done
if [[ "$CCOMP" ]]; then
    $CCOMP "${ARGS[@]}"
    exit "$?"
else
    gcc "${ARGS[@]}"
    exit "$?"
fi
exit 0
