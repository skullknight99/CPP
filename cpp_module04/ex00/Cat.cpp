/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:35:28 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/10 14:04:21 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat created (♡⸃ ◡ ⸂♡)" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat died ಥ_ಥ" << std::endl;
}

Cat::Cat(const Cat	&c) {
	*this = c;
}

Cat&	Cat::operator= (const Cat &c) {
	(void )c;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meowwww (=｀ω´=)" << std::endl;
}
