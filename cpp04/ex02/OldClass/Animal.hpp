#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string type;

		Animal();
		Animal( const Animal& other );
		Animal& operator=( const Animal& other );

	public:
		virtual ~Animal();

		virtual std::string getType() const;
		virtual void makeSound() const;
};

#endif