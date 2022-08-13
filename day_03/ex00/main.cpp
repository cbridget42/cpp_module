/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:22:55 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/13 17:15:17 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap a("first");
	ClapTrap b("second");
	a.attack("second");
	b.takeDamage(5);
	b.beRepaired(10);
	return 0;
}
