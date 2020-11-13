/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 10:46:46 by liz           #+#    #+#                 */
/*   Updated: 2020/07/28 13:21:44 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(int argc, char **argv)
{
	int i;
	int j;
	
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
		j = 0;
	}
	std::cout << '\n';
}

int main(int argc, char **argv)
{
	if (argc > 1)
		megaphone(argc, argv);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	return (0);
}