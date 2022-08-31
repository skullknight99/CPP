/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:45:10 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/31 15:58:31 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Create brain" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "";
		std::cout << this->ideas[i] << std::endl;
	}
}

Brain::~Brain() {
	std::cout << "killing brain" << std::endl;
}

Brain::Brain(const Brain &b) {
	*this = b;
}

Brain&	Brain::operator= (const Brain &b) {
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = b.ideas[i];
	}
	return (*this);
}

std::string	const *Brain::getIdeas() const{
	return (this->ideas);
}

void	Brain::setIdeas(std::string *ideas) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
}