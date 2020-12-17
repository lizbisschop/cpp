/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:26:25 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/15 10:24:04 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
public:
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(void);
    AWeapon(AWeapon const & rhs);
    AWeapon const & operator=(AWeapon const & rhs);
    virtual ~AWeapon(void);

	std::string	getName(void) const;
    int     getAPCost() const;
    int     getDamage() const;
	void	setName(std::string name);
	void	setAPCost(int APcost);
	void	setDamage(int damage);
    virtual void    attack() const = 0;
private:
    std::string _name;
    int         _apcost;
    int         _damage;
};

#endif