/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:53:57 by liz           #+#    #+#                 */
/*   Updated: 2021/01/07 14:54:25 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & rhs);
	MateriaSource const & operator=(MateriaSource const & rhs);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
private:
	AMateria *_inventory[4];
	int			_learnedMateria;
};

#endif