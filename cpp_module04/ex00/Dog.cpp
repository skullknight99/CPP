/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:36:51 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/10 14:04:50 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog created (♡⸃ ◡ ⸂♡)" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog died ಥ_ಥ" << std::endl;
}

Dog::Dog(const Dog	&d) {
	*this = d;
}

Dog&	Dog::operator= (const Dog &d) {
	(void )d;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "WOOF WOOF ▼(´ᴥ`)▼" << std::endl;
}
