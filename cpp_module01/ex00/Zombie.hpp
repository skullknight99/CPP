/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:32:28 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/08 13:03:52 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie{
	private:
		std::string	name;
	public:
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif