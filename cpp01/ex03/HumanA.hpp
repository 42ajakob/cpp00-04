#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		std::string name;
		Weapon* weapon;

		HumanA(const std::string name, Weapon &weapon);
		void attack();
};

#endif