#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat: Default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal(other) {
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=( const WrongCat& other ) {
	if (this != &other) {
		std::cout << "WrongCat: Copy assignment operator called" << std::endl;
		WrongAnimal::operator=(other);
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: Deconstructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat: Meow! Meow!! Meow MEOW!!!" << std::endl;
}