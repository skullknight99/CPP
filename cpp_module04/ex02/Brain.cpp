/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:45:10 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/10 14:05:47 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Create brain" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain(std::string ideas) {
	std::cout << "Create brain" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas;
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

void	Brain::setIdeas(std::string instinct) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = instinct;
}