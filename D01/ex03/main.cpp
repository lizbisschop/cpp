/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 17:45:17 by liz           #+#    #+#                 */
/*   Updated: 2020/11/28 14:48:18 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	srand(time(NULL));
	ZombieHorde zombie = ZombieHorde(5);
	zombie.announce();
	while (1)
	{
		
	}
	return (0);
}