/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 16:05:39 by liz           #+#    #+#                 */
/*   Updated: 2020/09/27 16:41:09 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int main(void)
{
	Zombie *zombie_1;
	Zombie *zombie_2;
	ZombieEvent event;

	event.setZombieType("Brain eater");
	zombie_1 = event.randomChump();
	std::cout << zombie_1->announce() << std::endl;
	delete zombie_1;
	event.setZombieType("Mowner");
	zombie_2 = event.randomChump();
	std::cout << zombie_2->announce() << std::endl;
	delete zombie_2;
	return (0);
}