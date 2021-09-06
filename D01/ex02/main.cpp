/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 16:05:39 by liz           #+#    #+#                 */
/*   Updated: 2020/12/08 11:36:35 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int main(void)
{
	ZombieEvent	event;
	Zombie *zombie1;
	Zombie *zombie2;

	event.setZombieType("Brain eater");
	zombie1 = event.newZombie("Bella");
	zombie2 = event.newZombie("Gregor");
	std::cout << zombie1->announce() << std::endl;
	std::cout << zombie2->announce() << std::endl;
	delete zombie1;
	delete zombie2;

	Zombie Darla("Cryer", "Darla");
	Zombie *zombie3;
	zombie3 = event.randomChump();
	std::cout << Darla.announce() << std::endl;
	std::cout << zombie3->announce() << std::endl;
	delete zombie3;

	Zombie zombie4("Breather", "Derp");
	std::cout << zombie4.announce() << std::endl;
	return (0);
}