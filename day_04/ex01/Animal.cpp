/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:40:52 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/18 15:56:53 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal() : _type("")
{
	std::cout << "Constructor Animal called!\n";
}

AAnimal::AAnimal( const AAnimal & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "Destructor Animal called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void AAnimal::makeSound() const {
	std::cout << "Animal sound!\n";
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string AAnimal::getType() const {
	return _type;
}

Brain * AAnimal::getBrain() {
	return 0;
}


/* ************************************************************************** */