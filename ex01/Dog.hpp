#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* brain;

public:
    Dog();
    Dog(const Dog& src);
    Dog&    operator=(const Dog& src);
    ~Dog();

    void    makeSound(void) const;
    Brain*  getBrain();
    void    setBrain(std::string idea, unsigned int i);
    void    printBrain();
};

#endif
