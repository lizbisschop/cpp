/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/08 17:18:56 by liz           #+#    #+#                 */
/*   Updated: 2021/01/17 15:27:56 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

	std::cout << "\033[1;31mTesting Form \033[0m\n";

	Form		f1("F1", 3, 50);
	
	std::cout << f1;
	std::cout << high;
	std::cout << low;
	try
	{
		f1.beSigned(high);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << f1;
	try 
	{
		high.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	//trying to get it signed twice
	try 
	{
		f1.beSigned(high);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form 		f2("F2", 50, 50);
		low.signForm(f2);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}