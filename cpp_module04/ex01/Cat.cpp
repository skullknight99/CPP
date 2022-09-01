/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:35:28 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/01 12:36:55 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat created (♡⸃ ◡ ⸂♡)" << std::endl;
	this->x = new Brain;
	if (!this->x)
		std::cout << "not enough space in skull for brain" << std::endl;
	this->x->setIdeas("XD I AM A BETTER PET DUDE");
}

Cat::~Cat() {
	std::cout << "Cat died ಥ_ಥ" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meowwww (=｀ω´=)" << std::endl;
}
