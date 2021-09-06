/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   awesome_phonebook.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 12:15:01 by liz           #+#    #+#                 */
/*   Updated: 2020/07/30 11:02:48 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.class.hpp"

void 	menu(void)
{
	std::string input;
	std::cout << "\e[0;36m__  _  __ ____ |  |   ____  ____   _____   ____"; std::cout << '\n'; 
	std::cout << "\\ \\/ \\/ // __ \\|  | _/ ___\\/  _ \\ /     \\_/ __ \\ "; std::cout <<'\n';
	std::cout << " \\     /\\  ___/|  |_\\  \\__(  <_> )  Y Y  \\  ___/ "; std::cout <<'\n';
	std::cout << "  \\/\\_/  \\___  >____/\\___  >____/|__|_|  /\\___  >"; std::cout <<'\n';
	std::cout << "             \\/          \\/            \\/     \\/\e[0m"; std::cout <<'\n';
	std:: cout << "This is the phonebook menu";									std:: cout <<  '\n';
	std:: cout << "To quit the program please type:         \e[1;31mEXIT\e[0m";  std:: cout <<  '\n';
	std:: cout << "To add a user please type:               \e[1;32mADD\e[0m";  std:: cout <<  '\n';
	std:: cout << "To see the list of contacts please type: \e[1;33mSEARCH\e[0m";  std:: cout <<  '\n';
	return ;
}

phonebook	add(void)
{
	phonebook phonebook;
	std::string buffer;

	std::cout << "Please enter the first name: ";
	std::getline(std::cin, buffer);
	phonebook.setFirstName(buffer); 
	std::cout << "Please enter the last name: ";
	std::getline(std::cin, buffer);
	phonebook.setLastName(buffer);
	std::cout << "Please enter a nickname: ";
	std::getline(std::cin, buffer);
	phonebook.setNickname(buffer);
	std::cout << "Please enter a login: ";
	std::getline(std::cin, buffer);
	phonebook.setLogin(buffer);
	std::cout << "Please enter a postal address: ";
	std::getline(std::cin, buffer);
	phonebook.setPostalAddress(buffer);
	std::cout << "Please enter an email address: ";
	std::getline(std::cin, buffer);
	phonebook.setEmailAddress(buffer);
	std::cout << "Please enter a phone number: ";
	std::getline(std::cin, buffer);
	phonebook.setPhoneNumber(buffer);
	std::cout << "Please enter a date of birth: ";
	std::getline(std::cin, buffer);
	phonebook.setBirthdayDate(buffer);
	std::cout << "Please enter a favorite meal: ";
	std::getline(std::cin, buffer);
	phonebook.setFavoriteMeal(buffer);
	std::cout << "Please enter the color of your underwear: ";
	std::getline(std::cin, buffer);
	phonebook.setUnderwearColor(buffer);
	std::cout << "Please enter your darkest secret.... Moehahaha: ";
	std::getline(std::cin, buffer);
	phonebook.setDarkestSecret(buffer);
	return (phonebook);
}

void	visit_contact(int index, phonebook *phonebook)
{
	std::string buffer;
	buffer = phonebook[index].getFirstName();
	std::cout << "First name = " << buffer << '\n';
	buffer =  phonebook[index].getLastName();
	std::cout << "Last name = " << buffer << '\n';
	buffer = phonebook[index].getNickname();
	std::cout << "Nickname = " << buffer << '\n';
	buffer = phonebook[index].getLogin();
	std::cout << "Login is = " << buffer << '\n';
	buffer = phonebook[index].getPostalAddress();
	std::cout << "Postal address = " << buffer << '\n';
	buffer = phonebook[index].getEmailAddress();
	std::cout << "Email address = " << buffer << '\n';
	buffer = phonebook[index].getPhoneNumber();
	std::cout << "Phone number = " << buffer << '\n';
	buffer = phonebook[index].getBirthdayDate();
	std::cout << "Birthday date = " << buffer << '\n';
	buffer = phonebook[index].getFavoriteMeal();
	std::cout << "favorite meal = " << buffer << '\n';
	buffer = phonebook[index].getUnderWearColor();
	std::cout << "Underwear color = " << buffer << '\n';
	buffer = phonebook[index].getDarkestSecret();
	std::cout << "Darkest secret = " << buffer << '\n';

}

void	search_user(int number_users, phonebook *phonebook)
{
	int index = 0;
	int filler = 0;
	std::string print;
	if (number_users == 0)
	{
		std::cout << "You have no contacts yet, please add one before using the command SEARCH\n";
		return ;
	}
	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICKNAME  |\n";
	while (index < number_users)
	{
		std::cout <<"|" << index << "         |";
		if (phonebook[index].getFirstName().length() <= 10)
		{
			print = phonebook[index].getFirstName();
			std::cout << print;
			filler = print.length();
			while (filler < 10)
			{
				std::cout << ' ';
				filler++;
			}
			std::cout << "|";
		}
		else
		{
			print = phonebook[index].getFirstName();
			print.resize(9);
			std::cout << print << ".|";
		}
		if (phonebook[index].getLastName().length() <= 10)
		{
			print = phonebook[index].getLastName();
			std::cout << print;
			filler = print.length();
			while (filler < 10)
			{
				std::cout << ' ';
				filler++;
			}
			std::cout << "|";
		}
		else
		{
			print = phonebook[index].getLastName();
			print.resize(9);
			std::cout << print << ".|";
		}
		if (phonebook[index].getNickname().length() <= 10)
		{
			print = phonebook[index].getNickname();
			std::cout << print;
			filler = print.length();
			while (filler < 10)
			{
				std::cout << " ";
				filler++;
			}
			std::cout << "|";
		}
		else
		{
			print = phonebook[index].getNickname();
			print.resize(9);
			std::cout << print << ".|";
		}
		std::cout << std::endl;
		index++;
	}
	std::cout << "Please enter the index of the contact you would like to visit: ";
	std::cin >> index;
	if (std::cin.good() && (index >= 0 && index < number_users))
	{
		visit_contact(index, phonebook);
	}
	else
	{
			std::cin.clear();
			std:: cout << "\e[1;31mThis index does not excist\e[0m\n";
	}
	std::cin.ignore(1024, '\n');
}

int main(void)
{
	std::string input;
	const int maxContact = 8;
	phonebook phonebook[maxContact];
	int number_users;

	number_users = 0;
	menu();
	while (1)
	{
		std::cout << "Your choice is my command: ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (number_users < maxContact)
			{
				phonebook[number_users] = add();
				number_users++;
			}
			else
			{
				std::cout << "You've reached the contacts max. Now enjoy these cats\n";
				std::cout << "\e[1;34m                      /^--^\\     /^--^\\     /^--^\\\n";
				std::cout << "                      \\____/     \\____/     \\____/\n";
				std::cout << "                     /      \\   /      \\   /      \\\n";
				std::cout << "                    |        | |        | |        |\n";
				std::cout << "                     \\__  __/   \\__  __/   \\__  __/\n";
				std::cout << "|^|^|^|^|^|^|^|^|^|^|^|^\\ \\^|^|^|^/ /^|^|^|^|^\\ \\^|^|^|^|^|^|^|^|^|^|^|^|\n";
				std::cout << "| | | | | | | | | | | | |\\ \\| | |/ /| | | | | | \\ \\ | | | | | | | | | | |\n";
				std::cout << "| | | | | | | | | | | | / / | | |\\ \\| | | | | |/ /| | | | | | | | | | | |\n";
				std::cout << "| | | | | | | | | | | | \\/| | | | \\/| | | | | |\\/ | | | | | | | | | | | |\n";
				std::cout << "#########################################################################\n";
				std::cout << "| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |\n";
				std::cout << "| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |\e[0m\n";
			}
		}
		else if (input == "EXIT")
		{
			std::cout << "Thanks for using this phonebook. See you later alligator \n";
			std::cout << "\e[1;32m          .-._   _ _ _ _ _ _ _ _\n";
			std::cout << ".-''-.__.-'00  '-' ' ' ' ' ' ' ' '-.\n";
			std::cout << "'.___ '    .   .--_'-' '-' '-' _'-' '._\n";
			std::cout << " V: V 'vv-'   '_   '.       .'  _..' '.'.\n";
			std::cout << "   '=.____.=_.--'   :_.__.__:_   '.   : :\n";
			std::cout << "           (((____.-'        '-.  /   : :\n";
			std::cout << "                             (((-'\\ .' /\n";
			std::cout << "                           _____..'  .'\n";
			std::cout << "                          '-._____.-\e[0m'\n";
			break ;
		}
		else if (input == "SEARCH")
			search_user(number_users, phonebook);
		else
			std::cout << "\e[1;31mI'm sorry this command does not excist, please try again...\e[0m\n";
	}
	return (0);
}