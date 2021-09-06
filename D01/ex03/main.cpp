/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 17:45:17 by liz           #+#    #+#                 */
/*   Updated: 2020/12/05 17:10:30 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde zombie = ZombieHorde(5);
	zombie.announce();
	ZombieHorde zombie2 = ZombieHorde(3);
	zombie2.announce();
	return (0);
}