#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string comparison[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	enum complains { DEBUG, INFO, WARNING, ERROR };
	int value = -1;
	int i = 0;
	Harl	iWannaCry;
	void (Harl::*funcPTR[4])();
	funcPTR[0] = &Harl::debug;
	funcPTR[1] = &Harl::info;
	funcPTR[2] = &Harl::warning;
	funcPTR[3] = &Harl::error;

	while (i < 4)
	{
		if (level.compare(comparison[i]) == 0)
			value = i;
		i++;
	}
	switch(value)
	{
		case DEBUG:
			(iWannaCry.*funcPTR[0])();
			break;
		case INFO:
			(iWannaCry.*funcPTR[1])();
			break;
		case WARNING:
			(iWannaCry.*funcPTR[2])();
			break;
		case ERROR:
			(iWannaCry.*funcPTR[3])();
			break;
		default:
			std::cout << "OMG! He is not complaining!" << std::endl;
			break;
	}
}