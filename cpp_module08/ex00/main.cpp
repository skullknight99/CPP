/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:38:18 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/23 14:55:40 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> x;
        x.push_back(0);
        x.push_back(-12);
        x.push_back(1);
        x.push_back(20);
        x.push_back(512);
        int dist = std::distance(x.begin(), easyfind(x, 10));
        std::cout << "iterator is: "<< dist << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::list <int> x;
        x.push_back(0);
        x.push_back(1);
        x.push_back(22);
        x.push_back(30);
        x.push_back(-12);
        int dist = std::distance(x.begin(), easyfind(x, -12));
        std::cout << "iterator is: " << dist << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::deque <int> x;
        x.push_back(12);
        x.push_back(-55);
        x.push_back(777);
        x.push_back(-666);
        int dist = std::distance(x.begin(), easyfind(x, 777));
        std::cout << "iterator is: " << dist << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // try
    // {
    //     std::array <int, 4> x = {12, -55, 777, -666};
    //     int dist = std::distance(x.begin(), easyfind(x, 777));
    //     std::cout << "iterator is: " << dist << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
}
