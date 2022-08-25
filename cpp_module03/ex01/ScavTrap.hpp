/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:31:34 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/25 09:54:30 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <cstring>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	protected:
		std::string name;
		int			hp;
		int			mana;
		int			ad;
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &st);
		ScavTrap&	operator= (const ScavTrap &st);
};


#endif