/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:28:29 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/10 14:01:17 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main() {
	Animal	**Pets = new	Animal*[10];
	
	for (int i = 0; i < 5; i++)
		Pets[i] = new Cat;
	for (int i = 5; i < 10; i++)
		Pets[i] = new Dog;
	for (int i = 0; i < 10; i++)
		delete	Pets[i];
	//Example of instantiating a pure virtual class
	// Animal	*x = new	Animal;
	return (0);
}