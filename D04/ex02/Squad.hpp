/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 12:08:33 by liz           #+#    #+#                 */
/*   Updated: 2021/02/18 16:37:09 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>
#include <vector>

class Squad : public ISquad {

private:
	int 	_NUnits;
	ISpaceMarine	**_unit;
	int	_capacity;
public:
	Squad(void);
	Squad(int capacity);
	Squad(Squad const & rhs);
	Squad & operator=(Squad const & rhs);
	virtual ~Squad(void);

	int		getCount(void) const;
	ISpaceMarine* getUnit(int) const;
	int		push(ISpaceMarine*);
};

#endif