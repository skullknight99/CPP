/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:32:18 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/30 11:51:21 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define CAT_HPP

#include <iostream>
#include <cstring>
#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain	*x;
	public:
		Cat();
		virtual ~Cat();
};

#endif