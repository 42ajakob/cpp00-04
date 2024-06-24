#include "OldClass/Cat.hpp"
#include "OldClass/Dog.hpp"
#include "OldClass/WrongCat.hpp"

// void leaks(void) {
// 	system("leaks animalBrains");
// }

int main()
{
	const Animal* j = new Dog();
	const Animal* k = new Cat();

	delete j;
	delete k;

	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;

	Animal** Arr = new Animal*[20];
	int i = 0;

	// atexit(leaks);
	while (i < 10) {
		Arr[i] = new Cat();
		i++;
	}
	while (i < 20) {
		Arr[i] = new Dog();
		i++;
	}

	i = 0;
	while (i < 20) {
		delete Arr[i];
		i++;
	}
	delete[] Arr;

	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;
	std::cout << "Which useless tests does the subject want me to include again?" << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;

	Cat* catArr = new Cat[10];
	Dog* dogArr = new Dog[10];
	Brain* brain = new Brain("BrainMightHaveAIdea");

	catArr[0].setFirstIdea("Cat wants more Cats");
	dogArr[0].setFirstIdea("Dog wants more Dogs");

	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;

	std::cout << catArr[0].getFirstIdea() << std::endl;
	std::cout << catArr[0].getSecIdea() << std::endl;
	std::cout << dogArr[0].getFirstIdea() << std::endl;
	std::cout << dogArr[0].getSecIdea() << std::endl;
	std::cout << brain->getFirstIdea() << std::endl;
	std::cout << brain->getSecIdea() << std::endl;

	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;

	delete brain;
	delete[] catArr;
	delete[] dogArr;
	return 0;
}