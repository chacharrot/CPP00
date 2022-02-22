#include "phonebook.hpp"

phonebook::phonebook()
{
	this->index = 0;
	return;
}

phonebook::~phonebook()
{
	return;
}

void phonebook::act()
{
	std::string data;
	int num = 0;

	std::cout << "Welcome to the PhoneBook!" << std::endl;
	std::cout << "Please type a command ADD,SEARCH,EXIT : ";
	while(std::getline(std::cin, data))
	{
		if (data == "ADD" || data == "add")
		{
			contact[index].addcontact();
			if (index == 7)
				index = 0;
			else
				index++;
		}
		else if (data == "SEARCH" || data == "search")
		{
			std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
			for (int i = 0; i < 8; i++) 
			{
				std::cout << "|         " << i + 1;
				contact[i].display();
			}
			std::cout << std::endl << "Type index for more details (from 1 to 8): ";
			std::getline(std::cin, data);
			if (data[0] > '0' && data[0] < '9' && data[1] == '\0') 
			{
				std::stringstream data2(data);
				data2 >> num;
				contact[num - 1].displayall();
			}
			else
				std::cout << "error: wrong parameter." << std::endl;
		}
		else if (data == "EXIT" || data == "exit") 
		{
			std::cout << "Good bye, see ya~" << std::endl;
			return;
		}
		std::cout << "Please type a command ADD,SEARCH,EXIT :";
	}
}