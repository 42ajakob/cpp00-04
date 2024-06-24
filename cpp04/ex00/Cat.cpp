#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat: Default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat& other ) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=( const Cat& other ) {
	if (this != &other) {
		std::cout << "Cat: Copy assignment operator called" << std::endl;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat: Deconstructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Cat: Meow! Meow!! Meow MEOW!!!" << std::endl;
}