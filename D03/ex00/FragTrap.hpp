/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 15:16:36 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/05 15:41:52 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>

class   FragTrap {
public:
    FragTrap(void);
    FragTrap(std::string n);
    FragTrap(FragTrap const & rhs);
    ~FragTrap(void);
    FragTrap & operator=(FragTrap const & rhs);
    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int ammount);
    void    beRepaired(unsigned int ammount);
    void    vaulthunter_dot_exe(std::string const & target);
    void    laserInferno(std::string const & target);
    void    meatUnicycle(std::string const & target);
    void    ruberDucky(std::string const & target);
	
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
