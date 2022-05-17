/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_hint.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:14:19 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/17 18:09:09 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"
#include "utility.hpp"

void map_test_insert_hint()
{
    SETUP_ARRAYS();

    {
        intmap m;

        intmap::iterator it = m.insert(m.end(), NAMESPACE::make_pair(64, "Gamepak"));

        PRINT_PAIR_REF(*it);

        it = m.insert(m.end(), NAMESPACE::make_pair(64, "Test"));

        PRINT_PAIR_REF(*it);

        it = m.insert(m.end(), NAMESPACE::make_pair(100, "100$"));

        PRINT_PAIR_REF(*it);

        it = m.end();
        --it;

        it = m.insert(it, NAMESPACE::make_pair(100, "12345"));

        PRINT_PAIR_REF(*it);

        it = m.insert(it, NAMESPACE::make_pair(69, "420"));

        PRINT_PAIR_REF(*it);
    }
}

MAIN(map_test_insert_hint)
