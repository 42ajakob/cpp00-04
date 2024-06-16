#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

void HumanA::attack()
{
	std::cout << name << " attacks with there " << weapon->getType() << std::endl;
}