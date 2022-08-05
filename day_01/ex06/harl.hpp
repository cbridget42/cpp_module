/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:50:11 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/05 15:48:11 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

enum complains {
	c_debug,
	c_info,
	c_warning,
	c_error,
	c_invalid_arg
};

class harl {
	public:
		typedef void (harl::*t_harlFcn)();
		t_harlFcn arrayF[4];
		harl(void);
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

# endif
