/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 15:54:09 by liz           #+#    #+#                 */
/*   Updated: 2020/11/28 13:42:50 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie 
{
public:
	Zombie(std::string, std::string);
	~Zombie(void);
	std::string announce(void);
private:
	std::string _type;	
	std::string _name;
};

#endif