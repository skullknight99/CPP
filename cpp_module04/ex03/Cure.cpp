/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:14:06 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/09 16:21:28 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {

}

Cure::Cure(const Cure &obj) {
	*this = obj;
}

Cure&	Cure::operator=(const Cure &obj) {
	(void)obj;
	return *this;
}

AMateria*	Cure::clone() const {
	return (new Cure());
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() {
}