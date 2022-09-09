/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:13:07 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/09 16:12:20 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
#define	CURE_HPP

#include <iostream>
#include <cstring>
#include "AMateria.hpp"

class Cure : public	AMateria
{
	public:
		Cure();
		Cure(const Cure &obj);
		Cure&	operator= (const Cure &obj);
		AMateria*	clone() const;
		void		use(ICharacter&	target);
		~Cure();
};

#endif