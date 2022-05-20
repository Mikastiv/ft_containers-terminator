#!/bin/sh

source ./config.sh

FT_CONTAINERS="../$FT_CONTAINERS"

source tests/run_tests.sh && cd tests && run_test_files $@
