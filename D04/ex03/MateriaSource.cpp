/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:47:30 by liz           #+#    #+#                 */
/*   Updated: 2020/12/21 14:55:08 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & rhs)
{
	*this = rhs;
	return ;
}

MateriaSource const & MateriaSource::operator=(MateriaSource const & rhs)
{
	this->_inventory[0] = rhs._inventory[0];
	this->_inventory[1] = rhs._inventory[1];
	this->_inventory[2] = rhs._inventory[2];
	this->_inventory[3] = rhs._inventory[3];

	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	return ;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i]->getType() == type)
		{
			AMateria *copy;

			copy = this->_inventory[i]->clone();
			return (copy);
		}
	}
	std::cout << "MateriaSource not found." << std::endl;
	return (NULL);
}