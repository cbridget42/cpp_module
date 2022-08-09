/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:34:34 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/09 16:28:17 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		Fixed( int const x );
		Fixed( float const x );
		~Fixed();

		int			getRawBits(void) const;
		static int	getFractionalBits(void);
		void		setRawBits(int const raw);
		float		toFloat( void ) const;
		int			toInt(void) const;

		Fixed &		operator=( Fixed const & rhs );
		Fixed &		operator+( Fixed const & rhs );
		Fixed &		operator-( Fixed const & rhs );
		Fixed &		operator*( Fixed const & rhs );
		Fixed &		operator/( Fixed const & rhs );
		Fixed &		operator++(void);
		Fixed &		operator++(int i);

		bool		operator>( Fixed const & rhs );
		bool		operator<( Fixed const & rhs );
		bool		operator>=( Fixed const & rhs );
		bool		operator<=( Fixed const & rhs );
		bool		operator==( Fixed const & rhs );
		bool		operator!=( Fixed const & rhs );

	private:

		int					_n;
		static const int	_fr;

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */