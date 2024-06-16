#include "HumanB.hpp"

HumanB::HumanB(const std::string name)
{
	this->name = name;
	this->weapon = new Weapon("Fists");
}

void HumanB::setWeapon(Weapon &weapon)
{
	delete this->weapon;
	this->weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with there " << weapon->getType() << std::endl;
}