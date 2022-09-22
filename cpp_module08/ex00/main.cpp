/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:38:18 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/22 17:13:36 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main() {
	std::vector<int>	vect;
	vect.push_back(13);
	vect.push_back(7);
	vect.push_back(-12);
	vect.push_back(-1);
	try
	{
		std::cout << "index of a= -1 is: "<< easyfind(vect, -1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "index of a=100 is: "<< easyfind(vect, 100) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}