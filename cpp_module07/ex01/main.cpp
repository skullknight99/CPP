/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:38:47 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/20 12:07:13 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	private:
		int _n;
	public:
		Awesome(void) : _n(42) {return;}
		int		get(void) const {return this->_n;}
};

std::ostream& operator << (std::ostream& o, const Awesome &a) {o << a.get(); return o;}

template	<typename T> void	print(T const& x) {
	std::cout << x << std::endl;
	return ;
}

int	main() {
	int	tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);
	return (0);
}