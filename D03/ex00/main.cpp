/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 15:34:03 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/05 13:33:16 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap trap("James");
	FragTrap trap2(trap);

	trap.vaulthunter_dot_exe("Crushjaw");
	trap.rangedAttack("Handsome Jackie");
	trap.meleeAttack("Baron Noggin");
	trap.takeDamage(20);
	trap2.takeDamage(30);
	trap.takeDamage(60);
	trap.takeDamage(50);
	trap.beRepaired(40);
	
	FragTrap trapCopy = trap;
	trapCopy.vaulthunter_dot_exe("Sky bullies");
	trapCopy.vaulthunter_dot_exe("Heckle and Hyde");
	trapCopy.vaulthunter_dot_exe("Baron Noggin");
	trapCopy.vaulthunter_dot_exe("Sky bullies");

	return (0);
}