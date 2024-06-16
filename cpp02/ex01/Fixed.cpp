#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
}

Fixed::Fixed( int num ) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = num << _fractionalBits; // losing precision with big numbers
}

Fixed::Fixed( const float num ) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf((num * (1 << _fractionalBits))); // roundf losing precision
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
Fixed::Fixed( const Fixed& other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=( const Fixed& other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_fixedPointValue = other._fixedPointValue;
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int Fixed::getRawBits( void ) const {
	return _fixedPointValue;
}

void Fixed::setRawBits( int const raw ) {
	_fixedPointValue = raw;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

float Fixed::toFloat( void ) const {
	return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits); // _fixedPointValue / 256.0F. Float representation
}

int Fixed::toInt( void ) const {
	return _fixedPointValue >> _fractionalBits; // _fixedPointValue / 256. Int representation
}

std::ostream& operator<<( std::ostream& os, const Fixed& obj ) {
    os << obj.toFloat();
    return os;
}