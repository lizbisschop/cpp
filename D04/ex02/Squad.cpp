/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 12:12:02 by liz           #+#    #+#                 */
/*   Updated: 2021/02/18 18:19:56 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void): _NUnits(0), _unit(NULL), _capacity(15)
{
	this->_unit = new ISpaceMarine*[this->_capacity];
	return ;
}

Squad::Squad(int capacity): _NUnits(0), _unit(NULL), _capacity(capacity)
{
	this->_unit = new ISpaceMarine*[this->_capacity];
	return ;
}

Squad::Squad(Squad const & rhs)
{
	this->_capacity = rhs._capacity;
	this->_unit = new ISpaceMarine*[this->_capacity];
	this->_NUnits = rhs._NUnits;
	for (int i = 0; i < this->_NUnits; i++)
		this->_unit[i] = rhs._unit[i]->clone();
	return ;
}

Squad 	& Squad::operator=(Squad const & rhs)
{
	if (this->_unit != NULL)
	{
		for (int i = 0; i < this->_NUnits; i++)
		{
			delete this->_unit[i];
		}
		delete[] this->_unit;
	}
	this->_capacity = rhs._capacity;
	this->_unit = new ISpaceMarine*[this->_capacity];
	this->_NUnits = rhs._NUnits;
	for (int i = 0; i < this->_NUnits; i++)
		this->_unit[i] = rhs._unit[i]->clone();
	return (*this);
}

Squad::~Squad(void)
{
	for (int i = 0; i < this->_NUnits; i++)
	{
		delete this->_unit[i];
	}
	delete[] this->_unit;
}

int		Squad::getCount(void) const
{
	return (this->_NUnits);
}

ISpaceMarine* Squad::getUnit(int N) const
{
	if (N >= this ->_NUnits || N < 0)
		return (NULL);
	return (this->_unit[N]);
}

int		Squad::push(ISpaceMarine* newMarine)
{
	if (newMarine == NULL || this->_NUnits >= this->_capacity)
		return (this->_NUnits);
	for (int i = 0; i < this->_NUnits; i++)
	{
		if (newMarine == this->_unit[i])
			return (this->_NUnits);
	}
	this->_unit[this->_NUnits] = newMarine;
	this->_NUnits++;
	return (this->_NUnits);
}
