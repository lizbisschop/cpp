/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 12:12:02 by liz           #+#    #+#                 */
/*   Updated: 2020/12/19 13:22:30 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	return ;
}

Squad::Squad(Squad const & rhs)
{
	*this = rhs;
	return ;
}

Squad 	const & Squad::operator=(Squad const & rhs)
{
	this->_NUnits = rhs._NUnits;
	this->_unit = rhs._unit;
	return (*this);
}

Squad::~Squad(void)
{
	return ;
}

int		Squad::getCount(void) const
{
	return (this->_NUnits);
}

ISpaceMarine* Squad::getUnit(int N) const
{
	t_list *tmp;

	tmp = this->_unit;
	while(N != 0 && tmp)
	{
		tmp = tmp->next;
		N--;
	}
	return (tmp->current);
}

int		Squad::push(ISpaceMarine* newMarine)
{
	s_list *tmp;

	if (newMarine == NULL)
		return (this->_NUnits);
	if (this->_unit == NULL)
	{
		this->_unit = new(t_list);
		this->_unit->current = newMarine;
		this->_unit->next = NULL;
	}
	else
	{
		tmp = this->_unit;
		while (tmp->next)
		{
			if (tmp->current == newMarine)
			{
				return (this->_NUnits);
			}
			tmp = tmp->next;
		}
		tmp->next = new(t_list);
		tmp->next->current = newMarine;
		tmp->next->next = NULL;
	}
	this->_NUnits++;
	return (this->_NUnits);
}