/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 15:23:11 by liz           #+#    #+#                 */
/*   Updated: 2021/01/28 17:50:39 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
private:
	unsigned int	_n;
	T				*_array;
	
public:
	~Array(void){
		if (_array != NULL)
			delete[] _array;
	}
	Array(void): _n(0), _array(NULL) {return ;
	}
	Array(unsigned int n) : _n(n) {
		_array = new T[_n];
		for (unsigned int i = 0; i < _n; i++)
		{
			_array[i] = '\0';
		}
		return ;
	}
	Array(Array const & copy) {
		if (&copy != this)
		{
			_n = copy._n;
			_array = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
			{
				_array[i] = copy._array[i];
			}
		}
	}
	Array const operator=(Array const & rhs) {
		if(&rhs != this)
		{
			delete []_array;
			_n = rhs.size();
			_array = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
			{
				_array[i] = rhs._array[i];
			}
		}
		return (*this);
	}
	unsigned int size(void) const {
		return (_n);
	}
	class outOfLimitException : public std::exception {
	public:
		const char * what() const throw()
		{
			return ("This element is out of limits");
		}
	};
	T&			operator[](unsigned int index)
	{
		if (index >= _n || index < 0)
		{
			throw outOfLimitException();
		}
		else
			return (_array[index]);
	}
};

template <typename T>
std::ostream & operator<<(std::ostream & stream, Array<T> & array)
{
	if (array.size() > 0)
	{
		for (unsigned int i = 0; i < array.size(); i++)
		{
			stream << array[i] << std::endl;
		}
	}
	return (stream);
}

#endif