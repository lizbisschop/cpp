/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:26:32 by liz           #+#    #+#                 */
/*   Updated: 2020/12/20 13:27:01 by liz           ########   odam.nl         */
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
	*this = rhs;
	return ;
}

Character const & Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	this->_inventory[0] = rhs._inventory[0];
	this->_inventory[1] = rhs._inventory[1];
	this->_inventory[2] = rhs._inventory[2];
	this->_inventory[3] = rhs._inventory[3];
	return (*this);
}

Character::~Character(void)
{
	return ;
}

std::string const & Character::getName(void) const
{
	return (this->_name);
}

void		Character::equip(AMateria* m)
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