/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:46:46 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/14 17:55:59 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ScavTrap("def"), FragTrap("def"), name("def")
{
	ClapTrap::name = "def_clap_name";
	energy_points = 50;
	std::cout << "DiamondTrap constructor called!\n";
}

DiamondTrap::DiamondTrap(std::string const str) : ScavTrap(str), FragTrap(str), name(str) {
	ClapTrap::name = str + "_clap_name";
	energy_points = 50;
	std::cout << "DiamondTrap constructor called! DiamondTrap: " << name << " created!\n";
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DimondTrap destructor called! DimondTrap: " << name << " destroed!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.name;
		this->ClapTrap::name = rhs.ClapTrap::name;
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	DiamondTrap::whoAmI(){
	std::cout << "my name is " << name << ", ClapTrap name is " << ClapTrap::name << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */