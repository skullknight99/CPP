/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:09:55 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/09 16:39:36 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"

class	Character : public ICharacter {
	private:
		std::string	name;
		AMateria	*slots[4];
		int			takenSlots;
	public:
        Character();
        Character(std::string name);
        Character(const Character &obj);
		Character&	operator= (const Character &obj);
		~Character();
		std::string	const & getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};