#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete j;
	delete i;
	delete meta;

	std::cout << std::endl;
	std::cout << "My test" << std::endl;
	std::cout << std::endl;

	Animal ani;
	Animal anim = ani;
	Animal anime;

	anime = anim;

	std::cout << std::endl;
	std::cout << "Everything Wrong!" << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCatPtr = new WrongCat();
	WrongCat wrongCat;

	std::cout << std::endl;

	std::cout << wrongAnimal->getType() << std::endl;
	std::cout << wrongCatPtr->getType() << std::endl;

	std::cout << std::endl;

	std::cout << "WrongAnimal called: ";
	wrongAnimal->makeSound();
	std::cout << "wrongCatPtr called via WrongAnimal*: ";
	wrongCatPtr->makeSound();
	std::cout << "wrongCat called: ";
	wrongCat.makeSound();

	std::cout << std::endl;
	std::cout << "Just feels so Wrong!" << std::endl;
	std::cout << std::endl;

	delete wrongAnimal;
	delete wrongCatPtr;

	return 0;
}