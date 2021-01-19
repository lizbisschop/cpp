/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 12:08:33 by liz           #+#    #+#                 */
/*   Updated: 2021/01/06 15:01:37 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>
#include <vector>


class Squad : public ISquad {
	typedef struct s_list {
		ISpaceMarine *current;
		s_list 	*next;
	}	t_list;
private:
	int _NUnits;
	t_list	*_unit;
public:
	Squad(void);
	Squad(Squad const & rhs);
	Squad const & operator=(Squad const & rhs);
	virtual ~Squad(void);

	int		getCount(void) const;
	ISpaceMarine* getUnit(int) const;
	int		push(ISpaceMarine*);
};

#endif