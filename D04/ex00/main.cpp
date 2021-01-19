/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 16:46:10 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/05 17:58:34 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Stooge.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Stooge jacob("Jacob");
	Peon joe("Joe");
	Peon copy = joe;
	std::cout << robert << jim << joe << jacob << copy;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jacob);
	return 0;
}