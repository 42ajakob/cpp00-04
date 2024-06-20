#include "Fixed.hpp"

void	yes() {
	std::cout << "yes" << std::endl;
}

void	no() {
	std::cout << "no" << std::endl;
}

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "Increment:" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl;
	std::cout << "Float b declarable in the constructor:" << std::endl;
	std::cout << b << std::endl;

	std::cout << std::endl;
	std::cout << "max min functions:" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	
	std::cout << std::endl;
	std::cout << "EXTRA:" << std::endl;

	Fixed c(10);
	Fixed d(10);

	std::cout << std::endl;
	std::cout << "6 comparator operators working:" << std::endl;
	c > d ? yes() : no();
	c < d ? yes() : no();
	c >= d ? yes() : no();
	c <= d ? yes() : no();
	c == d ? yes() : no();
	c != d ? yes() : no();

	std::cout << std::endl;
	std::cout << "4 arithmetic operators working:" << std::endl;

	Fixed e = c + d; // 10 + 10
	Fixed f = c - d; // 10 - 10
	c = e / d; // 20 / 10
	d = e * d; // 20 * 10

	std::cout << e << std::endl;
	std::cout << f << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	
	std::cout << std::endl;
	std::cout << "Decrementation:" << std::endl;

	e = 1;

	std::cout << e << std::endl;
	std::cout << --e << std::endl;
	std::cout << e-- << std::endl;
	std::cout << e << std::endl;
	return 0;
}