/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 13:29:45 by liz           #+#    #+#                 */
/*   Updated: 2021/02/08 17:08:36 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria {
public:
	AMateria(std::string const & type);
	AMateria(void);
	AMateria(AMateria const & rhs);
	AMateria & operator=(AMateria const & rhs);
	virtual ~AMateria(void);

	std::string const & getType(void) const;
	void				setType(std::string type);
	unsigned int getXP(void) const;
	void			setXP(unsigned int XP);
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);		

private:
	std::string _type;
	unsigned int _XP;
};

#endif