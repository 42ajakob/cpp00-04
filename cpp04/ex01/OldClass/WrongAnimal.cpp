#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
	type = "Unknown";
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {
	if (this != &other) {
		std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: Deconstructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal: Meow! Meow!! Meow MEOW!!!" << std::endl;
}

std::string WrongAnimal::getType() const {
	std::cout << "WrongAnimal: getType() called for completion" << std::endl;
	return type;
}
