/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:57:23 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/26 16:23:35 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include "iostream"
# include "iomanip"

class PhoneBook{
	private:
		Contact contacts[8];
		int i;
	public:
		PhoneBook(void);
		void addnewcont(void);
		void search(void);
};

# endif
