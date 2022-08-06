/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:12:56 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/06 16:27:45 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->nbr_of_contacts = 0;
}

static string	retrieve_info(string s){
	string	res;
	
	cout << s;
	getline(cin, res);
	if (!cin.good())
	{
		cout << "CTRL+D pressed\nExiting phonebook...\n";
		exit(1);
	}
	return (res);
}

void	PhoneBook::add_contact()
{
	string	fname = retrieve_info("first name: ");
	string	lname = retrieve_info("second name: ");
	string	nickn = retrieve_info("nickname: ");
	string	phnum = retrieve_info("phone number: ");
	string	darksec = retrieve_info("darkest secret: ");

	Contact Contact(fname, lname, nickn, phnum, darksec);
	this->contacts[nbr_of_contacts++ % 8] = Contact;
}

void	PhoneBook::get_contact(int index)
{
	if (index > 7 || index >= this->nbr_of_contacts || index < 0) {
		cout << "There's no contact corresponding this index\n";
		return ;
	}
	Contact	contact = this->contacts[index];
	cout << "first name: " << contact.getfname() << endl;
	cout << "last name: " << contact.getlname() << endl;
	cout << "nickname: " << contact.getnickn() << endl;
	cout << "phone number: " << contact.getphnum() << endl;
	cout << "darkest secret: " << contact.getdarksec() << endl;
}

static void	out_info(string s)
{
	cout << s.substr(0, 10) << (s.length() > 10 ? "." : "");
}

void	PhoneBook::get_contacts_list()
{
	for (int i = 0; i < this->nbr_of_contacts; i++)
	{
		Contact	con = contacts[i];
		cout << i << "|";
		out_info(con.getfname());
		cout << "|";
		out_info(con.getlname());
		cout << "|";
		out_info(con.getnickn());
	}
	string	nbr;
	int		index;
	cout << "index: ";
	getline(cin, nbr);
	stringstream	ss;
	ss << nbr;
	if (!(ss >> index)) {
		cout << "input error\nExiting phonebook...\n";
		return ;
	}
	get_contact(index);
}