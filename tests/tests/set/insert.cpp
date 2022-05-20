/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:21:13 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 23:22:32 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

#define PRINT_INS_PAIR(p)                                                                          \
    {                                                                                              \
        PRINT_LINE("It:", *p.first);                                                               \
        PRINT_LINE("Inserted:", p.second ? "true" : "false");                                      \
    }

void set_test_insert()
{
    SETUP_ARRAYS();

    {
        typedef NAMESPACE::pair<intset::iterator, bool> ins_pair;

        intset m;

        ins_pair p = m.insert(64);

        PRINT_INS_PAIR(p);

        p = m.insert(64);

        PRINT_INS_PAIR(p);

        p = m.insert(0);

        PRINT_INS_PAIR(p);

        p = m.insert(-23);

        PRINT_INS_PAIR(p);

        p = m.insert(64);

        PRINT_INS_PAIR(p);
    }
    {
        typedef NAMESPACE::pair<strset::iterator, bool> ins_pair;

        strset m;

        ins_pair p = m.insert("64");

        PRINT_INS_PAIR(p);

        p = m.insert("64n");

        PRINT_INS_PAIR(p);

        p = m.insert("0n");

        PRINT_INS_PAIR(p);

        p = m.insert("-23n");

        PRINT_INS_PAIR(p);

        p = m.insert("64n");

        PRINT_INS_PAIR(p);
    }
}

MAIN(set_test_insert)
