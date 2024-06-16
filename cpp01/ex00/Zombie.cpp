#include "Zombie.hpp"

Zombie::Zombie() {
	name = "Foo";
}

Zombie::Zombie( std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << name << " has been destructed by the DESCTRUCTOR!" << std::endl;
}

void Zombie::setName(const std::string name) {
	this->name = name;
}

const std::string& Zombie::getName() const {
	return name;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	ZombieFoo() {
	Zombie	Foo;

	Foo.setName("Foo");
	Foo.announce();
}