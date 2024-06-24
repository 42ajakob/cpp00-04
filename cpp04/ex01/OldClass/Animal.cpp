#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal: Default constructor called" << std::endl;
	type = "Unknown";
}

Animal::Animal( const Animal& other ) {
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=( const Animal& other ) {
	if (this != &other) {
		std::cout << "Animal: Copy assignment operator called" << std::endl;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal: Deconstructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal: A Sound that Animals do ..." << std::endl;
}

std::string Animal::getType() const {
	std::cout << "Animal: getType() called for completion" << std::endl;
	return type;
}