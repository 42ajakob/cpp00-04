#include "Fixed.hpp"

// CONSTRUCTION
Fixed::Fixed() {
	_fixedPointValue = 0;
}

Fixed::Fixed( int num ) {
	_fixedPointValue = num << _fractionalBits; // losing precision with big numbers
}

Fixed::Fixed( const float num ) {
	_fixedPointValue = roundf((num * (1 << _fractionalBits))); // roundf losing precision
}

Fixed::Fixed( const Fixed& other ) {
	*this = other; 
}

Fixed& Fixed::operator=( const Fixed& other ) {
	if (this != &other) {
		this->_fixedPointValue = other._fixedPointValue;
	}
	return *this;
}

Fixed::~Fixed() {
}



// GETTER/SETTER
int Fixed::getRawBits( void ) const {
	return _fixedPointValue;
}

void Fixed::setRawBits( int const raw ) {
	_fixedPointValue = raw;
}



// RETURN fixedPointValue WITH TYPE FLOAT/INT
float Fixed::toFloat( void ) const {
	return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits); // _fixedPointValue / 256.0F. Float representation
}

int Fixed::toInt( void ) const {
	return _fixedPointValue >> _fractionalBits; // _fixedPointValue / 256. Int representation
}



// COMPARISON
bool Fixed::operator>( const Fixed& other ) const {
    return _fixedPointValue > other._fixedPointValue;
}

bool Fixed::operator<( const Fixed& other ) const {
    return _fixedPointValue < other._fixedPointValue;
}

bool Fixed::operator>=( const Fixed& other ) const {
    return _fixedPointValue >= other._fixedPointValue;
}

bool Fixed::operator<=( const Fixed& other ) const {
    return _fixedPointValue <= other._fixedPointValue;
}

bool Fixed::operator==( const Fixed& other ) const {
    return _fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=( const Fixed& other ) const {
    return _fixedPointValue != other._fixedPointValue;
}



// OPERATORS + - * /
Fixed Fixed::operator+( const Fixed& other ) const {
    return this->toFloat() + other.toFloat();
}

Fixed Fixed::operator-( const Fixed& other ) const {
    return this->toFloat() - other.toFloat();
}

Fixed Fixed::operator*( const Fixed& other ) const {
    return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator/( const Fixed& other ) const {
    return this->toFloat() / other.toFloat();
}



// OVERLOAD ++ --
Fixed& Fixed::operator++() {
    ++_fixedPointValue;
    return *this;
}

Fixed Fixed::operator++( int ) {
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--() {
    --_fixedPointValue;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed temp(*this);
    --(*this);
    return temp;
}



// OVERLOAD FUNCTIONS
Fixed& Fixed::min( Fixed& a, Fixed& b ) {
	return (a < b) ? a : b;
}

Fixed& Fixed::max( Fixed& a, Fixed& b ) {
	return (a > b) ? a : b;
}

Fixed& Fixed::min( const Fixed& a, const Fixed& b ) {
	return (a < b) ? const_cast<Fixed&>(a) : const_cast<Fixed&>(b);
}

Fixed& Fixed::max( const Fixed& a, const Fixed& b ) {
	return (a > b) ? const_cast<Fixed&>(a) : const_cast<Fixed&>(b);
}



// OVERLOAD STDOUT
std::ostream& operator<<( std::ostream& os, const Fixed& obj ) {
    os << obj.toFloat();
    return os;
}