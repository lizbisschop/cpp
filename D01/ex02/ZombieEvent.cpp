/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 15:54:14 by liz           #+#    #+#                 */
/*   Updated: 2020/11/28 13:43:05 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

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
	Zombie *zombie;
	std::string names[] = {"Heather", "Carl", "George", "Frieda", "Brozo"};
	nbr = 5;
	index = rand() % nbr;
	zombie = newZombie(names[index]);
	return (zombie);
}