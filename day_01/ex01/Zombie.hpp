/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:38:28 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/30 17:08:57 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		Zombie (void);
		~Zombie (void);
		void init_zombie(std::string new_zombie);
		void announce(void);
};

# endif
