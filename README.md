# ft_containers terminator

A tester for the project ft_containers at 42

## Usage

Set the location of your containers folder in config.sh (variable FT_CONTAINERS) <br/>
The tester expects every header files at the root of the folder assigned to FT_CONTAINERS

Run every tests: <br/>
```sh run_tests.sh```

Run one or more container tests: <br/>
```sh run_tests.sh <CONTAINER_1> ... <CONTAINER_N>```
<br/>Example: <br/>
```sh run_tests.sh vector stack ...```

Run individual tests: <br/>
```sh run_test_files.sh <CONTAINER> <TEST_1> ... <TEST_N>```
<br/>Example: <br/>
```sh run_test_files.sh vector erase clear ...```

Run every benchmark: <br/>
```sh run_benchmarks.sh```

Run one or more container benchmarks: <br/>
```sh run_benchmarks.sh <CONTAINER_1> ... <CONTAINER_N>```
<br/>Example: <br/>
```sh run_benchmarks.sh vector map ...```

Run individual benchmarks: <br/>
```sh run_benchmark_files.sh <CONTAINER> <BENCHMARK_1> ... <BENCHMARK_N>```
<br/>Example: <br/>
```sh run_benchmark_files.sh vector erase insert ...```

## Summary

This tester tracks allocations/dealloctions as well as construction/destruction calls.

Leaks are tracked and bad use of ```Allocator::construct/Allocator::destroy``` (Allocator is the template parameter for the container's allocator). Construct calls on initialized memory is a bug because the destructor of T will NOT be called. Also, destroy calls on uninitialized memory is also a bug because its calling a destructor on garbage values.

For example, consider this struct: <br/>
```
struct object
{
    int* ptr;

    object()
    {
        ptr = new int[10]();
    }

    object(const object&)
    {
        ptr = new int[10]();
    }

    ~object()
    {
        delete[] ptr;
    }
};
```

A vector of the struct object ```(ft::vector<object>)``` would leak memory everytime the destructor isn't called. Thus when the tester reports N number of alive objects, consider it to be a bug. This also happens when ```Allocator::construct``` is called on already initialized memory.

## Debug helper

You can create a executable (debug.out) for debugging a particular test with: <br/>
```sh debug_file.sh <CONTAINER> <TEST>```
<br/>Example: <br/>
```sh debug_file.sh vector erase```



## Improvements/Bug fixes

Issues and pull requests are welcome for improvements and bugfixes!
