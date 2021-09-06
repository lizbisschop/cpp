/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 17:05:33 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/02/08 17:08:36 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {
public:
  Peon(std::string n);
  Peon(Peon const & rhs);
  Peon & operator=(Peon const & rhs);
  virtual ~Peon(void);
  
  void		getPolymorphed(void) const;
private:
  Peon(void);
};

std::ostream & operator<<(std::ostream &stream, Peon & rhs);


#endif