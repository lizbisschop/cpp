/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:55:40 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/02/20 14:38:07 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "Nokia.hpp"
#include "Rakk.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	Enemy* rakk = new Rakk();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
	AWeapon* nokia = new Nokia();
	AWeapon* copy(pr);
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
	me->equip(nokia);
    std::cout << *me;
	me->recoverAP();
	me->attack(c);
	std::cout << *me;
	me->attack(rakk);
    me->equip(copy);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
	me->attack(c);
	me->equip(nokia);
	me->attack(c);
	std::cout << *me;


	delete me;
	delete nokia;
	delete pr;
	delete pf;
	delete c;
    return 0;
}