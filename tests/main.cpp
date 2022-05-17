/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:27:51 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/17 14:15:43 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_containers/vector.hpp"
#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>
#include <map>

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
    std::map<int, std::string> m;

    m.insert(std::make_pair(64, "Hello"));
    m.insert(std::make_pair(23, "World"));
    m.insert(std::make_pair(31, "ABC"));
    m.insert(std::make_pair(1, "Test"));
    m.insert(std::make_pair(2, "HelloTwo"));

    std::cout << *m.begin() << std::endl;
}
