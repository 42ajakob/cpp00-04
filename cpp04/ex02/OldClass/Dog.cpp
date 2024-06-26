#include "Dog.hpp"

Dog::Dog() : dogBrain(new Brain()) {
	std::cout << "Dog: Default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog& other ) : Animal(other), dogBrain(new Brain(*other.dogBrain)) {
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=( const Dog& other ) {
	if (this != &other) {
		std::cout << "Dog: Copy assignment operator called" << std::endl;
		Animal::operator=(other);
		delete dogBrain;
		dogBrain = new Brain(*other.dogBrain);
	}	
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog: Deconstructor called" << std::endl;
	delete dogBrain;
}

void Dog::makeSound() const {
	std::cout << "Dog: Bark! Bark!! Bark Bark!!!" << std::endl;
}

void Dog::setFirstIdea( std::string idea ) {
	dogBrain->setFirstIdea(idea);
}

std::string Dog::getFirstIdea() {
	return dogBrain->getFirstIdea();
}

std::string Dog::getSecIdea() {
	return dogBrain->getSecIdea();
}