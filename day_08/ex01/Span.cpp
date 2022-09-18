/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:50:14 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/18 14:12:26 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _arr(0), _size(0)
{
}

Span::Span(unsigned int length) : _arr(0), _size(length)
{
}

Span::Span( const Span & src )
{
	std::copy(src._arr.begin(), src._arr.end(), _arr.begin());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		std::copy(rhs._arr.begin(), rhs._arr.end(), _arr.begin());
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Span::ArrayIsFullExeption::what() const throw() {
	return "Array is full!";
}

const char* Span::NoSpanExeption::what() const throw() {
	return "no span can be found!";
}

void Span::addNumber(int num) {
	if (_arr.size() >= _size)
		throw ArrayIsFullExeption();
	_arr.push_back(num);
}

int Span::shortestSpan() const {
	if (_arr.size() <= 1)
		throw NoSpanExeption();
	std::vector<int>::const_iterator it = _arr.begin();
	int res = (*it > *(it + 1)) ? *it - *(++it) : *(++it) - *it;
	for (;it + 1 != _arr.end(); ++it) {
		int tmp = (*it > *(it + 1)) ? *it - *(it + 1) : *(it + 1) - *it;
		if (tmp < res)
			res = tmp;
	}
	return res;
}

int Span::longestSpan() const {
	if (_arr.size() <= 1)
		throw NoSpanExeption();
	std::vector<int>::const_iterator it = _arr.begin();
	int res = (*it > *(it + 1)) ? *it - *(++it) : *(++it) - *it;
	for (;it + 1 != _arr.end(); ++it) {
		int tmp = (*it > *(it + 1)) ? *it - *(it + 1) : *(it + 1) - *it;
		if (tmp > res)
			res = tmp;
	}
	return res;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */