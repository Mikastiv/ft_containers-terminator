/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:49:59 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/16 10:12:14 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"
#include <list>

void vec_test_insert_range()
{
    SETUP_ARRAYS();

    {
        strvector v;

        v.insert(v.begin(), v.begin(), v.begin());

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.begin(), v.begin(), v.end());

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.end(), v.begin(), v.end());

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.begin(), s_string, s_string + s_size);

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.begin(), b_string, b_string + 10);

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.begin() + 20, b_string, b_string + b_size);

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.end(), b_string + 10, b_string + 15);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        std::list<int> li(s_int, s_int + s_size);

        intvector v(5, 1);

        v.insert(v.begin() + 3, li.begin(), li.end());

        CHECK_AND_PRINT_ALL(v);
    }

    {
        // This test checks if vector works with iterators tagged as std::input_iterator_tag
        std::istringstream str("1 2 3 4 5 6 7 8 9 0 A B C D E F");
        std::istreambuf_iterator<char> it(str), end;

        charvector v(2, 'U');

        v.insert(v.end(), it, end);

        CHECK_AND_PRINT_ALL(v);
    }
}

MAIN(vec_test_insert_range)
