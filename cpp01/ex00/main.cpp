#include "Zombie.hpp"

int	main() {
	Zombie* aNewZombie;

	ZombieFoo();
	randomChump( "iAmZombie" );
	aNewZombie = newZombie( "aNewZombie" );
	aNewZombie->announce();
	delete aNewZombie;
	return 0;
}