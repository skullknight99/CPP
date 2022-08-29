/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:32:58 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/29 16:19:56 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "poly.hpp"

//--------Parent Class----------
Animal::Animal() {
	this->type = "";
	std::cout << "Creating unknown animal" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal died ಥ_ಥ" << std::endl;
}

Animal::Animal(std::string type) {
	std::cout << "Creating new Animal..." << std::endl;
	std::cout << "Setting animal type...:" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &x) {
	*this = x;
}

Animal&	Animal::operator= (const Animal &x) {
	this->type = x.type;
	return *this;
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound() const {
	if (getType() == "Cat")
		std::cout << "Meowwww (=｀ω´=)" << std::endl;
	else if (getType() == "Dog")
		std::cout << "WOOF WOOF ▼(´ᴥ`)▼" << std::endl;
}

//---------subclass one -----------

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog created (♡⸃ ◡ ⸂♡)" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog dead ಥ_ಥ" << std::endl;
}

//---------subclass two ------------

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat created (♡⸃ ◡ ⸂♡)" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat dead ಥ_ಥ" << std::endl;
}

//-------wrong class---------

WrongAnimal::WrongAnimal() {
	this->type = "";
	std::cout << "Wrong animal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	this->type = type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong animal dead" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::makeSound() const {
	if (getType() == "Cat")
		std::cout << "Meowwww (=｀ω´=)" << std::endl;
	else if (getType() == "Dog")
		std::cout << "WOOF WOOF ▼(´ᴥ`)▼" << std::endl;
}

//------wrong cat------

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Wrong cat created" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Wrong cat dead (nobody cares)" << std::endl;
}
