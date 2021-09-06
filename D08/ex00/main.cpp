/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 11:59:19 by liz           #+#    #+#                 */
/*   Updated: 2021/02/05 16:18:57 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::list<int> lst1;

	lst1.push_back(3);
	lst1.push_back(7);
	lst1.push_back(130);
	for (std::list<int>::iterator it = lst1.begin(); it != lst1.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	try {
		easyfind(lst1, 3);
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		easyfind(lst1, 1);
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}

	std::vector<int> 	lst2;
	lst2.push_back(5);
	lst2.push_back(78);
	lst2.push_back(876);
	lst2.push_back(123554);
	lst2.push_back(2345);
	lst2.push_back(545);
	lst2.push_back(55434);
	lst2.push_back(5222);
	for (std::vector<int>::iterator it = lst2.begin(); it != lst2.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	try {
		easyfind(lst2, 78);
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		easyfind(lst2, 1);
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
}