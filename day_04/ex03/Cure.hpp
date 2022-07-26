/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:54:46 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/21 14:42:30 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class AMateria;

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		virtual ~Cure();

		Cure &		operator=( Cure const & rhs );
		void		use(ICharacter& target);
		AMateria*	clone() const;

	private:

};

#endif /* ************************************************************ CURE_H */