/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:50:14 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/19 17:53:37 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(unsigned int length) : _arr(0), _size(length)
{
}

Span::Span( const Span & src )
{
	_arr.insert(_arr.begin(), src._arr.begin(), src._arr.end());
	_size = src._size;
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
		_arr.insert(_arr.begin(), rhs._arr.begin(), rhs._arr.end());
		_size = rhs._size;
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
	std::vector<int> tmp_arr(_size);
	std::copy(_arr.begin(), _arr.end(), tmp_arr.begin());
	std::sort(tmp_arr.begin(), tmp_arr.end());
	std::vector<int>::const_iterator it = tmp_arr.begin();
	int res = *(it + 1) - *it;
	for (;it + 1 != tmp_arr.end(); ++it) {
		int tmp = *(it + 1) - *it;
		if (tmp < res)
			res = tmp;
	}
	return res;
}

int Span::longestSpan() const {
	if (_arr.size() <= 1)
		throw NoSpanExeption();
	return *std::max_element(_arr.begin(), _arr.end()) - *std::min_element(_arr.begin(), _arr.end());
}

void Span::addNumbers(std::vector<int>::iterator it, std::vector<int>::iterator ite) {
	if (_arr.size() + std::distance(it, ite) > _size)
		throw ArrayIsFullExeption();
	_arr.insert(_arr.begin() + _arr.size(), it, ite);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */