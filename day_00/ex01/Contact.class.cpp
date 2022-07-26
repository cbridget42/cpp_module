/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:13:55 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/26 16:19:24 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

bool Contact::addnewcont(void) {
	std::cout << "Enter your first name: ";
	if (!Contact::ft_getline(first_name))
		return false;
	std::cout << "Enter your last name: ";
	if (!Contact::ft_getline(last_name))
		return false;
	std::cout << "Enter your nickname: ";
	if (!Contact::ft_getline(nickname))
		return false;
	std::cout << "Enter your phone number: ";
	if (!Contact::ft_getline(phone_number))
		return false;
	std::cout << "Enter your darkest secret: ";
	if (!Contact::ft_getline(darkest_secret))
		return false;
	if ((first_name.size() + last_name.size() + nickname.size() \
		+ phone_number.size() + darkest_secret.size()) == 0) {
			std::cout << "error: your contact was not added, because it's empty!\n";
			return false;
		}
	return true;
}

void Contact::displaytable(int index) {
	std::cout << '|' << std::left << std::setw(10) << index << '|';
	Contact::displaycell(first_name);
	Contact::displaycell(last_name);
	Contact::displaycell(nickname);
	std::cout << '\n';
}

void Contact::displaycell(std::string &line) {
	if (line.size() >= 10)
		std::cout << line.substr(0, 9) << '.' << '|';
	else
		std::cout << std::left << std::setw(10) << line << '|';
}

void Contact::displaycontact(void) {
	std::cout << "Your first name: " << first_name << "\nYour last name: " << last_name \
	<< "\nYour nickname: " << nickname << "\nYour phone number: " << phone_number \
	<< "\nYour darkest secret: " << darkest_secret << "\n";
}

bool Contact::ft_getline(std::string &line) {
	std::getline(std::cin, line);
	if (std::cin.eof()) {
		std::cout << std::endl;
		return false;
	}
	return true;
}
