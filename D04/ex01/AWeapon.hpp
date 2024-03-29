/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:26:25 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/02/08 17:08:36 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
private:
    std::string _name;
    int         _apcost;
    int         _damage;
public:
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(void);
    AWeapon(AWeapon const & rhs);
    AWeapon & operator=(AWeapon const & rhs);
    virtual ~AWeapon(void);

	std::string const getName(void) const;
    int     getAPCost() const;
    int     getDamage() const;
	void	setName(std::string name);
	void	setAPCost(int APcost);
	void	setDamage(int damage);
    virtual void    attack() const = 0;
};

#endif