#include "PhoneBook.hpp"

void PhoneBook::setNum( Contact newContact, int i ) {
	num[i].setFirstName(newContact.getFirstName());
	num[i].setLastName(newContact.getLastName());
	num[i].setNickName(newContact.getNickName());
	num[i].setPhoneNumber(newContact.getPhoneNumber());
	num[i].setDarkestSecret(newContact.getDarkestSecret());
}

void PhoneBook::showContacts() {
	std::string tmp = num[0].getFirstName();
	int index = 0;
	int i = 0;

	while (!(tmp.empty())) {
		std::cout << std::setw(10) << std::right << i << "|"
		<< std::setw(10) << std::right << num[i].formatContact(num[i].getFirstName()) << "|"
		<< std::setw(10) << std::right << num[i].formatContact(num[i].getLastName()) << "|"
		<< std::setw(10) << std::right << num[i].formatContact(num[i].getNickName()) << std::endl;
		i++;
		if (i == 8)
			break;
		tmp = num[i].getFirstName();
	}
	while (index < 1 || index > 8) {
		std::cout << "Type Index Number: ";
		std::getline(std::cin, tmp);
		index = std::atoi(tmp.c_str());
		if (index < 1 || index > 8)
			std::cout << "Wrong Index Number. Try again!" << std::endl;
	}
	std::cout << "First Name: " << num[index].getFirstName() << std::endl;
	std::cout << "Last Name:" << num[index].getLastName() << std::endl;
	std::cout << "Nickname: " << num[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << num[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << num[index].getDarkestSecret() << std::endl;
}