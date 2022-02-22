#include "contact.hpp"
#include <sstream>

class phonebook
{
	private:
			contact contact[8];
	public:
			phonebook();
			void	act();
			int		index;
			~phonebook();
};