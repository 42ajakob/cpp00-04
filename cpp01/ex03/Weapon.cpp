#include "Weapon.hpp"

Weapon::Weapon() {
	type = "Steve's Sword";
}

Weapon::Weapon( const std::string type ) {
	this->type = type;
}

Weapon::~Weapon() {

}

void Weapon::setType( const std::string type ) {
	this->type = type;
}

const std::string& Weapon::getType() const {
	return type;
}