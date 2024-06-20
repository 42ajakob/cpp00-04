#include "ClapTrap.hpp"

// CONSTRUCTION

ClapTrap::ClapTrap( std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
	std::cout << "Name: " << _name << " _hitPoints: " << _hitPoints << " _energyPoints: " << _energyPoints << " _attackDamage: " << _attackDamage << std::endl;
}

ClapTrap::ClapTrap( std::string name, int _hitPoints, int _energyPoints, int _attackDamage )
	: _name(name), _hitPoints(_hitPoints), _energyPoints(_energyPoints), _attackDamage(_attackDamage) {
	std::cout << "Default constructor called" << std::endl;
	std::cout << "Name: " << _name << " _hitPoints: " << _hitPoints << " _energyPoints: " << _energyPoints << " _attackDamage: " << _attackDamage << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other ) {
	if (this != &other) {
		std::cout << "Copy assignment constructor called" << std::endl;
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Deconstructor called" << std::endl;
}

// FUNCTIONS

void ClapTrap::attack( const std::string& target ) {
	if (_hitPoints == 0) {
		std::cout << _name << " has already fallen and can't attack..." << std::endl;
	}
	else if (_energyPoints == 0) {
		std::cout << "Can't Attack. Has no energy left!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {
	int res = _hitPoints - amount;
	if (_hitPoints == 0) {
		std::cout << _name << " Dead people can't take damage..." << std::endl;
	}
	else if (res <= 0) {
		std::cout << _name << " has died!" << std::endl;
		_hitPoints = 0;
	}
	else {
		std::cout << _name << " took " << amount << " of damage and now has " << res << " _hitPoints left!" << std::endl;
		_hitPoints = res;
	}
}

void ClapTrap::beRepaired ( unsigned int amount ) {
	if (_hitPoints == 0) {
		std::cout << _name << " is damaged beyond repair!" << std::endl;
	}
	else if (_energyPoints == 0) {
		std::cout << _name << " has no energy left for repair!" << std::endl;
	}
	else {
		std::cout << _name << " restores " << amount << " hitPoint!" << std::endl;
		_hitPoints += amount;
		_energyPoints--;
	}
}

int	ClapTrap::getHitPoints() {
	return _hitPoints;
}