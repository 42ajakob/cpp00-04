#include "Harl.hpp"

int	main() {
	Harl _Harl;
	void (Harl::*functionPTR)(std::string);
	functionPTR = &Harl::complain;

	(_Harl.*functionPTR)("DEBUG");
	(_Harl.*functionPTR)("INFO");
	(_Harl.*functionPTR)("WARNING");
	(_Harl.*functionPTR)("ERROR");
	(_Harl.*functionPTR)("He seems to enjoy his 7XL-double-cheese-triple-pickle-special-ketchup burger.");
	
	_Harl.complain("ERROR");
	return (0);
}