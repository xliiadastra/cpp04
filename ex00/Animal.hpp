#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(std::string type);
    Animal(const Animal& src);
    Animal&   operator=(const Animal& src);
    ~Animal();
    void    makeSound(void);
};

#endif