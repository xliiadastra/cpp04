#include "Cat.hpp"
#include "Dog.hpp"

void check_leaks()
{
	system("leaks brain");
}

int main()
{
	atexit(check_leaks);
	const Animal* ani_dog = new Dog();
	const Animal* ani_cat = new Cat();
	delete ani_dog;//should not create a leak
	delete ani_cat;

	Animal* ani[4];
	std::cout << "-------------------------\nAnimal array create start\n\n";
	
	for (int idx = 0; idx < 4; ++idx)
	{
		if (idx < 2)
			ani[idx] = new Dog();
		else
			ani[idx] = new Cat();
	}
	std::cout << "-------------------------\nAnimal array assign done\n\n";
	
	for (int idx = 0; idx < 4; ++idx)
	{
		ani[idx]->makeSound();
		delete ani[idx];
	}
	std::cout << "-------------------------\nAnimal array delete done\n\n";
	
	Dog* dog_ = new Dog();
	dog_->setBrain("Dog's IDEA", 10);
	Dog* dogg_ = new Dog(*dog_);

	std::cout << dog_ << '\n' << dogg_ << '\n';
	std::cout << dog_->getBrain() << std::endl;
	std::cout << dogg_->getBrain() << std::endl;
	dogg_->setBrain("New IDEA", 5);

	dog_->printBrain();
	dogg_->printBrain();

	delete dog_;
	delete dogg_;

	return 0;
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