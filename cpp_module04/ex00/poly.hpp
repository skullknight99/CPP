/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:28:26 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/29 16:18:52 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY_HPP
# define POLY_HPP

#include <iostream>
#include <cstring>

class	Animal{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal &x);
		Animal&	operator= (const Animal &x);
		void	makeSound() const;
		std::string	getType() const;
};

class Dog : public Animal
{
	public:
		Dog();
		virtual ~Dog();
};

class Cat : public Animal
{
	public:
		Cat();
		virtual ~Cat();
};

class WrongAnimal {
	private:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();
		std::string	getType() const;
		void	makeSound() const;
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
};

#endif