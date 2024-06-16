#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact num[8];
	
	public:
		void showContacts();
		void setNum(Contact newContact, int i);
};

#endif