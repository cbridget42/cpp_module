/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:13:55 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/25 19:54:55 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

#include "iostream"//del this

extern bool ft_getline(std::string *line);
extern void print_row(std::string &str);

void Contact::addnewcont(void) {
	std::cout << "Enter your first name: ";
	if (!ft_getline(&first_name))
		return;
	std::cout << "Enter your last name: ";
	if (!ft_getline(&last_name))
		return;
	std::cout << "Enter your nickname: ";
	if (!ft_getline(&nickname))
		return;
	std::cout << "Enter your phone number: ";
	if (!ft_getline(&phone_number))
		return;
	std::cout << "Enter your darkest secret: ";
	if (!ft_getline(&darkest_secret))
		return;
}

void Contact::displaycontact(int index) {
	std::cout << index << "         |";
	print_row(first_name);
	print_row(last_name);
	print_row(nickname);
	std::cout << '\n';
}
