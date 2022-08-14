/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:22:55 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/14 17:24:00 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap a("rhombus");
	a.whoAmI();
	a.attack("you");
	a.highFivesGuys();
	a.takeDamage(15);
	a.beRepaired(5);

	return 0;
}
