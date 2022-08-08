/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:48:56 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/08 17:42:02 by acmaghou         ###   ########.fr       */
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
		Zombie();
		Zombie( std::string name );
		Zombie(const Zombie &obj);
		void operator = (const Zombie &n) {
			name = n.name;
		}
		~Zombie( void );
		void	announce( void );
};

Zombie*	zombieHorde(int N, std::string name);

#endif