/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:30:48 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/09 15:08:18 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	this->takenSlots = 0;
	for (int i= 0; i < 4; i++)
		this->slots[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < this->takenSlots; i++)
		delete	this->slots[i];
}

MateriaSource::MateriaSource(const MateriaSource &obj) {
	*this = obj;
}

MateriaSource&	MateriaSource::operator= (const MateriaSource &obj) {
	for (int i = 0; i < 4; i++) {
		if (this->slots[i])
			this->slots[i] = obj.slots[i];
		else
			this->slots[i] = NULL;
	}
	this->takenSlots = obj.takenSlots;
	return *this;
}

void	MateriaSource::learnMateria(AMateria *m) {
	if (m) {
		if (this->takenSlots <= 3 && this->takenSlots > -1) {
			this->slots[this->takenSlots] = m;
			this->takenSlots++;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string  const& type) {
	AMateria	*ret = NULL;
	if (type == "ice")
		ret = new	Ice();
	else if (type == "cure")
		ret = new	Cure();
	return ret;
}