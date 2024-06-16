#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		void setFirstName( std::string str );
		void setLastName( std::string str );
		void setNickName( std::string str );
		void setPhoneNumber( std::string str );
		void setDarkestSecret( std::string str );
		const std::string& getFirstName();
		const std::string& getLastName();
		const std::string& getNickName();
		const std::string& getPhoneNumber();
		const std::string& getDarkestSecret();
		std::string formatContact( const std::string& str ) const;
		void setContact();
};

#endif