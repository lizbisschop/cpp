/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 15:03:48 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/05 13:40:06 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheStack(void)
{
	pony drew;
	drew.setName("Drew");
	std::cout << "Name is = " << drew.getName() << std::endl;
	drew.setHairColor("YellowBlond");
	std::cout << "Hair color is = " << drew.getHairColor() << std::endl;
	drew.setEyeColor("green");
	std::cout << "Eye color is = " << drew.getEyeColor() << std::endl;
	drew.setAge("7");
	std::cout << "Age is = " <<  drew.getAge() << std::endl;
	drew.setHeight("1,70 meter");
	std::cout << "Height is = " << drew.getHeight() << std::endl;
}

void    ponyOnTheHEAP(void)
{
	pony *sandra = new pony();
	sandra->setName("Sandra");
	std::cout << "Name is = " << sandra->getName() << std::endl;
	sandra->setHairColor("Black");
	std::cout << "Hair color is = " << sandra->getHairColor() << std::endl;
	sandra->setEyeColor("Brown");
	std::cout << "Eye color is = " << sandra->getEyeColor() << std::endl;
	sandra->setAge("3");
	std::cout << "Age is = " <<  sandra->getAge() << std::endl;
	sandra->setHeight("1,50 meter");
	std::cout << "Height is = " << sandra->getHeight() << std::endl;
	delete sandra;
}
int main(void)
{
	std::cout << "\e[1;32mPONY ON THE HEAP\e[0m\n";
	ponyOnTheHEAP();
	std::cout << "\e[1;32mPONY ON THE STACK\e[0m\n";
	ponyOnTheStack();
}