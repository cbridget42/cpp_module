/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:23:52 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/14 17:28:45 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>
# include <execution>
# include <string>

template<typename T>
class Array {
	public:
		Array(): _a(0), _size(0) {}
		Array(unsigned int s): _size(s) {_a = new T[s]();}
		Array(Array<T> const &src);
		~Array() { if (_a) delete[] _a; };
		Array<T>& operator=(Array<T> const &rhs);
		T& operator[](unsigned int idx) const;
		unsigned int size() const;

		class InvalidIndexException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Invalid index!";
				}
		};

	private:
		T *_a;
		unsigned int _size;
};

template<typename T>
std::ostream& operator<<(std::ostream &o, Array<T> const &rhs){
	for(unsigned int i = 0; i < rhs.size(); i++) {
		o<< rhs[i] << ' ';
	}
	return o;
}

template<typename T>
Array<T>::Array(Array<T> const &src) {
	this->_size = src.size();
	this->_a = new T[src.size()]();
	for(unsigned int i = 0; i < this->size(); i++) {
		this->_a[i] = src._a[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const &rhs) {
	if (this != &rhs) {
		if (_a)
			delete _a;
		this->_size = rhs.size();
		this->_a = new T[rhs.size()]();
		for(unsigned int i = 0; i < this->size(); i++) {
			this->_a[i] = rhs._a[i];
		}
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int idx) const {
	if (idx >= _size)
		throw Array<T>::InvalidIndexException();
	return _a[idx];
}

template<typename T>
unsigned int Array<T>::size() const {
	return _size;
}

# endif
