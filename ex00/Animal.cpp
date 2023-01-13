#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "[Animal] default constructor called." << std::endl;
}

Animal::Animal(const Animal& src)
{
    std::cout << "[Animal] Copy constructor called." << std::endl;
    *this = src;
}

Animal& Animal::operator=(const Animal& src)
{
    std::cout << "[Animal] Copy assignment operator called." << std::endl;
    this->type = src.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "[Animal] Destructor called." << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << type << " sounds default Animal sound." << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
