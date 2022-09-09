/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:42:21 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/09 13:06:51 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	this->name = "";
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
	this->takenSlots = 0;
}

Character::~Character() {
	for (int i = 0; i < this->takenSlots; i++)
		delete	this->slots[i];
}

Character::Character(std::string name) {
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

Character::Character(const Character &obj) {
	*this = obj;
}

Character&	Character::operator= (const Character &obj) {
	this->name = obj.name;
	for (int i = 0; i < 4; i++)
		this->slots[i] = obj.slots[i];
	return *this;
}

std::string	const	&Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria *m) {
	if (m)
	{
		if (this->takenSlots == 4) {
			std::cout << "All slots taken" << std::endl;
			return ;
		}
		else {
			this->slots[takenSlots] = m;
			takenSlots++;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < this->takenSlots && idx > -1)
	{
		for (int i = idx; i < this->takenSlots - 1; i++)
			slots[i] = slots[i + 1];
		this->takenSlots--;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < this->takenSlots && idx > -1)
		this->slots[idx]->use(target);
}