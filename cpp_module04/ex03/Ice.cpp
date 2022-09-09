/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:11:11 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/09 16:14:26 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice() : AMateria("ice") {
}

Ice::Ice(const Ice &obj) {
	*this = obj;
}

Ice&	Ice::operator=(const Ice &obj) {
	(void)obj;
	return *this;
}

AMateria*	Ice::clone() const {
	return (new Ice());	
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {
}