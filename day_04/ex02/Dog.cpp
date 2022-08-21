/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:58:28 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/21 18:54:00 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Constructor Dog called!\n";
}

Dog::Dog( const Dog & src )
{
	this->_type = src._type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain[i] = src._brain[i];
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete _brain;
	std::cout << "Destructor Dog called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
		this->_brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->_brain[i] = rhs._brain[i];
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const {
	std::cout << "Bark! Bark! Bark!\n";
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain * Dog::getBrain() {
	return (_brain);
}


/* ************************************************************************** */