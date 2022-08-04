/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:49:27 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/04 19:30:12 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main() {
	harl test = harl();
	test.complain("debug");
	test.complain("info");
	test.complain("warning");
	test.complain("error");
	return 0;
}
