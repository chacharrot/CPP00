#include "contact.hpp"

contact::contact()
{
	firstname = "";
	lastname = "";
	nickname = "";
	phonenumber = "";
	darkestsecret = "";
	return;
};

contact::~contact()
{
	return;
}

void	contact::addcontact()
{
	std::cout << "Type first name: ";
	std::getline(std::cin, this->firstname);
	std::cout << "Type last name: ";
	std::getline(std::cin, this->lastname);
	std::cout << "Type nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Type phone number: ";
	std::getline(std::cin, this->phonenumber);
	std::cout << "Type darkest secret: ";
	std::getline(std::cin, this->darkestsecret);
	std::cout << std::endl << "Contact created!" << std::endl;
	return;
}

static void printten(std::string str)
{
	std::string temp;

	temp = str;
    if (temp.length() <= 10)
        std::cout << std::right << std::setw(10) << temp;
    else
    {
        temp = temp.substr(0,9) + ".";
        std::cout << std::right << std::setw(10) << temp;
    }
	std::cout << "|";
}

void	contact::display()
{
	std::cout << "|";
	printten(this->firstname);
	printten(this->lastname);
	printten(this->nickname);
	std::cout << std::endl;
}

void	contact::displayall()
{
	std::cout << std::endl << "First name     : " << this->firstname << std::endl;
	std::cout << "Last name      : " << this->lastname << std::endl;
	std::cout << "Nickname       : " << this->nickname << std::endl;
	std::cout << "Phone number   : " << this->phonenumber << std::endl;
	std::cout << "Darkest secret : " << this->darkestsecret << std::endl;
}