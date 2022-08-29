/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:35:16 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/29 16:37:48 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "";
	std::cout << "Creating unknown animal" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal died ಥ_ಥ" << std::endl;
}

Animal::Animal(std::string type) {
	std::cout << "Creating new Animal..." << std::endl;
	std::cout << "Setting animal type...:" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &x) {
	*this = x;
}

Animal&	Animal::operator= (const Animal &x) {
	this->type = x.type;
	return *this;
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound() const {
	if (getType() == "Cat")
		std::cout << "Meowwww (=｀ω´=)" << std::endl;
	else if (getType() == "Dog")
		std::cout << "WOOF WOOF ▼(´ᴥ`)▼" << std::endl;
}
