/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:36:18 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/27 16:35:39 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//------Constructor and destructor--------
ClapTrap::ClapTrap() {
	this->name = "";
	this->hp = 0;
	this->mana = 0;
	this->ad = 0;
}

ClapTrap::ClapTrap(std::string str)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = str;
	this->hp = 10;
	this->mana = 10;
	this->ad = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called\n";
}

//----- constructor to update claptrap ------
ClapTrap::ClapTrap(std::string str, int x, int y, int z) {
	std::cout << "ClapTrap constructor called with 4 parameters" << std::endl;
	this->name = str;
	this->hp = x;
	this->mana = y;
	this->ad = z;
}

//---------copy constructor and assignment overload-----
ClapTrap&	ClapTrap::operator= (const ClapTrap &ct) {
	this->name = ct.name;
	this->hp = ct.hp;
	this->mana = ct.mana;
	this->ad = ct.ad;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &ct) {
	*this = ct;
}

//---------attack, takeDamage, beRepaired---------
void	ClapTrap::attack(const std::string& target) {
	this->mana--;
	std::cout << this->name << " attacks " << target;
	std::cout << ", causing " << this->ad << " point of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->hp -= amount;
	std::cout << this->name << " took " << amount << " damage\n";
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->mana--;
	this->hp += amount;
	std::cout << this->name << " healed for " << amount << std::endl;
}

//-------getters----------

int	ClapTrap::gethp() {
	return (this->hp);
}

int	ClapTrap::getmana() {
	return (this->mana);
}

int	ClapTrap::getad() {
	return (this->ad);
}

std::string	ClapTrap::getname() {
	return (this->name);
}