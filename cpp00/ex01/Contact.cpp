#include "Contact.hpp"

void Contact::setFirstName( std::string str ) {
	firstName = str;
}
void Contact::setLastName( std::string str ) {
	lastName = str;
}
void Contact::setNickName( std::string str ) {
	nickName = str;
}
void Contact::setPhoneNumber( std::string str ) {
	phoneNumber = str;
}
void Contact::setDarkestSecret( std::string str ) {
	darkestSecret = str;
}

const std::string& Contact::getFirstName() {
	return firstName;
}

const std::string& Contact::getLastName() {
	return lastName;
}

const std::string& Contact::getNickName() {
	return nickName;
}

const std::string& Contact::getPhoneNumber() {
	return phoneNumber;
}

const std::string& Contact::getDarkestSecret() {
	return darkestSecret;
}

std::string Contact::formatContact( const std::string& str ) const {
	if (str.length() > 10) {
		return str.substr(0, 9) + ".";
	}
	else {
		return str;
	}
}

void Contact::setContact()
{
	setFirstName("");
	setLastName("");
	setNickName("");
	setPhoneNumber("");
	setDarkestSecret("");

	while (firstName.empty()) {
		std::cout << "First Name: ";
		std::cout << std::flush;
		std::getline(std::cin, firstName);
	}

	while (lastName.empty()) {
		std::cout << "Last Name: ";
		std::cout << std::flush;
		std::getline(std::cin, lastName);
	}

	while (nickName.empty()) {
		std::cout << "Nickname: ";
		std::cout << std::flush;
		std::getline(std::cin, nickName);
	}

	while (phoneNumber.empty()) {
		std::cout << "Phone Number: ";
		std::cout << std::flush;
		std::getline(std::cin, phoneNumber);
	}

	while (darkestSecret.empty()) {
		std::cout << "Darkest Secret: ";
		std::cout << std::flush;
		std::getline(std::cin, darkestSecret);
	}
}