/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:01:01 by liz           #+#    #+#                 */
/*   Updated: 2021/02/09 14:23:18 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class Ice : public AMateria {
public:
	Ice(void);
	Ice(Ice const & rhs);
	Ice & operator=(Ice const & rhs);
	virtual ~Ice(void);

	Ice* clone(void) const;
	void use(ICharacter& target);
private:
};

#endif