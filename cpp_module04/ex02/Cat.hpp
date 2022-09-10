/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:32:18 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/10 12:07:28 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define CAT_HPP

#include <iostream>
#include <cstring>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*x;
	public:
		Cat();
		Cat(const Cat &c);
		Cat&	operator= (const Cat &c);
		virtual ~Cat();
		virtual void	makeSound() const;
};

#endif