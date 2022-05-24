/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_prelude.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:20:27 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/22 19:21:05 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "vector.hpp"
#include <vector>

#include "prelude.hpp"

#define MAXSIZE ((std::size_t)MAXRAM / sizeof(int))
