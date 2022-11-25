# ft_containers terminator

A tester for the project ft_containers at 42

## Beware

<strong>Every functions in the std::uninitialized family will show KOs in the tester </strong> because they don't use the allocator passed as a template argument to the container. It will show <strong>'Called destroy on uninitialized memory'</strong>.

## Usage

Set the location of your containers folder in config.sh (variable FT_CONTAINERS) <br/>
The tester expects every header files at the root of the folder assigned to FT_CONTAINERS <br/>
Every header files are expected to follow STL file names (vector -> vector.hpp, map -> map.hpp, type_traits -> type_traits.hpp, ...)

Run every tests: <br/>
`./test_containers.sh`

Run one or more container tests: <br/>
`./test_containers.sh <CONTAINER_1> ... <CONTAINER_N>`
<br/>Example: <br/>
`./test_containers.sh vector stack ...`

Run individual tests: <br/>
`./test_files.sh <CONTAINER> <TEST_1> ... <TEST_N>`
<br/>Example: <br/>
`./test_files.sh vector erase clear ...`

Run every benchmark: <br/>
`./benchmark_containers.sh`

Run one or more container benchmarks: <br/>
`./benchmark_containers.sh <CONTAINER_1> ... <CONTAINER_N>`
<br/>Example: <br/>
`./benchmark_containers.sh vector map ...`

Run individual benchmarks: <br/>
`./benchmark_files.sh <CONTAINER> <BENCHMARK_1> ... <BENCHMARK_N>`
<br/>Example: <br/>
`./benchmark_files.sh vector erase insert ...`

## Debug helper

You can create a executable (debug.out) for debugging a particular test with: <br/>
`./debug_test.sh <CONTAINER> <TEST>`
<br/>Example: <br/>
`./debug_test.sh vector erase`

## Summary

This tester tracks allocations/dealloctions as well as construction/destruction calls.

Leaks are tracked and bad use of `Allocator::construct/Allocator::destroy` (Allocator is the template parameter for the container's allocator). Construct calls on initialized memory is a bug because the destructor of T will NOT be called on the old value nor will the operator=. Also, destroy calls on uninitialized memory is also a bug because its calling a destructor on garbage values.

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

A vector of the struct object `(ft::vector<object>)` would leak memory everytime the destructor isn't called. Thus when the tester reports N number of alive objects, consider it to be a bug. This also happens when `Allocator::construct` is called on already initialized memory.

## NOTE

For leak detection/object tracking to work, every allocations, deallocations, contructions and destructions have to be done with the allocator passed as a template argument. This applies to every containers.

## Improvements/Bug fixes

Issues and pull requests are welcome for improvements and bugfixes!
