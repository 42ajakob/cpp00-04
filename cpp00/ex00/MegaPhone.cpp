#include <iostream>
#include <string>
#include <cctype>

int main( int argc, char **argv ) {
	if (argc < 2 || argc > 2) {
		std::cout << "Your screaming at the megaphone. But it doesn't reply..." << std::endl;
		return 1;
	}
    std::string str = argv[1];
	for (size_t i = 0; i < str.length(); i++) {
		char upperChar = std::toupper(str[i]);
		std::cout << upperChar;
	}
	std::cout << std::endl;
    return 0;
}