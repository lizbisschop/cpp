/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 12:02:34 by liz           #+#    #+#                 */
/*   Updated: 2021/02/08 17:08:36 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine {
public:
	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & rhs);
	AssaultTerminator & operator=(AssaultTerminator const & rhs);
	virtual ~AssaultTerminator(void);

	ISpaceMarine* clone(void) const;
	void	battleCry(void) const;
	void	rangedAttack(void) const;
	void	meleeAttack(void) const;
};

#endif