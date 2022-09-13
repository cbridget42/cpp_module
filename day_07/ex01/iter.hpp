/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:42:01 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/13 19:16:39 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void iter(T *array, int length, void(*f)(T const &)) {
	for (int i = 0; i < length; i++) {
		f(array[i]);
	}
}
