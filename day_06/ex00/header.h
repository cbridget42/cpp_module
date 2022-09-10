/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:37:59 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/10 12:40:44 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "MyExeptions.hpp"
# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <iomanip>

void convert_value(std::string str);
bool check_dot(std::string &str);
void convert_res(char c);
void convert_res(int i);
void convert_res(double d);
void convert_res(std::string &str);

# endif