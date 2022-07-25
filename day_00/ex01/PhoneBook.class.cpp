/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:10:57 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/25 19:59:14 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

#include "iostream"//del this

PhoneBook::PhoneBook(void) {
	i = 0;
}

void PhoneBook::addnewcont(void) {
	contacts[i].addnewcont();
	if (i < 7)
		i++;
}

void PhoneBook::search(void) {
	std::cout << "index     |first name|last name |nickname  \n";
	for (int j = 0; j < i; j++)
		contacts[j].displaycontact(j);
}
