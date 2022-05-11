# ft_containers terminator

A tester for the project ft_containers at 42

## Usage

Set the location of your containers folder in tests/run_tests.sh (variable FT_CONTAINERS) <br/>
The tester expects every header files at the root of the folder assigned to FT_CONTAINERS

Run every tests: <br/>
```sh run_tests.sh```

Run one or more container tests: <br/>
```sh run_files.sh <CONTAINER_1> ... <CONTAINER_N>```
<br/>Example: <br/>
```sh run_tests.sh vector stack ...```

Run individual tests: <br/>
```sh run_files.sh <CONTAINER> <TEST_1> ... <TEST_N>```
<br/>Example: <br/>
```sh run_files.sh vector erase clear ...```

## Summary

This tester tracks allocations/dealloctions as well as contruction/destruction calls.

Leaks are tracked and bad use of ```std::allocator<T>::construct/std::allocator<T>::destroy```. Construct calls on initialized memory is a bug because the destructor of T will NOT be called. Following the same principle, destroy calls on uninitialized memory is also a bug because its calling a destructor on garbage values.

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

A vector of the struct object ```(ft::vector<object>)``` would leak memory everytime the destructor isn't called.
Thus when the tester reports N number of alive objects, consider it to be a bug. This also happens when 
```std::allocator<T>::construct``` is called on already initialized memory.
