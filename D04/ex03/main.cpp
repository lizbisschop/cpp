/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 15:06:47 by liz           #+#    #+#                 */
/*   Updated: 2021/02/15 15:42:34 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    delete tmp;

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    Character *me2 = new Character("MEEE");
    Character *target = new Character("target");
    IMateriaSource *src2 = new MateriaSource();
    src2->learnMateria(new Ice());
    AMateria* cure;
    cure = src2->createMateria("cure"); // trying to acces a source that doesn't exist yet
    me2->equip(cure);
    tmp = src2->createMateria("ice");
    me2->equip(tmp);
    delete tmp;
    tmp = src2->createMateria("ice");
    me2->equip(tmp);
    delete tmp;
    me2->use(0, *target);
    src2->learnMateria(new Cure());
    tmp = src2->createMateria("cure");
    me2->equip(tmp);
    delete tmp;
    me2->use(2, *target);

	//copy and unequip
	Character *copy = new Character(*me2);
	Character *copyTarget = new Character(*target);
	copy->use(1, *copyTarget);
	AMateria *pointer = copy->getMateria(0);
	copy->unequip(0);
	delete pointer;
	copy->use(0, *copyTarget);

	delete copy;
	delete copyTarget;
    delete me2;
    delete src2;
    delete target;
    return 0;
}