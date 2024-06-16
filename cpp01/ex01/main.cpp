#include "Zombie.hpp"

int	main() {
	Zombie* Zom;
	int N = 5;
	int	i = 0;

	Zom = zombieHorde(N, "Maniac");
	while (i < N) {
		std::cout << "Zombie Number: " << i << " is Announcing himself" << std::endl;
		Zom[i].announce();
		
		i++;
	}
	delete[] Zom;
	return 0;
}