/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:26:32 by liz           #+#    #+#                 */
/*   Updated: 2021/02/15 15:40:19 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("")
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	return ;
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	return ;
}

Character::Character(Character const & rhs)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
	}
	this->_name = rhs._name;
	return ;
}

Character & Character::operator=(Character const & rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
	}
	this->_name = rhs._name;
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	return ;
}

std::string const & Character::getName(void) const
{
	return (this->_name);
}

void		Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m->clone();
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;	
}

AMateria *Character::getMateria(int idx) const
{
	return (this->_inventory[idx]);
}

void		Character::unequip(int idx)
{
	if (this->_inventory[idx] == NULL)
		std::cout << "Inventory is empty" << std::endl;
	else
		this->_inventory[idx] = NULL;
}

void		Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0 || this->_inventory[idx] == NULL)
	{
		std::cout << "Not a valid inventory" << std::endl;
	}
	else
	{
		this->_inventory[idx]->use(target);
	}
}