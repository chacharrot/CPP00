#include <iostream>
#include <string>
#include <iomanip>

class contact
{
	private:
			std::string firstname;
			std::string lastname;
			std::string nickname;
			std::string phonenumber;
			std::string darkestsecret;

	public:
			contact();
			void	addcontact();
			void	display();
			void	displayall();
			~contact();
};