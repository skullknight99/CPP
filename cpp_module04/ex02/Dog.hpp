/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:31:49 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/10 12:41:08 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define DOG_HPP

#include <iostream>
#include <cstring>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*y;
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &d);
		Dog&	operator= (const Dog &d);
		virtual void	makeSound() const;
};

#endif