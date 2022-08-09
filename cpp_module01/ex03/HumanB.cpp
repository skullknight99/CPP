/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:53:44 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/09 14:26:11 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

HumanB::~HumanB() {
	
}

void	HumanB::setWeapon(Weapon &wp)
{
	this->wp = &wp;
}

void	HumanB::Attack() {
	std::cout << this->name << " attacks with their " << wp->getType() << std::endl;
}