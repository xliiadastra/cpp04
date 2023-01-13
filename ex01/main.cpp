#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat a;
	a.setBrain("aa", 2);
}

// void A()
// {
// 	system("leaks a.out");
// }

// int main()
// {
// 	atexit(A);
// 	Animal *a[100];

// 	int i = 0;
// 	for (; i < 50; ++i)
// 		a[i] = new Dog();
// 	for (; i < 100; ++i)
// 		a[i] = new Cat();

// 	Animal* newAnimal(new Dog());
// 	*newAnimal = *a[0];

// 	a[0]->getBrain()->showIdeas();
// 	newAnimal->getBrain()->showIdeas();

// 	newAnimal->getBrain()->setIdeas("HELLO!");
// 	newAnimal->getBrain()->setIdeas("LELELELE");
// 	a[0]->getBrain()->setIdeas("BYE!");
// 	std::cout << "----------------------------------\n";
// 	a[0]->getBrain()->showIdeas();
// 	newAnimal->getBrain()->showIdeas();

// 	for (int j = 0; j < 100; ++j)
// 		delete a[j];
// 	delete newAnimal;

// 	Dog hey;
// 	{
// 		Dog tmp = hey;
// 	}
// 	hey.getBrain()->showIdeas();
// 	return (0);
// }