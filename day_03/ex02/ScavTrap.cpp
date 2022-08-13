/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:41:08 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/13 19:18:55 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	name = "def";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap constructor called!\n";
}

ScavTrap::ScavTrap(std::string const str) : ClapTrap(str) {
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap constructor called! ScavTrap: " << name << " created!\n";
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called! ScavTrap: " << name << " destroed!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.name;
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::attack(const std::string& target) {
	if (energy_points == 0 || hit_points <= 0)
		return ;
	energy_points--;
	std::cout << "ScavTrap " << name << " ready and attacks " << target << " causing " << attack_damage << " points of damage!\n";
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode.\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */