#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap Default constructor called!" << std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap(other) {
	std::cout << "FragTrap Copy constructor called!" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=( const FragTrap& other ) {
	if (this != &other) {
		std::cout << "FragTrap Copy assignment constructor called!" << std::endl;
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Deconstructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Positive highFive's request." << std::endl;
}