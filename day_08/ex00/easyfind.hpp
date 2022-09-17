/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:30:30 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/17 17:51:10 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

class NotFoundExeption : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "integer not found!";
		}
};

template<class T>
T::iterator easyfind(T container, int find) {

	T::iterator it;
	it = std::find(container.begine(), container.end(), find);
	if (it == container.end())
		throw NotFoundExeption();
	else
		return it;


//	T::iterator it_end = container.end();

/*	for (T::iterator it_begine = container.begine(); it_begine != it_end; it_begine++) {
		if (*it_begine == find)
			return *it_begine;
	}*/
//	throw NotFoundExeption();
}

# endif
