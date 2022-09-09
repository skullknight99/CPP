/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:04:55 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/08 17:40:33 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMateria_HPP
# define AMateria_HPP

#include <iostream>
#include <cstring>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria& obj);
		AMateria&	operator= (const AMateria& obj);
		virtual	~AMateria();
		std::string	const & getType() const;
		virtual	AMateria* clone() const = 0;
		virtual void	use(ICharacter& target);
};

#endif