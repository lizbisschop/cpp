/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 16:05:39 by liz           #+#    #+#                 */
/*   Updated: 2020/11/28 15:11:31 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int main(void)
{
	Zombie *zombie_1;
	Zombie *zombie_2;
	Zombie *stack_zombie = new Zombie("Brain eater", "Draco");
	ZombieEvent event;

	srand(time(NULL));
	event.setZombieType("Brain eater");
	zombie_1 = event.randomChump();
	std::cout << zombie_1->announce() << std::endl;
	delete zombie_1;
	std::cout << stack_zombie->announce() << std::endl;
	delete stack_zombie;
	event.setZombieType("Mowner");
	zombie_2 = event.randomChump();
	std::cout << zombie_2->announce() << std::endl;
	delete zombie_2;
	system("leaks zombie");
	return (0);
}