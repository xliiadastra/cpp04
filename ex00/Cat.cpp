#include "Cat.hpp"

Cat::Cat()
{
        std::cout << "[Cat] default constructor called." << std::endl;
}

Cat::Cat(const Cat& src)
{
    std::cout << "[Cat] Copy constructor called." << std::endl;
    *this = src;
}

Cat&    Cat::operator=(const Cat& src)
{
    std::cout << "[Cat] Copy assignment operator called." << std::endl;
    this->type = src.type;
    return (*this);
}
Cat::~Cat()
{
    std::cout << "[Cat] Destructor called." << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "mew-mew~" << std::endl;    
}
