/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 16:48:18 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/02/18 18:19:31 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {
public:
  Victim(std::string n);
  Victim(Victim const & rhs);
  Victim & operator=(Victim const & rhs);
  virtual ~Victim(void);
  
  void    setName(std::string name);
  std::string getName(void) const;
  virtual void    getPolymorphed() const;
private:
	Victim(void);
	std::string _name;
};

std::ostream & operator<<(std::ostream &stream, Victim & rhs);

#endif