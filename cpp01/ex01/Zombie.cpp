#include "Zombie.hpp"

Zombie::Zombie() {
	name = "Foo";
}

Zombie::~Zombie() {
	std::cout << name << " has been destructed by the DESCTRUCTOR!" << std::endl;
}

void Zombie::setName(const std::string name) {
	this->name = name;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}