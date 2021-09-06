/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 15:54:14 by liz           #+#    #+#                 */
/*   Updated: 2020/12/08 11:49:32 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	rndm = 0;

ZombieEvent::ZombieEvent(void)
{
	return;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

std::string ZombieEvent::getZombieType(void)
{
	return (this->_type);
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->_type, name));
}

Zombie *ZombieEvent::randomChump(void)
{
	int index;
	int nbr;
	std::string names[] = {"Heather", "Carl", "George", "Frieda", "Brozo"};
	nbr = 5;
	if (rndm == 0)
	{
		rndm = 1;
		srand(time(NULL));
	}
	index = rand() % nbr;
	return (newZombie(names[index]));
}