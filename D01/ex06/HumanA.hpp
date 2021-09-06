/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 11:59:52 by liz           #+#    #+#                 */
/*   Updated: 2020/12/06 11:53:21 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string n, Weapon &weapon);
	~HumanA(void);
	void	attack(void);
private:
	std::string _name;
	Weapon &_weapon;
};

#endif