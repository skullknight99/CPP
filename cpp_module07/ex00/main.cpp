/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:26:23 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/20 10:15:47 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a,b) = " << ::min(a , b) << std::endl;
    std::cout << "max(a,b) = " << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c= " << c << ", d = " << d << std::endl;
    std::cout << "min(c,d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c,d) = " << ::max(c, d) << std::endl;
    return (0);
}