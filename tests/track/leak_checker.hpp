/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leak_checker.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:08:24 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/08 20:09:17 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "memory_tracker.hpp"

class leak_checker
{
    public:
        static void check_leaks();
        static void check_destructor_calls();

    private:
        static memory_tracker tracker;
};
