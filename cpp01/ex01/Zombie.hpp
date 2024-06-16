#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		void setName(const std::string name);
		void announce();

	private:
		std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif