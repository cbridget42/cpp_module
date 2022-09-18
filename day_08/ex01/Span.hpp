/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:50:08 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/18 14:12:21 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span
{

	public:

		Span();
		Span(unsigned int length);
		Span( Span const & src );
		~Span();

		Span &				operator=( Span const & rhs );
		void				addNumber(int num);
		int					shortestSpan() const;
		int					longestSpan() const;

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

		std::vector<int>	_arr;
		unsigned int		_size;

};

#endif /* ************************************************************ SPAN_H */