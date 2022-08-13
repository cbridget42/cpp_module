/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:22:55 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/13 19:32:58 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	FragTrap a("xyz");
	a.attack("you");
	a.highFivesGuys();
	a.takeDamage(15);
	a.beRepaired(5);

	return 0;
}
