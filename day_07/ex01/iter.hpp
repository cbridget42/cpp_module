/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:42:01 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/14 12:52:32 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void iter(T *array, unsigned long length, void(*f)(T const &)) {
	for (unsigned long i = 0; i < length; i++) {
		f(array[i]);
	}
}

# endif
