/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 11:56:07 by liz           #+#    #+#                 */
/*   Updated: 2020/12/19 12:08:27 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class ISpaceMarine {
public:
	virtual	~ISpaceMarine(void) {}
	virtual ISpaceMarine* clone(void) const = 0;
	virtual void battleCry(void) const = 0;
	virtual void rangedAttack(void) const = 0;
	virtual void meleeAttack(void) const = 0;	
};

#endif