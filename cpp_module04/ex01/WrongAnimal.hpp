/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:32:38 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/29 18:04:11 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <cstring>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &x);
		WrongAnimal&	operator= (const WrongAnimal &x);
		~WrongAnimal();
		std::string	getType() const;
		void	makeSound() const;
};

#endif