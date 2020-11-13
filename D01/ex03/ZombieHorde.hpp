/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 17:46:13 by liz           #+#    #+#                 */
/*   Updated: 2020/09/27 17:51:55 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int);
	ZombieHorde(void);
	~ZombieHorde(void);
	void announce(void);
	std::string randomChump(void);
private:
	Zombie *_zombie;
	int 	_number;
};

#endif