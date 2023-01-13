#include "Dog.hpp"

Dog::Dog()
{
        std::cout << "[Dog] default constructor called." << std::endl;
}

Dog::Dog(const Dog& src)
{
    std::cout << "[Dog] Copy constructor called." << std::endl;
    *this = src;
}

Dog&    Dog::operator=(const Dog& src)
{
    std::cout << "[Dog] Copy assignment operator called." << std::endl;
    this->type = src.type;
    return (*this);
}
Dog::~Dog()
{
    std::cout << "[Dog] Destructor called." << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "bow-wow~" << std::endl;    
}
