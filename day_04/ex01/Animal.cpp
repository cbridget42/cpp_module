/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:40:52 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/17 20:09:38 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("")
{
	std::cout << "Constructor Animal called!\n";
}

Animal::Animal( const Animal & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Destructor Animal called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound() const {
	std::cout << "Animal sound!\n";
}

std::string Animal::getType() const {
	return type;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */