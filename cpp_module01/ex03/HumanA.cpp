/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:53:49 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/09 14:04:16 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) : wp(wp)
{
	this->name = name;
}

HumanA::~HumanA() {
	
}


void	HumanA::Attack() {
	std::cout << this->name << " attacks with their " << wp.getType() << std::endl;
}