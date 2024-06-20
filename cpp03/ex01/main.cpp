#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {

	ScavTrap Steve("Steve");

	std::cout << std::endl;
	Steve.attack("Alex");
	Steve.beRepaired(1);
	Steve.takeDamage(5);
	Steve.guardGate();
	return 0;
}