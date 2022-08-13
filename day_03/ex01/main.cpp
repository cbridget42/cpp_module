/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:22:55 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/13 18:16:59 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap a("qwerty");
	a.attack("you");
	a.guardGate();
	a.takeDamage(15);
	a.beRepaired(5);

	return 0;
}
