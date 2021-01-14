/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/08 17:18:56 by liz           #+#    #+#                 */
/*   Updated: 2021/01/13 10:50:30 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat	b1("B1", 30);
	Bureaucrat	b2("B2", 1);
	Form		f1("F1", 3, 50);

	
	std::cout << f1;
	std::cout << b1;
	std::cout << b2;
	try
	{
		f1.beSigned(b1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		b1.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	//trying to get it signed twice
	try 
	{
		f1.beSigned(b2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		f1.beSigned(b2);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		b2.signForm(f1);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}