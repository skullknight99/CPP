/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:12:56 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/09 16:13:21 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
#define	ICE_HPP

#include <iostream>
#include <cstring>
#include "AMateria.hpp"

class Ice : public	AMateria
{
	public:
		Ice();
		Ice(const Ice &obj);
		Ice&	operator= (const Ice &obj);
		AMateria*	clone() const;
		void		use(ICharacter&	target);
		~Ice();
};

#endif