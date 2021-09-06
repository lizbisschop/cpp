/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:47:30 by liz           #+#    #+#                 */
/*   Updated: 2021/02/10 12:43:04 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _learnedMateria(0)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & rhs)
{
	this->_learnedMateria = rhs._learnedMateria;
	for (int i = 0; i < this->_learnedMateria; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < this->_learnedMateria; i++)
		this->_inventory[i] = rhs._inventory[i]->clone();
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0; i < this->_learnedMateria; i++)
		delete this->_inventory[i];
	this->_learnedMateria = rhs._learnedMateria;
	for (int i = 0; i < this->_learnedMateria; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < this->_learnedMateria; i++)
		this->_inventory[i] = rhs._inventory[i]->clone();
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->_learnedMateria; i++)
	{
		delete this->_inventory[i];
	}
	return ;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			this->_learnedMateria++;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < this->_learnedMateria; i++)
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