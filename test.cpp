/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:45:43 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/15 13:01:12 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;

class Count
{
private:
	int	value;
public:
	Count();
	~Count();
	void	operator++ (int) {
		value+= 100;
	}

	void	display() {
		cout << "Count: " << value << endl;
	}
};

Count::Count(/* args */)
{
	this->value = 5;
}

Count::~Count()
{
}

int	main()
{
	Count count1;

	count1++;
	count1.display();
}