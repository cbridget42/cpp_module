/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:37:38 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/30 17:14:21 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *ptr = new (std::nothrow) Zombie[N];
	if (!ptr)
		return ptr;
	for (int i = 0; i < N; i++) {
		ptr[i].init_zombie(name);
	}
	return ptr;
}
