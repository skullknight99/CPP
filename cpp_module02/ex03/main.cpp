/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:33:01 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/19 11:39:18 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void )
{
	Point	A(0, 0), B(20.4,0), C(9.5, 30.1), X(10.12, 15.17);
	if (bsp(A, B, C, X))
		std::cout << "the point X is inside the triangle ABC" << std::endl;
	else
		std::cout << "the point X is not inside the triangle ABC" << std::endl;
	return (0);
}