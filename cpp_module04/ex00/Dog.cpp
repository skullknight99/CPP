/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:36:51 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/01 12:02:48 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog created (♡⸃ ◡ ⸂♡)" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog died ಥ_ಥ" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "WOOF WOOF ▼(´ᴥ`)▼" << std::endl;
}
