/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:10:57 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/26 16:13:30 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	i = 0;
}

void PhoneBook::addnewcont(void) {
	bool err = contacts[i].addnewcont();
	if (i < 7 && err)
		i++;
}

void PhoneBook::search(void) {
	std::cout << "|index     |first name|last name |nickname  |\n";
	for (int j = 0; j < i; j++)
		contacts[j].displaytable(j + 1);
	if (i == 0)
		return;
	int tmp = 0;
	while (true) {
		std::cout << "Enter the index you want to see: ";
		std::cin >> tmp;
		if (std::cin.eof())
			break;
		if (std::cin.fail())
			std::cin.clear();
		else if (tmp > i || tmp < i)
			std::cout << "Your index is incorrect! Try again.\n";
		else {
			std::cin.ignore(32767, '\n');
			contacts[tmp - 1].displaycontact();
			break;
		}
		std::cin.ignore(32767, '\n');
	}
}
