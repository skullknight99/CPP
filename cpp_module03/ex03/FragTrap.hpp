/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:52:22 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/27 16:40:10 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void	highFivesGuys( void );
};


#endif