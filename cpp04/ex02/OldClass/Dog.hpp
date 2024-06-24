#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "../Brain.hpp"

class Dog : public Animal {
	private:
		Brain *dogBrain;

	public:
		Dog();
		Dog( const Dog& other );
		Dog& operator=( const Dog& other );
		~Dog();

		void makeSound() const;
		void setFirstIdea( std::string idea );
		std::string getFirstIdea();
		std::string getSecIdea();
};

#endif