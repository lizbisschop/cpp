/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/08 13:10:34 by liz           #+#    #+#                 */
/*   Updated: 2021/01/18 12:23:51 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat high("high", 1);
	Bureaucrat low("low", 150);
	
	std::cout << "\033[1;31mTesting Bureaucrat \033[0m\n";
	try {
		Bureaucrat	tooHigh("TooHigh", 0);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << high;
		high.incrementGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << low;
		low.decrementGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << high << low;
	return (0);
}