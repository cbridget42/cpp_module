/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:40:44 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/18 15:56:53 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <iostream>
# include <string>

class AAnimal
{

	public:

		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		AAnimal &				operator=( AAnimal const & rhs );

		virtual void				makeSound() const;
		virtual Brain *				getBrain();
		std::string					getType() const;

	protected:
		std::string					_type;

};

#endif /* ********************************************************** ANIMAL_H */