/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:07:31 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/31 19:13:26by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137), \
			_target("def")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137), \
			_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : \
			AForm("Shrubbery", 145, 137), _target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	this->checkRequirements(executor);
	std::string tmp = _target + "_shrubbery";
	std::ofstream file;
	file.open(tmp.c_str());
	if (!file.is_open()) {
		std::cout << "file wasn't opened!" << std::endl;
		return ;
	}
	file << "                                                     .\n";
	file << "                                        .         ;\n";
	file << "            .              .              ;%     ;;\n";
	file << "            ,           ,                :;%  %;\n";
	file << "           :         ;                   :;%;'     .,\n";
	file << "   ,.        %;     %;            ;        %;'    ,;\n";
	file << "       ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
	file << "       %;       %;%;      ,  ;       %;  ;%;   ,%;'\n";
	file << "       ;%;      %;        ;%;        % ;%;  ,%;'\n";
	file << "       `%;.     ;%;     %;'         `;%%;.%;'\n";
	file << "           `:;%.    ;%%. %@;        %; ;@%;%'\n";
	file << "           `:%;.  :;bd%;          %;@%;'\n";
	file << "               `@%:.  :;%.         ;@@%;'\n";
	file << "               `@%.  `;@%.      ;@@%;\n";
	file << "                   `@%%. `@%%    ;@@%;\n";
	file << "                   ;@%. :@%%  %@@%;\n";
	file << "                       %@bd%%%bd%%:;\n";
	file << "                       #@%%%%%:;\n";
	file << "                       %@@%%%::;\n";
	file << "                       %@@@%(o);  . '\n";
	file << "                       %@@@o%;:(.,'\n";
	file << "                   `.. %@@@o%::;\n";
	file << "                       `)@@@o%::;\n";
	file << "                       %@@(o)::;\n";
	file << "                       .%@@@@%::;\n";
	file << "                       ;%@@@@%::;.\n";
	file << "                       ;%@@@@%%:;;;.\n";
	file << "                   ...;%@@@@@%%:;;;;,..\n";
	file << "\n\n";

	file << "              ,@@@@@@@,\n";
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
	file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
	file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
	file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
	file << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
	file << "       |o|        | |         | |\n";
	file << "       |.|        | |         | |\n";
	file << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";

	file.close();
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */