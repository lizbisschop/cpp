/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 17:53:25 by liz           #+#    #+#                 */
/*   Updated: 2020/11/12 12:36:56 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->_number = n;
	this->_zombie = new Zombie[this->_number];

	for (int i = 0; i < n; i++)
	{
		this->_zombie[i].setType("Horde");
		this->_zombie[i].setName(this->randomChump());
	}
	return ;
}

ZombieHorde::ZombieHorde(void)
{
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	return ;
}

std::string ZombieHorde::randomChump(void)
{
	int index;
	int nbr;
	nbr = 5;
	std::string names[] {"Heather", "Carl", "George", "Frieda", "Brozo"};
	index = rand() % nbr;
	return (names[index]);
}

void 	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_number; i++)
	{
		std::cout << this->_zombie[i].announce() << std::endl;
	}
	return ;
}