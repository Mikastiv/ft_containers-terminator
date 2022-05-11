/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:27:51 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 20:17:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_containers/vector.hpp"
#include <memory>
#include <vector>

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

int main()
{
    std::allocator<object> alloc;

    object* arr = alloc.allocate(10);
    object o;

    for (int i = 0; i < 10; ++i) {
        alloc.construct(arr + i, o);
    }
    for (int i = 0; i < 10; ++i) {
        alloc.construct(arr + i, o);
    }
    for (int i = 0; i < 10; ++i) {
        alloc.destroy(arr + i);
    }

    alloc.deallocate(arr, 10);
}
