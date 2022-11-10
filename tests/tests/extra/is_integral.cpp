/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integral.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:19:34 by mleblanc          #+#    #+#             */
/*   Updated: 2022/07/13 18:20:15 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra_prelude.hpp"
#include <string>

struct non_integral_struct {
    int x;
    long y;
};

void extra_test_is_integral()
{
    std::cout << std::boolalpha;

    PRINT_IS_INTEGRAL(bool);
    PRINT_IS_INTEGRAL(char);
    PRINT_IS_INTEGRAL(signed char);
    PRINT_IS_INTEGRAL(short int);
    PRINT_IS_INTEGRAL(int);
    PRINT_IS_INTEGRAL(long int);
    PRINT_IS_INTEGRAL(unsigned char);
    PRINT_IS_INTEGRAL(unsigned short int);
    PRINT_IS_INTEGRAL(unsigned int);
    PRINT_IS_INTEGRAL(unsigned long int);

    PRINT_IS_INTEGRAL(const bool);
    PRINT_IS_INTEGRAL(const char);
    PRINT_IS_INTEGRAL(const signed char);
    PRINT_IS_INTEGRAL(const short int);
    PRINT_IS_INTEGRAL(const int);
    PRINT_IS_INTEGRAL(const long int);
    PRINT_IS_INTEGRAL(const unsigned char);
    PRINT_IS_INTEGRAL(const unsigned short int);
    PRINT_IS_INTEGRAL(const unsigned int);
    PRINT_IS_INTEGRAL(const unsigned long int);

    PRINT_IS_INTEGRAL(volatile char);
    PRINT_IS_INTEGRAL(volatile bool);
    PRINT_IS_INTEGRAL(volatile signed char);
    PRINT_IS_INTEGRAL(volatile short int);
    PRINT_IS_INTEGRAL(volatile int);
    PRINT_IS_INTEGRAL(volatile long int);
    PRINT_IS_INTEGRAL(volatile unsigned char);
    PRINT_IS_INTEGRAL(volatile unsigned short int);
    PRINT_IS_INTEGRAL(volatile unsigned int);
    PRINT_IS_INTEGRAL(volatile unsigned long int);

    PRINT_IS_INTEGRAL(const volatile char);
    PRINT_IS_INTEGRAL(const volatile bool);
    PRINT_IS_INTEGRAL(const volatile signed char);
    PRINT_IS_INTEGRAL(const volatile short int);
    PRINT_IS_INTEGRAL(const volatile int);
    PRINT_IS_INTEGRAL(const volatile long int);
    PRINT_IS_INTEGRAL(const volatile unsigned char);
    PRINT_IS_INTEGRAL(const volatile unsigned short int);
    PRINT_IS_INTEGRAL(const volatile unsigned int);
    PRINT_IS_INTEGRAL(const volatile unsigned long int);

    PRINT_IS_INTEGRAL(bool*);
    PRINT_IS_INTEGRAL(char*);
    PRINT_IS_INTEGRAL(signed char*);
    PRINT_IS_INTEGRAL(short int*);
    PRINT_IS_INTEGRAL(int*);
    PRINT_IS_INTEGRAL(long int*);
    PRINT_IS_INTEGRAL(unsigned char*);
    PRINT_IS_INTEGRAL(unsigned short int*);
    PRINT_IS_INTEGRAL(unsigned int*);
    PRINT_IS_INTEGRAL(unsigned long int*);

    PRINT_IS_INTEGRAL(const bool*);
    PRINT_IS_INTEGRAL(const char*);
    PRINT_IS_INTEGRAL(const signed char*);
    PRINT_IS_INTEGRAL(const short int*);
    PRINT_IS_INTEGRAL(const int*);
    PRINT_IS_INTEGRAL(const long int*);
    PRINT_IS_INTEGRAL(const unsigned char*);
    PRINT_IS_INTEGRAL(const unsigned short int*);
    PRINT_IS_INTEGRAL(const unsigned int*);
    PRINT_IS_INTEGRAL(const unsigned long int*);

    PRINT_IS_INTEGRAL(volatile char*);
    PRINT_IS_INTEGRAL(volatile bool*);
    PRINT_IS_INTEGRAL(volatile signed char*);
    PRINT_IS_INTEGRAL(volatile short int*);
    PRINT_IS_INTEGRAL(volatile int*);
    PRINT_IS_INTEGRAL(volatile long int*);
    PRINT_IS_INTEGRAL(volatile unsigned char*);
    PRINT_IS_INTEGRAL(volatile unsigned short int*);
    PRINT_IS_INTEGRAL(volatile unsigned int*);
    PRINT_IS_INTEGRAL(volatile unsigned long int*);

    PRINT_IS_INTEGRAL(const volatile char*);
    PRINT_IS_INTEGRAL(const volatile bool*);
    PRINT_IS_INTEGRAL(const volatile signed char*);
    PRINT_IS_INTEGRAL(const volatile short int*);
    PRINT_IS_INTEGRAL(const volatile int*);
    PRINT_IS_INTEGRAL(const volatile long int*);
    PRINT_IS_INTEGRAL(const volatile unsigned char*);
    PRINT_IS_INTEGRAL(const volatile unsigned short int*);
    PRINT_IS_INTEGRAL(const volatile unsigned int*);
    PRINT_IS_INTEGRAL(const volatile unsigned long int*);

    PRINT_IS_INTEGRAL(std::string);
    PRINT_IS_INTEGRAL(const std::string);
    PRINT_IS_INTEGRAL(volatile std::string);
    PRINT_IS_INTEGRAL(const volatile std::string);

    PRINT_IS_INTEGRAL(non_integral_struct);
    PRINT_IS_INTEGRAL(const non_integral_struct);
    PRINT_IS_INTEGRAL(volatile non_integral_struct);
    PRINT_IS_INTEGRAL(const volatile non_integral_struct);

    PRINT_IS_INTEGRAL(float);
    PRINT_IS_INTEGRAL(const float);
    PRINT_IS_INTEGRAL(volatile float);
    PRINT_IS_INTEGRAL(const volatile float);

    PRINT_IS_INTEGRAL(double);
    PRINT_IS_INTEGRAL(const double);
    PRINT_IS_INTEGRAL(volatile double);
    PRINT_IS_INTEGRAL(const volatile double);
    PRINT_IS_INTEGRAL(long double);
    PRINT_IS_INTEGRAL(const long double);
    PRINT_IS_INTEGRAL(volatile long double);
    PRINT_IS_INTEGRAL(const volatile long double);

    PRINT_IS_INTEGRAL(void);
}

MAIN(extra_test_is_integral)
