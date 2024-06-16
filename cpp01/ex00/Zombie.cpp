#include "Zombie.hpp"

void Zombie::setName(const std::string name)
{
	this->name = name;
}

const std::string& Zombie::getName() const
{
	return name;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	ZombieFoo()
{
	Zombie	Foo;

	Foo.setName("Foo");
	Foo.announce();
}
