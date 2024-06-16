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

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	Fixed c(10);
	Fixed d(10);
	std::cout << "EXTRA:" << std::endl;

	c > d ? yes() : no();
	c < d ? yes() : no();
	c >= d ? yes() : no();
	c <= d ? yes() : no();
	c == d ? yes() : no();
	c != d ? yes() : no();

	Fixed e = c + d; // 10 + 10
	Fixed f = c - d; // 10 - 10
	c = e / d; // 20 / 10
	d = e * d; // 20 * 10

	std::cout << e << std::endl;
	std::cout << f << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	return 0;
}