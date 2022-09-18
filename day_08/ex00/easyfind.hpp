/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:30:30 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/18 11:46:40 by cbridget         ###   ########.fr       */
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

template<typename T>
typename T::iterator easyfind(T &container, int find) {

	typename T::iterator it = std::find(container.begin(), container.end(), find);
	if (it == container.end())
		throw NotFoundExeption();
	else
		return it;
}

# endif
