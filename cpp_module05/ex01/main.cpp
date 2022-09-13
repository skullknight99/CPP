/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:45:09 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/13 13:09:31 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	// first case
	try {
	Bureaucrat b("b", 2);
	std::cout << b << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }
	// second case
    try {
        Bureaucrat x("x", 1);
        std::cout << x << std::endl;
        x.increment();
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }
	// third case
    try {
        Bureaucrat y("y", 150);
        std::cout << y << std::endl;
        y.decrement();
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }
	return 0;
}