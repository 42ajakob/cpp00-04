#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain: Default constructor called" << std::endl;
	ideas[0] = "noIdea";
	ideas[1] = "noClue";
}

Brain::Brain( std::string firstIdea ) {
	std::cout << "Brain: Default constructor called" << std::endl;
	ideas[0] = firstIdea;
	ideas[1] = "noClue";
}

Brain::Brain( const Brain& other ) {
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=( const Brain& other ) {
	if (this != &other) {
		std::cout << "Brain: Copy assignment operator called" << std::endl;
		for (int i = 0; i < 100; i++) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain: Deconstructor called" << std::endl;
}

void Brain::setFirstIdea( std::string idea ) {
	ideas[0] = idea;
}

std::string Brain::getFirstIdea() {
	return ideas[0];
}

std::string Brain::getSecIdea() {
	return ideas[1];
}