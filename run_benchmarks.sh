#!/bin/bash

source ./config.sh

FT_CONTAINERS="../$FT_CONTAINERS"

source benchmarks/run_benchmarks.sh && cd benchmarks && run_container_benchmarks $@
