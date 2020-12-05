/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 15:30:49 by liz           #+#    #+#                 */
/*   Updated: 2020/12/04 11:31:42 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap	{
public:
	ClapTrap(void);
	ClapTrap(std::string n);
	ClapTrap(ClapTrap const & other);
	ClapTrap & operator=(ClapTrap const & rhs);
	~ClapTrap(void);
	void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int ammount);
    void    beRepaired(unsigned int ammount);
	
	void	setName(std::string n);
	void	setHitPoints(int HP);
	void	setMaxHitPoints(int MHP);
	void	setEnergyPoints(int EP);
	void	setMaxEnergyPoints(int MEP);
	void	setLevel(int Level);
	void	setMeleeAttackDamage(int MAD);
	void	setRangedAttackDamage(int RAD);
	void	setArmorDamageReduction(int ADA);

	std::string getName(void);
	int	getHitPoints(void);
	int	getMaxHitPoints(void);
	int	getEnergyPoints(void);
	int	getMaxEnergyPoints(void);
	int	getLevel(void);
	int	getMeleeAttackDamage(void);
	int	getRangedAttackDamage(void);
	int	getArmorDamageReduction(void);
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