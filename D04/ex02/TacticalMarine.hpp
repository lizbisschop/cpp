/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 12:52:53 by liz           #+#    #+#                 */
/*   Updated: 2020/12/19 13:10:15 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine(void);
	TacticalMarine(TacticalMarine const & rhs);
	TacticalMarine const & operator=(TacticalMarine const & rhs);
	virtual ~TacticalMarine(void);

	ISpaceMarine* clone(void) const;
	void	battleCry(void) const;
	void	rangedAttack(void) const;
	void	meleeAttack(void) const;
private:
};


#endif