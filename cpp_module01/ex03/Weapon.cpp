/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:53:38 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/09 13:34:55 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	
}
Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon() {
	
}

const	std::string	Weapon::getType() {
	return (this->type);
}

void	Weapon::setType(std::string newType) {
	this->type = newType;
}