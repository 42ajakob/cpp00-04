#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string name;

	public:
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void setName(const std::string name);
		const std::string& getName() const;
		void announce();

};

void	ZombieFoo();
Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif