#!/bin/bash

# ANSI Colors
RED="\033[31;1m"
GREEN="\033[32;1m"
YELLOW="\033[33;1m"
RST="\033[0m"

ECHO_FLAG="-e"

CXX="clang++"
CXXFLAGS="-Wall -Werror -Wextra -O3 -std=c++98 -I$FT_CONTAINERS -I."

# Print red text
print_err() {
    echo $ECHO_FLAG $RED$1$RST
}

print_msg() {
    echo $ECHO_FLAG $YELLOW$1$RST
}

do_benchmark() {
    if $CXX $CXXFLAGS -DNAMESPACE=ft $3 timer/timer.cpp; then
        print_msg "ft::$1 $2:"
        ./a.out
    else
        print_err "error compiling $3"
        return
    fi

    if ! $CXX $CXXFLAGS -DNAMESPACE=std $3 timer/timer.cpp; then
        print_err "warning: std test failed to compile"
    fi

    print_msg "std::$1 $2:"
    ./a.out
    print_msg "-------------------------------"
}

benchmark_container() {
    TESTS=$(find "./$1" -type f -name '*.cpp' | sort)

    if [[ ${#TESTS} == 0 ]] ; then
        return
    fi

    for test in $TESTS; do
        TEST_NAME=$(basename -- $test)
        TEST_NAME=${TEST_NAME%.*}

        do_benchmark $1 $TEST_NAME $test
    done

    rm -f a.out
}

benchmark_files() {
    TESTS=${@:2}

    for test in $TESTS; do
        TEST_NAME=$test
        TEST_FILE="$1/$TEST_NAME.cpp"

        do_benchmark $1 $TEST_NAME $TEST_FILE
    done

    rm -f a.out
}

run_container_benchmarks() {
    CONTAINERS="vector map set"

    if [ $# -ne 0 ]; then
        CONTAINERS=$@;
    fi

    for c in $CONTAINERS; do
        benchmark_container $c
    done
}

run_benchmark_files() {
    benchmark_files $1 ${@:2}
}
