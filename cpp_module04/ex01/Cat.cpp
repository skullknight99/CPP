/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:35:28 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/01 18:06:21 by acmaghou         ###   ########.fr       */
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
	std::cout << "Cat died ಥ_ಥ" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meowwww (=｀ω´=)" << std::endl;
}
