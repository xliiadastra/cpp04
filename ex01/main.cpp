#include "Cat.hpp"
#include "Dog.hpp"

void check_leaks()
{
	system("leaks brain");
}

int main()
{
//	atexit(check_leaks);
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;
	(void)j;
	(void)i;
//	Animal* a[4];
	
	// std::cout << "-------------------------\nAnimal array create start\n\n";
	// for (int idx = 0; idx < 4; ++idx) {
	// 	if (idx < 2) {
	// 		a[idx] = new Dog();
	// 	}
	// 	else {
	// 		a[idx] = new Cat();
	// 	}
	// }
	// std::cout << "-------------------------\nAnimal array assign done\n\n";

	// for (int idx = 0; idx < 4; ++idx) {
	// 	a[idx]->makeSound();
	// 	delete a[idx];
	// }
	// std::cout << "-------------------------\nAnimal array delete done\n\n";

	// Dog* b = new Dog();
	// b->setBrain("Dog's IDEA", 10);
	// Dog* c = new Dog(*b);

	// std::cout << b << '\n' << c << '\n';
	// std::cout << b->getBrain() << std::endl;
	// std::cout << c->getBrain() << std::endl;
	// c->setBrain("New IDEA", 5);

	// b->printBrain();
	// c->printBrain();

	// delete b;
	// delete c;

	// return 0;
}

// int main()
// {
// 	Cat a;
// 	a.setBrain("aa", 2);
// }

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