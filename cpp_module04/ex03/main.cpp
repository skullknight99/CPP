/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:21:55 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/09 17:24:11 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"


int	main() {
	ICharacter	*Ashe = new	Character("Ashe");
	ICharacter	*Tryndamere = new	Character("Tryndamere");
	IMateriaSource	*src = new	MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria	*weapon = src->createMateria("ice");
	AMateria	*heal	= src->createMateria("cure");
	Ashe->equip(weapon);
	Ashe->equip(heal);
	Ashe->use(0, *Tryndamere);
	Ashe->use(1, *Tryndamere);
	
	delete	Ashe;
	delete	Tryndamere;
	delete	src;
	while (1);
}