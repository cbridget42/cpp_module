/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:46:35 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/14 17:54:52 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{

	public:

		DiamondTrap();
		DiamondTrap(std::string const str);
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );
		void				whoAmI();

	private:
		std::string	name;

};

#endif /* ***************************************************** DIAMONDTRAP_H */