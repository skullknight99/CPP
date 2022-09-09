/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:40:55 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/08 17:41:36 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	this->type = "";
}

AMateria::AMateria(std::string const &type) {
	this->type = type;
}

AMateria::AMateria(const AMateria& obj){
	*this = obj;
}

AMateria&	AMateria::operator= (const AMateria& obj) {
	this->type = obj.type;
	return *this;
}

std::string const	&AMateria::getType() const {
	return (this->type);
}

void	AMateria::use(ICharacter& target) {
	(void)target;
}

AMateria::~AMateria() {
}