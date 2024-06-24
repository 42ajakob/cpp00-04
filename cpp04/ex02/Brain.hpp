#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain( std::string firstIdea );
		Brain( const Brain& other );
		Brain& operator=( const Brain& other );
		virtual ~Brain();

		void setFirstIdea( std::string idea );
		std::string getFirstIdea();
		std::string getSecIdea();
};

#endif