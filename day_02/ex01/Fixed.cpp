/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:34:56 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/08 23:13:22 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fr = 8;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _n(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed::Fixed( int const x ) : _n(x) {
	std::cout << "Int constructor called\n";
}

Fixed::Fixed( float const x ) {
	std::cout << "Float constructor called\n";
	_n = roundf(x * (1 << Fixed::getFractionalBits()));
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called\n";
	if ( this != &rhs )
	{
		this->_n = rhs.getRawBits();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

float Fixed::toFloat(void) const {
	return static_cast<float>(_n) / static_cast<float>(1 << Fixed::getFractionalBits());
}

int Fixed::toInt(void) const {
	return static_cast<int>(_n) / static_cast<int>(1 << Fixed::getFractionalBits());
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits(void) const {
//	std::cout << "getRawBits member function called\n";
	return this->_n;
}

int Fixed::getFractionalBits(void) {
	return _fr;
}

void Fixed::setRawBits(int const raw) {
	this->_n = raw;
}

/* ************************************************************************** */