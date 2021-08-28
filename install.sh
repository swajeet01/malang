#!/usr/bin/env bash

# Temp script to install MALang
HEADER_DIR="/usr/local/include"
BIN_DIR="/usr/local/bin"

if [[ $(id -u) -ne 0 ]]; then
    echo "Must run as root"
    exit 1
fi
echo "Copying MALang.h file"
if [[ $(cp "./MALang.h" "$HEADER_DIR/") -eq 0 ]]; then
    echo "MALang.h file copied"
else
    echo "MALang.h file copying failed"
    exit 1
fi
if [[ $(cp "./mln.sh" "$BIN_DIR/mln") -eq 0 ]]; then
    echo "mln script copied"
else
    echo "mln script copy failed"
    echo "Removing MALang.h file"
    rm "$HEADER_DIR/MALang.h"
    exit 1
fi
if [[ $(chown "$USER" "$BIN_DIR/mln") -eq 0 ]]; then
    echo "Still working"
else
    echo "Failed"
    echo "Removing header file"
    rm "$HEADER_DIR/MALang.h"
    echo "Removing mln script"
    rm "$BIN_DIR/mln"
    exit 1
fi
chmod "u+x" "$BIN_DIR/mln"
echo "Done"

exit 0
