/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 15:34:03 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/12 15:36:54 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	FragTrap trap("James");
	FragTrap trap2;

	trap.vaulthunter_dot_exe("Cyberman");
	trap.rangedAttack("Ginger bread man");
	trap.takeDamage(20);
	trap.takeDamage(60);
	trap.takeDamage(50);
	trap.beRepaired(40);
	
	FragTrap trapCopy = trap;
	trapCopy.vaulthunter_dot_exe("Steamer");

	ScavTrap scav("Diego");
	scav.takeDamage(50);
	scav.challengeNewcomer("Mr poptart");

	NinjaTrap ninja("Nini");
	ninja.NinjaShoebox(trap);
	ninja.NinjaShoebox(scav);

	SuperTrap super("Super Trapper");
	super.meleeAttack("Kangaroo");
}