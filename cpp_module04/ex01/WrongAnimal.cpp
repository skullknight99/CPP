/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:36:28 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/29 16:36:43 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "";
	std::cout << "Wrong animal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	this->type = type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong animal dead" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "I'm not like the rest of you, i am stronger, smarter, i am better... I AM BETTER" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &x) {
	this->type = x.type;
}

WrongAnimal&	WrongAnimal::operator= (const WrongAnimal &x) {
	this->type = x.type;
	return (*this);
}