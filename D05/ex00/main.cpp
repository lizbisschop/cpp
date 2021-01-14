/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/08 13:10:34 by liz           #+#    #+#                 */
/*   Updated: 2021/01/08 16:05:36 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat high("high", 1);
	Bureaucrat low("low", 150);
	
	try 
	{
		Bureaucrat first("first", 80);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat two("two", 170);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		high.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		low.decrementGrade();
		std::cout << low;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}