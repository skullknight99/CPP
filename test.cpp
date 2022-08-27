/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:02:25 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/27 11:05:16 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;

class	A {
	public:
		void	show() {
			cout << "Hello from A\n";
		}
};

class B : virtual public A{
};

class C : virtual public A {	
};

class D : public B, public C {
};

int main() {
	D	object;
	object.show();
}