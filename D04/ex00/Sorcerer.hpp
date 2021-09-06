/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 16:23:46 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/02/08 17:08:36 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERE_HPP
#define SORCERE_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
public:
    Sorcerer(std::string n, std::string t);
    Sorcerer(Sorcerer const & rhs);
    Sorcerer & operator=(Sorcerer const & rhs);
    ~Sorcerer(void);

    void    setName(std::string name);
    std::string getName(void);
    std::string getTitle(void);
    void    polymorph(Victim const &) const;
private:
    Sorcerer(void);
    std::string _name;
    std::string _title;
};

std::ostream & operator<<(std::ostream &stream, Sorcerer & rhs);

#endif