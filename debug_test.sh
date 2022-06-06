#!/bin/bash

source ./config.sh

FT_CONTAINERS="../$FT_CONTAINERS"

source tests/run_tests.sh && cd tests && debug_file $@
