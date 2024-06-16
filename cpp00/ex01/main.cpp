#include "PhoneBook.hpp"

int	main() {
	PhoneBook	phonebook;
	Contact		newContact;
	std::string	input;
	int			i = 0;

	while (true) {
		std::cout << "Enter ADD/SEARCH/EXIT: ";
		std::cout << std::flush;
		std::getline(std::cin, input);

		if (input == "EXIT") {
			break;
		}
		else if (input == "SEARCH") {
			phonebook.showContacts();
		}
		else if (input == "ADD") {
			if (i == 8)
				i = 0;
			newContact.setContact();
			phonebook.setNum(newContact, i);
			i++;
		}
	}
	return 0;
}