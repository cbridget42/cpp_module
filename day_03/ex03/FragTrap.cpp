/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 19:12:22 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/14 17:54:07 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap("def")
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap constructor called!\n";
}

FragTrap::FragTrap(std::string const str) : ClapTrap(str) {
	hit_points = 100;
	energy_points = 50;
	attack_damage = 30;
	std::cout << "FragTrap constructor called! FragTrap: " << name << " created!\n";
}

FragTrap::FragTrap( const FragTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called! FragTrap: " << name << " destroed!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap: " << name << ": a positive high fives request!\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */