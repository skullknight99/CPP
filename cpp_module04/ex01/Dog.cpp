/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:36:51 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/10 12:41:16 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog created (♡⸃ ◡ ⸂♡)" << std::endl;
	this->y = new Brain("u are literally a useless pet");
	if (!this->y)
		std::cout << "not enough space in skull for brain" << std::endl;
}

Dog::~Dog() {
	delete	y;
	std::cout << "Dog died ಥ_ಥ" << std::endl;
}

Dog::Dog(const Dog &d) {
	*this = d;
}

Dog&	Dog::operator= (const Dog &c) {
	Brain *x = new Brain(*c.y->getIdeas());
	this->type = c.type;
	this->y = x;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "WOOF WOOF ▼(´ᴥ`)▼" << std::endl;
}
