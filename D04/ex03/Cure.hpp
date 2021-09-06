/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:16:00 by liz           #+#    #+#                 */
/*   Updated: 2021/02/09 14:22:59 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Cure : public AMateria {
public:
	Cure(void);
	Cure(Cure const & rhs);
	Cure & operator=(Cure const & rhs);
	virtual ~Cure(void);

	Cure* clone(void) const;
	void use(ICharacter& target);
};

#endif