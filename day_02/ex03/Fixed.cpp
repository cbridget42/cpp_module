/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:34:56 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/09 16:00:14by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fr = 8;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _n(0)
{
}

Fixed::Fixed( const Fixed & src )
{
	*this = src;
}

Fixed::Fixed( int const x ) {
	_n = x * (1 << Fixed::getFractionalBits());
}

Fixed::Fixed( float const x ) {
	_n = roundf(x * (1 << Fixed::getFractionalBits()));
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
	{
		this->_n = rhs.getRawBits();
	}
	return *this;
}

Fixed Fixed::operator+( Fixed const & rhs ) {
	Fixed res;
	res._n = this->_n + rhs._n;
	return res;
}

Fixed Fixed::operator-( Fixed const & rhs ) {
	Fixed res;
	res._n = this->_n - rhs._n;
	return res;
}

Fixed Fixed::operator*( Fixed const & rhs ) {
	Fixed res;
	res.setRawBits((this->_n * rhs._n) / (1 << Fixed::getFractionalBits()));
	return res;
}

Fixed Fixed::operator/( Fixed const & rhs ) {
	Fixed res;
	res._n = (this->_n  * (1 << Fixed::getFractionalBits())) / rhs._n;
	return res;
}

Fixed Fixed::operator--(void) {
	(this->_n)--;
	return Fixed(this->toFloat());
}

Fixed Fixed::operator--(int i) {
	(void)i;
	Fixed res(this->toFloat());
	(this->_n)--;
	return res;
}

Fixed Fixed::operator++(void) {
	(this->_n)++;
	return Fixed(this->toFloat());
}

Fixed Fixed::operator++(int i) {
	(void)i;
	Fixed res(this->toFloat());
	(this->_n)++;
	return res;
}

bool Fixed::operator>(Fixed const &rhs) {
	return this->_n > rhs._n;
}

bool Fixed::operator<(Fixed const &rhs) {
	return this->_n < rhs._n;
}

bool Fixed::operator>=( Fixed const & rhs ) {
	return this->_n >= rhs._n;
}

bool Fixed::operator<=( Fixed const & rhs ) {
	return this->_n <= rhs._n;
}

bool Fixed::operator==( Fixed const & rhs ) {
	return this->_n == rhs._n;
}

bool Fixed::operator!=( Fixed const & rhs ) {
	return this->_n != rhs._n;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Fixed & Fixed::min(Fixed &a, Fixed &b) {
	if (a._n <= b._n)
		return a;
	else
		return b;
}

Fixed & Fixed::min(Fixed const &a, Fixed const &b) {
	if (a._n <= b._n)
		return (Fixed &)a;
	else
		return (Fixed &)b;
}

Fixed & Fixed::max(Fixed &a, Fixed &b) {
	if (a._n >= b._n)
		return a;
	else
		return b;
}

Fixed & Fixed::max(Fixed const &a, Fixed const &b) {
	if (a._n >= b._n)
		return (Fixed &)a;
	else
		return (Fixed &)b;
}

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
	return this->_n;
}

int Fixed::getFractionalBits(void) {
	return _fr;
}

void Fixed::setRawBits(int const raw) {
	this->_n = raw;
}

/* ************************************************************************** */