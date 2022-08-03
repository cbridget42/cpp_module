/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:37:54 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/02 14:25:56 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB {
	private:
		std::string name;
		Weapon *gun;
	public:
		HumanB(std::string str);
		void attack(void);
		void setWeapon(Weapon &new_gun);
};

# endif
