/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 11:48:37 by liz           #+#    #+#                 */
/*   Updated: 2021/02/05 13:03:43 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
#define Span_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <limits>
#include <exception>

class Span {
private:
	Span(void);
	unsigned int _N;
	unsigned int _amount;
	std::vector<int> _array;
public:
	Span(unsigned int N);
	Span(Span const & copy);
	Span  & operator=(Span const & rhs);
	~Span(void);

	void	addNumber(int number);
	void	addRangeIterator(std::vector<int>::iterator it, std::vector<int>::iterator ite);
	int		shortestSpan(void);
	int		longestSpan(void);

	unsigned int		getamount(void) const;
	int		getArrayPlace(unsigned int place) const;
	std::vector<int> getArray(void) const;


	class TooMuchNumbers : public std::exception {
	public:
		const char * what() const throw()
		{
			return ("Too much numbers");
		}
	};
	class NotEnoughNumbersException : public std::exception {
	public:
		const char * what() const throw()
		{
			return ("Not enough numbers");
		}
	};
};

std::ostream & operator<<(std::ostream & stream, Span const & span);

#endif