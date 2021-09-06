/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 11:56:38 by liz           #+#    #+#                 */
/*   Updated: 2021/02/05 16:35:10 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	srand(time(NULL));
	Span high(10001);
	try {
		high.addRangeIterator(high.getArray().begin(), high.getArray().begin() + 10001);
	}
	catch(std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Numbers: " << std::endl << high;
	std::cout << "Shortest span = ";
	std::cout << high.shortestSpan() << std::endl;
	std::cout << "Longest span = ";
	std::cout << high.longestSpan() << std::endl;
	Span sp = Span(7);
	try {
		sp.addNumber(0);
		sp.addNumber(-15);
		sp.addNumber(6);
		sp.addNumber(-16);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(2);
		sp.addNumber(3);
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Numbers: " << std::endl << sp;
	std::cout << "Shortest span = ";
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "Longest span = ";
	std::cout << sp.longestSpan() << std::endl;
	Span empty(20);
	try {
		std::cout << empty.longestSpan() << std::endl;
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
}