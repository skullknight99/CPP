/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:13:34 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/27 12:04:44 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name" , 100 , 95 , 12) , ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") {
	this->name = name;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DTrap destructor\n";
}

void	DiamondTrap::attack(std::string target) {
	std::cout << "DiamondTrap attacks : ";
	this->ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI() {
	std::cout << "Diamond Trap: "<< this->name << std::endl;
	std::cout << "ClapTrap: " << this->getname() << std::endl; 
}

std::string	DiamondTrap::DiamondName() {
	return (this->name);
}