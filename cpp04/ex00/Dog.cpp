#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog: Default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog& other ) : Animal(other) {
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=( const Dog& other ) {
	if (this != &other) {
		std::cout << "Dog: Copy assignment operator called" << std::endl;
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog: Deconstructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Dog: Bark! Bark!! Bark Bark!!!" << std::endl;
}