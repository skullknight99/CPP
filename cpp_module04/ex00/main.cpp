/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:28:29 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/29 16:17:01 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "poly.hpp"

int	main() {
	const WrongAnimal	*meta = new	WrongAnimal();
	const Animal	*j = new	Dog();
	const WrongAnimal	*i = new	WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete	meta;
	delete	j;
	delete	i;
	return (0);
}