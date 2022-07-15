#!/bin/bash

source ./config.sh

FT_CONTAINERS="../$FT_CONTAINERS"

source tests/run_tests.sh && cd tests

if single_binary; then
    ./ft.out > ft.log
    ./std.out > std.log
    diff -u ft.log std.log
    time ./ft.out > /dev/null
    time ./std.out > /dev/null
fi
