/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 16:48:18 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/12 17:21:40 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {
public:
  Victim(std::string n);
  Victim(void);
  Victim const & operator=(Victim const & rhs);
  ~Victim(void);

    std::string getName(void);
    std::string getTitle(void);
    void    getPolymorphed() const;
private:
    std::string _name;
};

std::ostream & operator<<(std::ostream &stream, Victim & rhs);


#endif