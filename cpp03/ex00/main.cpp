#include "ClapTrap.hpp"

int	main() {
	ClapTrap Alex("Alex");

	while (Alex.getHitPoints() != 0) {
		Alex.attack("Somebody");
		Alex.beRepaired(1);
		Alex.takeDamage(5);
	}
	Alex.attack("Somebody");
	Alex.beRepaired(1);
	Alex.takeDamage(1);
	return 0;
}