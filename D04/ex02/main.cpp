/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 13:17:29 by liz           #+#    #+#                 */
/*   Updated: 2021/02/18 16:57:54 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "ISquad.hpp"
#include "TacticalMarine.hpp"

int 	main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	
	ISpaceMarine* henk = new TacticalMarine;
	ISpaceMarine* cat = new AssaultTerminator;
	Squad* squad =  new Squad;

	squad->push(henk);
	squad->push(cat);
	squad->push(henk);
	std::cout << "Number of units in squad = " << squad->getCount() << std::endl;
	for (int i = 0; i < squad->getCount(); i++)
	{
		ISpaceMarine* cur = squad->getUnit(i);
		cur->battleCry();
	}
	Squad* copy = new Squad(*squad);
	std::cout << "Number of units in copy = " << copy->push(NULL) << std::endl;
	for (int i = 0; i < copy->getCount(); i++)
	{
		ISpaceMarine* cur = copy->getUnit(i);
		cur->meleeAttack();
	}
	delete copy;
	delete squad;
	delete vlc;
	return 0;
	
}