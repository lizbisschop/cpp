/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:18:42 by liz           #+#    #+#                 */
/*   Updated: 2021/02/15 15:40:30 by liz           ########   odam.nl         */
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
	Character & operator=(Character const & rhs);
	virtual ~Character();
	
	std::string const &		getName(void) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	AMateria *getMateria(int idx) const;
private:
	AMateria *_inventory[4];
	std::string _name;
};

#endif