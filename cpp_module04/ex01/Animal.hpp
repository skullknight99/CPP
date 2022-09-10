/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:30:53 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/10 12:27:55 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <cstring>

class	Animal{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &x);
		Animal&	operator= (const Animal &x);
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string	getType() const;
};

#endif