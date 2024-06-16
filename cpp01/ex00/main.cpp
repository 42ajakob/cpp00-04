#include "Zombie.hpp"

static void	destructor(Zombie* Zom)
{
	std::cout << Zom->getName() << " has been destructed by the DESCTRUCTOR!" << std::endl;
	delete Zom;
}

int	main(void)
{
	Zombie* aNewZombie;

	ZombieFoo();
	randomChump("IAmZombie");
	aNewZombie = newZombie("NewZombie");
	aNewZombie->announce();
	destructor(aNewZombie);
	return (0);
}