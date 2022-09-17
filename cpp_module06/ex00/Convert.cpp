/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:16:33 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/17 18:37:45 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static bool pseudoLiteral(std::string &s) {
    return s == "nan" || s == "nanf" || s == "+inf" || s == "inf" || s == "-inf"
            || s == "+inff" || s == "inff" || s == "-inff";
}

static void convertToChar(std::string &s) {
    if (pseudoLiteral(s)) {
        std::cout << "impossible" << std::endl;
        return ;
    }
    char c = static_cast<char>(stoi(s));
    if (c < ' ' || c > '~') {
        std::cout << "Non displayable" << std::endl;
        return ;
    }
    std::cout << c << std::endl;
}

static void convertToInt(std::string &s) {
    if (pseudoLiteral(s)) {
        std::cout << "Impossible" << std::endl;
        return ;
    }
    std::cout << std::stoi(s) << std::endl;
}

static void convertToFloat(std::string &s) {
    float nbr = std::stof(s);

    if (nbr - static_cast<int>(nbr) == 0) {
        std::cout << nbr << ".0f" << std::endl;
        return ;
    }
    std::cout << nbr << "f" << std::endl;
}

static void convertToDouble(std::string &s) {
    double nbr = std::stod(s);

    if (nbr - static_cast<int>(nbr) == 0) {
        std::cout << nbr << ".0" << std::endl;
        return ;
    }
    std::cout << nbr << std::endl;
}

void print(std::string &s) {
    std::cout << "char: ", convertToChar(s);
    std::cout << "int: ", convertToInt(s);
    std::cout << "float: ", convertToFloat(s);
    std::cout << "double: ", convertToDouble(s);
}