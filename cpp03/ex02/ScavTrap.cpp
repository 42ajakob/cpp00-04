#include "ScavTrap.hpp"

// CONSTRUCTOR

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap(other) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other ) {
	if (this != &other) {
		std::cout << "ScavTrap Copy assignment constructor called" << std::endl;
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Deconstructor called" << std::endl;
}


// FUNCTIONS

void ScavTrap::attack( const std::string& target ) {
	std::cout << "ScavTrap is attacking " << target << "!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}