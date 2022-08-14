/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:24:21 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/13 18:03:25 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : name("default_name"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << name << " created!\n";
}

ClapTrap::ClapTrap(std::string str) : name(str), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << name << " created!\n";
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroed!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
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

void	ClapTrap::attack(const std::string& target) {
	if (energy_points == 0 || hit_points <= 0)
		return ;
	energy_points--;
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	hit_points -= amount;
	std::cout << "ClapTrap " << name << " taked damage " << amount << " point of hp, current hit points: " << hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energy_points == 0 || hit_points <= 0)
		return ;
	energy_points--;
	hit_points += amount;
	std::cout << "ClapTrap " << name << " repaired " << amount << " point of hp, current hit points: " << hit_points << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */