#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		void setName(const std::string name);
		const std::string& getName() const;
		void announce();

	private:
		std::string name;
};

void	ZombieFoo();
Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif