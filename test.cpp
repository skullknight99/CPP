/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:45:43 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/16 14:19:22 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;

class MyClass
{
private:
	string	salute;
public:
	MyClass();
	void	setString(string str)
	{
		this->salute = str;
	}
	string	getString()
	{
		return (this->salute);
	}
	~MyClass();
	string	operator+ () {
		this->salute + this->salute;
	}
};

MyClass::MyClass(/* args */)
{
	this->salute = "";
}

MyClass::~MyClass()
{
}

int	main()
{
	MyClass p1;
	MyClass p2;
	p1.setString("Hello, ");
	p2.setString("World!");
	cout << p1.getString() + p2.getString();
}