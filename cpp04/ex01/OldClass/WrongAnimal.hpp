#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal& other );
		WrongAnimal& operator=( const WrongAnimal& other );
		virtual ~WrongAnimal();

		virtual std::string getType() const;
		void makeSound() const;
};

#endif