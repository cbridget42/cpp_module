/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:40:25 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/21 18:53:53 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Constructor Cat called!\n";
}

Cat::Cat( const Cat & src )
{
	this->_type = src._type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain[i] = src._brain[i];
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete _brain;
	std::cout << "Destructor Cat called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
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

void Cat::makeSound() const {
	std::cout << "meow! meow! meow!\n";
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain * Cat::getBrain() {
	return (_brain);
}


/* ************************************************************************** */