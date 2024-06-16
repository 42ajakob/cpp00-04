#include "HumanB.hpp"

HumanB::HumanB() {
	name = "Steve";
	weapon = NULL;
}

HumanB::HumanB( const std::string _name ) {
	name = _name;
	weapon = NULL;
}

HumanB::~HumanB() {

}

void HumanB::setWeapon( Weapon &_weapon ) {
	weapon = &_weapon;
}

void HumanB::attack() {
	if (weapon == NULL) {
		std::cout << name << " attacks with there fists" << std::endl;
		return ;
	}
	std::cout << name << " attacks with there " << weapon->getType() << std::endl;
}