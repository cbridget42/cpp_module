/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:58:09 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/18 16:05:02 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "Brain.hpp"
# include <iostream>
# include <string>

class AAnimal
{

	public:

		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		AAnimal &					operator=( AAnimal const & rhs );

		virtual void				makeSound() const = 0;
		virtual Brain *				getBrain() = 0;
		std::string					getType() const;

	protected:
		std::string					_type;

};

#endif /* ********************************************************* AANIMAL_H */