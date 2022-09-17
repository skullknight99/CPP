/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:27:12 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/17 18:09:13 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalars.hpp"

int	main(int ac, char **av) {
	if (ac == 2) {
		std::string	s;
		s.assign(av[1]);
		try
		{
			std::cout << "char: " << s << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "int: " << std::stoi(s) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "float: " << std::stof(s) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "double: " << std::stod(s) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}