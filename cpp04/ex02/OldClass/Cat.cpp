#include "Cat.hpp"

Cat::Cat() : catBrain(new Brain()) {
	std::cout << "Cat: Default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat& other ) : Animal(other), catBrain(new Brain(*other.catBrain)) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=( const Cat& other ) {
	if (this != &other) {
		std::cout << "Cat: Copy assignment operator called" << std::endl;
		Animal::operator=(other);
		delete catBrain;
		catBrain = new Brain(*other.catBrain);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat: Deconstructor called" << std::endl;
	delete catBrain;
}

void Cat::makeSound() const {
	std::cout << "Cat: Meow! Meow!! Meow MEOW!!!" << std::endl;
}

void Cat::setFirstIdea( std::string idea ) {
	catBrain->setFirstIdea(idea);
}

std::string Cat::getFirstIdea() {
	return catBrain->getFirstIdea();
}

std::string Cat::getSecIdea() {
	return catBrain->getSecIdea();
}