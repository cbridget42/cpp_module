/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:50:08 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/19 17:20:57 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <time.h>


class Span
{

	public:

		Span(unsigned int length);
		Span( Span const & src );
		~Span();

		Span &				operator=( Span const & rhs );
		void				addNumber(int num);
		int					shortestSpan() const;
		int					longestSpan() const;
		void				addNumbers(std::vector<int>::iterator it, std::vector<int>::iterator ite);

		class ArrayIsFullExeption : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NoSpanExeption : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:

		Span();
		std::vector<int>	_arr;
		unsigned int		_size;

};

#endif /* ************************************************************ SPAN_H */