/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:53:02 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/17 20:59:30 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Constructor Brain called!\n";
}

Brain::Brain( const Brain & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Destructor Brain called!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */