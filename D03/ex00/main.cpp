/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 15:34:03 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/11/30 15:26:27 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap trap("James");
	FragTrap trap2;

	trap.vaulthunter_dot_exe("Cyberman");
	
	trap.takeDamage(20);
	trap.takeDamage(60);
	trap.takeDamage(50);
	trap.beRepaired(40);
	FragTrap trapCopy = trap;
	trapCopy.vaulthunter_dot_exe("Steamer");
	
}