/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:41:46 by acmaghou          #+#    #+#             */
/*   Updated: 2022/07/24 08:22:25 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(){
	PhoneBook	phonebook = PhoneBook();
	while(1)
	{
		string	cmd;
		cout << "PhoneBook$";
		getline(cin, cmd);
		if (!cin.good()) {
			cout << "Pressed CTRL + D\nExiting...\n";
			exit(0);
		}
		if (cmd == "ADD")
			phonebook.add_contact();
		else if (cmd == "SEARCH")
			phonebook.get_contacts_list();
		else if (cmd == "EXIT")
			exit(0);
		else
			cout << "PhoneBook: " << cmd << ": command not found\n";
	}
}