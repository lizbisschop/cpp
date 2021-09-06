/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 17:53:25 by liz           #+#    #+#                 */
/*   Updated: 2020/12/08 11:58:47 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int 	rndm = 0;

ZombieHorde::ZombieHorde(int n)
{
	this->_number = n;
	this->_zombie = new Zombie[this->_number];
	int nbr = 5;
	int index;
	if (rndm == 0)
	{
		rndm = 1;
		srand(time(NULL));
	}
	std::string names[] = {"Heather", "Carl", "George", "Frieda", "Brozo"};
	for (int i = 0; i < n; i++)
	{
		index = rand() % nbr;	
		this->_zombie[i].setType("Horde");
		this->_zombie[i].setName(names[index]);
	}
	return ;
}

ZombieHorde::ZombieHorde(void)
{
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] this->_zombie;
	return ;
}

void 	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_number; i++)
	{
		std::cout << this->_zombie[i].announce() << std::endl;
	}
	return ;
}