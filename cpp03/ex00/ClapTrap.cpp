#include "ClapTrap.hpp"

// CONSTRUCTION

ClapTrap::ClapTrap( std::string name ) : _name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
	std::cout << "Name: " << _name << " hitPoints: " << hitPoints << " energyPoints: " << energyPoints << " attackDamage: " << attackDamage << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other ) {
	if (this != &other) {
		std::cout << "Copy assignment constructor called" << std::endl;
		_name = other._name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Deconstructor called" << std::endl;
}



// FUNCTIONS

void ClapTrap::attack(const std::string& target) {
	if (hitPoints == 0) {
		std::cout << _name << " has already fallen and can't attack..." << std::endl;
	}
	else if (energyPoints == 0) {
		std::cout << "Can't Attack. Has no energy left!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	int res = hitPoints - amount;
	if (hitPoints == 0) {
		std::cout << _name << " Dead people can't take damage..." << std::endl;
	}
	else if (res <= 0) {
		std::cout << _name << " has died!" << std::endl;
		hitPoints = 0;
	}
	else {
		std::cout << _name << " took " << amount << " of damage and now has " << res << " hitPoints left!" << std::endl;
		hitPoints = res;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints == 0) {
		std::cout << _name << " is damaged beyond repair!" << std::endl;
	}
	else if (energyPoints == 0) {
		std::cout << _name << " has no energy left for repair!" << std::endl;
	}
	else {
		std::cout << _name << " restores " << amount << " hitPoint!" << std::endl;
		hitPoints += amount;
		energyPoints--;
	}
}

int	ClapTrap::getHitPoints() {
	return hitPoints;
}