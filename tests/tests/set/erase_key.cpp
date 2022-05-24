#include "set_prelude.hpp"

void set_test_erase_key()
{
    SETUP_ARRAYS();

    {
        intset m;

        intset::size_type size = m.erase(64);

        PRINT_LINE("Erased?:", size);
    }

    {
        intset m(int_arr, int_arr + 16);

        intset::size_type size = m.erase(64);

        PRINT_LINE("Erased?:", size);

        m.erase(m.begin(), m.end());

        m.insert(23);
        m.insert(25);
        m.insert(1);
        m.insert(2);
        m.insert(3);
        m.insert(75);
        m.insert(30);
        m.insert(-22);
        m.insert(-23);
        m.insert(0);

        size = m.erase(64);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(0);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(75);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(1);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(2);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(3);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(23);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(23);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(30);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(-22);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(-23);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(-23);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(25);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(-23);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase(25);

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);
    }

    {
        strset m;

        strset::size_type size = m.erase("");
        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        m.insert("");
        m.insert("123");
        m.insert("1234");
        m.insert("123456789123456789123456789");
        m.insert("0");
        m.insert("");
        m.insert("");
        m.insert("000000000000000000000000");

        size = m.erase("1");

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase("123");

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase("123");

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase("");

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase("1234");

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase("123456789123456789123456789");

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase("000000000000000000000000");

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase("0");

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        size = m.erase("000000000000000000000000");

        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);
    }
}

MAIN(set_test_erase_key)
