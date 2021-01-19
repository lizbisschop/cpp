/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:18:42 by liz           #+#    #+#                 */
/*   Updated: 2021/01/07 14:37:27 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter{
public:
	Character(void);
	Character(std::string name);
	Character(Character const & rhs);
	Character const & operator=(Character const & rhs);
	virtual ~Character();
	
	std::string const &		getName(void) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
private:
	AMateria *_inventory[4];
	std::string _name;
};

#endif