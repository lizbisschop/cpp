/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 11:53:09 by liz           #+#    #+#                 */
/*   Updated: 2021/02/05 16:30:42 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): _N(N), _amount(0), _array()
{
	return ;
}

Span::Span(Span const & copy): _N(copy._N), _amount(copy._amount)
{
	if (&copy != this)
	{
		for (unsigned int i = 0; i < copy._N; i++)
		{
			_array.push_back(copy._array[i]);
		}
	}
	return ;
}

Span &	Span::operator=(Span const & rhs)
{
	if (&rhs != this)
	{
		_N = rhs._N;
		_amount = rhs._amount;
		for (unsigned int i = 0; i < rhs._N; i++)
		{
			_array.push_back(rhs._array[i]);
		}	
	}
	return (*this);
}

Span::~Span(void)
{
	return ;
}

void	Span::addNumber(int number)
{
	if (_amount == _N)
	{
		throw TooMuchNumbers();
	}
	_array.push_back(number);
	_amount++;
}

std::vector<int> 	Span::getArray(void) const
{
	return (_array);
}

void	Span::addRangeIterator(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	while (it != ite)
	{
		if (_amount < _N)
		{
			_array.push_back(rand() % 1000);
			_amount++;
			it++;
		}
		else if (_amount == _N)
			throw TooMuchNumbers();		
	}
}

int		Span::shortestSpan(void)
{
	if (_amount <= 1)
		throw NotEnoughNumbersException();
	int* span;
	int array[_amount];
	std::sort(_array.begin(), _array.end());
	std::adjacent_difference(_array.begin(), _array.end(), array);
	span = std::min_element(array + 1, array + (_amount - 1));
	return (*span);
}

int		Span::longestSpan(void)
{
	int span;
	if (_amount <= 1)
		throw NotEnoughNumbersException();
	std::sort(_array.begin(), _array.end());
	span = _array[_amount - 1] - _array[0];
	return (span);
}

unsigned int		Span::getamount(void) const
{
	return (_amount);
}

int		Span::getArrayPlace(unsigned int place) const
{
	return (_array[place]);
}


std::ostream & operator<<(std::ostream & stream, Span const & span)
{
	for (unsigned int i = 0; i < span.getamount(); i++)
	{
		stream << span.getArrayPlace(i) << ",";
	}
	std::cout << std::endl;
	return (stream);
}