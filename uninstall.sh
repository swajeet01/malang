#!/usr/bin/env bash

# Temp script to uninstall MALang
HEADER_DIR="/usr/local/include"
BIN_DIR="/usr/local/bin"

if [[ $(id -u) -ne 0 ]]; then
    echo "Must run as root"
    exit 1
fi

if [[ -e "$HEADER_DIR/MALang.h" ]]; then
    echo "Removing MALang.h"
    rm "$HEADER_DIR/MALang.h"
    echo "Removed MALang.h"
else
    echo "MALang.h does not exists"
fi
if [[ -e "$BIN_DIR/mln" ]]; then
    echo "Removing mln script"
    rm "$BIN_DIR/mln"
    echo "Removed mln script"
else
    echo "mln script does not exists"
fi
