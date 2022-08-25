/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:36:21 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/25 10:47:20 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <cstring>
#include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hp;
		int			mana;
		int			ad;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap	&ct);
		ClapTrap&	operator= (const ClapTrap &ct);
		std::string	getname();
		int		gethp();
		int		getmana();
		int		getad();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};



#endif