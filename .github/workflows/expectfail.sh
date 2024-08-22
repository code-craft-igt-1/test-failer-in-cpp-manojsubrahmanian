#!/bin/bash

if $1; then
    echo "FALSE POSITIVE! Expected failure but succeeded"
    exit 0
else
    echo "Failed as expected"
fi
