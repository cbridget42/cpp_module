/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:51:27 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/10 16:35:17 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{

	public:

		Point();
		Point(float const a, float const b);
		Point( Point const & src );
		~Point();

		Fixed getFixedx() const;
		Fixed getFixedy() const;

		Point &		operator=( Point const & rhs );

	private:

		Fixed const _x;
		Fixed const _y;
};

#endif /* *********************************************************** POINT_H */