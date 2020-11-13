/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 15:54:17 by liz           #+#    #+#                 */
/*   Updated: 2020/09/27 16:33:07 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
public:
	ZombieEvent(void);
	~ZombieEvent(void);
	void setZombieType(std::string);
	std::string getZombieType(void);
	Zombie *newZombie(std::string);
	Zombie *randomChump(void);
private:
	std::string _type;
};

#endif
