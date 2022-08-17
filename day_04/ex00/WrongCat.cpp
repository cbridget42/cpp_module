/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:22:59 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/17 20:27:21 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "Constructor WrongCat called!\n";
}

WrongCat::WrongCat( const WrongCat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
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

void WrongCat::makeSound() const {
	std::cout << "Wrongmeow! Wrongmeow! Wrongmeow!\n";
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */