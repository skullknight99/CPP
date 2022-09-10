/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:35:28 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/10 12:41:54 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat created (♡⸃ ◡ ⸂♡)" << std::endl;
	this->x = new Brain("meowwww! i am the better pet");
	if (!this->x)
		std::cout << "not enough space in skull for brain" << std::endl;
}

Cat::~Cat() {
	delete x;
	std::cout << "Cat died ಥ_ಥ" << std::endl;
}

Cat::Cat(const Cat &c) {
	*this = c;
}

Cat&	Cat::operator= (const Cat &c) {
	Brain *y = new Brain(*c.x->getIdeas());
	this->type = c.type;
	this->x = y;
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Meowwww (=｀ω´=)" << std::endl;
}
