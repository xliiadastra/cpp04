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
    Animal(const Animal& src);
    Animal&   operator=(const Animal& src);
    virtual ~Animal();

    virtual void    makeSound(void) const = 0;
    std::string     getType() const;
};

#endif
