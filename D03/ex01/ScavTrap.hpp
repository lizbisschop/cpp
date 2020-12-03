/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 11:58:51 by liz           #+#    #+#                 */
/*   Updated: 2020/12/03 14:45:15 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAFTRAP_HPP
#define SCAFTRAP_HPP

#include <iostream>

class ScavTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string n);
	ScavTrap(ScavTrap const & other);
	~ScavTrap(void);
	ScavTrap & operator=(ScavTrap const & rhs);
    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
	void	beRepaired(unsigned int ammount);
    void    takeDamage(unsigned int ammount);
	void	challengeNewcomer(std::string const & target);
private:
    std::string _name;
    int _HitPoints;
    int _MaxHitPoints;
    int _EnergPoints;
    int _MaxEnergyPoints;
    int _Level;
    int _MeleeAttackDamage;
    int _RangedAttackDamage;
    int _ArmorDamageReduction;
};

#endif