#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* Zom = new Zombie[N];
	int i = 0;

	while (i < N)
	{
		Zom[i].setName(name);
		i++;
	}
	return (&Zom[0]);
}