/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 15:54:09 by liz           #+#    #+#                 */
/*   Updated: 2020/10/10 12:04:57 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie 
{
public:
	Zombie(std::string, std::string);
	Zombie(void);
	~Zombie(void);
	void setType(std::string);
	void setName(std::string);
	std::string announce(void);
private:
	std::string _name;
	std::string _type;	
};

#endif