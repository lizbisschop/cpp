/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 15:34:03 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/05 13:55:19 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	//FragTrap testing
	std::cout << "\033[1;31mTesting FragTrap\033[0m\n";
	FragTrap trap("James");
	FragTrap trap2;

	trap.vaulthunter_dot_exe("Crushjaw");
	trap.rangedAttack("Handsome Jackie");
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
	
	//ScavTrap testing
	std::cout << "\033[1;31mTesting ScavTrap\033[0m\n";
	ScavTrap scav("James");
	ScavTrap copy;

	scav.meleeAttack("Sylestro and Atomic");
	
	copy = scav;
	copy.rangedAttack("Handsome Jackie");
	copy.beRepaired(20);
	copy.takeDamage(50);
	copy.challengeNewcomer("PsychoBillies");
	scav.challengeNewcomer("Handsome Jackie");

	//NinjaTrap testing
	std::cout << "\033[1;31mTesting NinjaTrao\033[0m\n";
	NinjaTrap ninja("Nini");
	NinjaTrap ninja2("Nina");
	
	NinjaTrap copyNinja = ninja2;

	ninja.NinjaShoebox(trap);
	ninja.NinjaShoebox(scav);
	ninja2.NinjaShoebox(ninja);
	copyNinja.meleeAttack("PsychoBillies");
	copyNinja.takeDamage(30);
	

	return (0);
}