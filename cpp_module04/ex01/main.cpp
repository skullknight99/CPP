/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:28:29 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/01 12:33:59 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main() {
	Animal	**Pets = new	Animal*[10];
	
	for (int i = 0; i < 5; i++)
	{
		Pets[i] = new Cat;
		std::cout << Pets[i]->getType() << std::endl;
	}
	for (int i = 5; i < 10; i++)
	{
		Pets[i] = new Dog;
		std::cout << Pets[i]->getType() << std::endl;
	}
	for (int i = 0; i < 10; i++)
		delete	Pets[i];
	return (0);
}