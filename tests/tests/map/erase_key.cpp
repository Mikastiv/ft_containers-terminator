/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_key.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:39:14 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/18 14:22:16 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

void map_test_erase_key()
{
    SETUP_ARRAYS();

    {
        intmap m;

        intmap::size_type size = m.erase(64);

        PRINT_LINE("Erased?:", size);
    }

    {
        intmap m(intstr_arr, intstr_arr + 16);

        intmap::size_type size = m.erase(64);

        PRINT_LINE("Erased?:", size);

        m.erase(m.begin(), m.end());

        m.insert(NAMESPACE::make_pair(23, "23n"));
        m.insert(NAMESPACE::make_pair(25, "asdasdfsdfsafdsf"));
        m.insert(NAMESPACE::make_pair(1, "asdssdfdfdffffff"));
        m.insert(NAMESPACE::make_pair(2, "dsfdffffdfdfdsdfdffa"));
        m.insert(NAMESPACE::make_pair(3, "sssdfs"));
        m.insert(NAMESPACE::make_pair(75, "dfse"));
        m.insert(NAMESPACE::make_pair(30, "sefsadfasdfasdfsadfasdfsf"));
        m.insert(NAMESPACE::make_pair(-22, "dfhkihgbnfbcx5reterjhd"));
        m.insert(NAMESPACE::make_pair(-23, "sdffgdfgrefet34thfgheewt"));
        m.insert(NAMESPACE::make_pair(0, "98y4rtuohwidsjusdossefsse"));

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
        strmap m;

        strmap::size_type size = m.erase("");
        PRINT_LINE("Erased?:", size);
        PRINT_ALL(m);

        m.insert(NAMESPACE::make_pair("", ""));
        m.insert(NAMESPACE::make_pair("123", "kjhgfdsdffghsfghdfgh"));
        m.insert(NAMESPACE::make_pair("1234", "gfdsadgg"));
        m.insert(NAMESPACE::make_pair("123456789123456789123456789", "49857459898674568464"));
        m.insert(NAMESPACE::make_pair("0", "2345456456456456"));
        m.insert(NAMESPACE::make_pair("", ""));
        m.insert(NAMESPACE::make_pair("", "9459845984598498"));
        m.insert(NAMESPACE::make_pair("000000000000000000000000", "1111111111111111111111111111"));

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

MAIN(map_test_erase_key)
