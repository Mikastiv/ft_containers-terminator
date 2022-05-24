/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 13:22:28 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests//set/set_tests.hpp"
#include "tests/map/map_tests.hpp"
#include "tests/stack/stack_tests.hpp"
#include "tests/vector/vector_tests.hpp"

int main()
{
    vec_check_typedefs();
    vec_test_assign_range();
    vec_test_assign();
    test_vec_assign_mixed();
    vec_test_assignment();
    vec_test_at();
    vec_test_back();
    vec_test_clear();
    vec_test_comparisons_eq();
    vec_test_comparisons_ne();
    vec_test_comparisons_lt();
    vec_test_comparisons_le();
    vec_test_comparisons_gt();
    vec_test_comparisons_ge();
    vec_test_ctor_copy();
    vec_test_ctor_range();
    vec_test_ctor_size();
    vec_test_ctor();
    vec_test_empty();
    vec_test_erase_range();
    vec_test_erase();
    vec_test_erase_mixed();
    vec_test_front();
    vec_test_get_allocator();
    vec_test_index_operator();
    vec_test_insert_range();
    vec_test_insert_size();
    vec_test_insert();
    vec_test_insert_mixed();
    vec_test_iterator();
    vec_test_iterator_comparisons();
    vec_test_riterator();
    vec_test_riterator_comparisons();
    vec_test_max_size();
    vec_test_pop_back();
    vec_test_push_back();
    vec_test_reserve();
    vec_test_resize();
    vec_test_swap();
    vec_test_random();

    stack_check_typedefs();
    stack_test_comparisons_eq();
    stack_test_comparisons_ne();
    stack_test_comparisons_lt();
    stack_test_comparisons_le();
    stack_test_comparisons_gt();
    stack_test_comparisons_ge();
    stack_test_misc();

    map_check_typedefs();
    map_test_ctor();
    map_test_ctor_copy();
    map_test_ctor_range();
    map_test_assignment();
    map_test_get_allocator();
    map_test_at();
    map_test_index_operator();
    map_test_iterator();
    map_test_riterator();
    map_test_empty();
    map_test_insert();
    map_test_insert_hint();
    map_test_insert_range();
    map_test_erase();
    map_test_erase_range();
    map_test_erase_key();
    map_test_swap();
    map_test_count();
    map_test_find();
    map_test_equal_range();
    map_test_lower_bound();
    map_test_upper_bound();
    map_test_key_comp();
    map_test_value_comp();
    map_test_random();
    map_test_comparisons_eq();
    map_test_comparisons_ne();
    map_test_comparisons_gt();
    map_test_comparisons_ge();
    map_test_comparisons_lt();
    map_test_comparisons_le();
    map_test_compare();

    set_check_typedefs();
    set_test_ctor();
    set_test_ctor_copy();
    set_test_ctor_range();
    set_test_assignment();
    set_test_get_allocator();
    set_test_iterator();
    set_test_riterator();
    set_test_empty();
    set_test_clear();
    set_test_insert();
    set_test_insert_hint();
    set_test_insert_range();
    set_test_erase();
    set_test_erase_key();
    set_test_erase_range();
    set_test_swap();
    set_test_count();
    set_test_find();
    set_test_equal_range();
    set_test_lower_bound();
    set_test_upper_bound();
    set_test_key_comp();
    set_test_value_comp();
    set_test_comparisons_eq();
    set_test_comparisons_ne();
    set_test_comparisons_lt();
    set_test_comparisons_le();
    set_test_comparisons_gt();
    set_test_comparisons_ge();
    set_test_random();
    set_test_compare();
}
