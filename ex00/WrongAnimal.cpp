#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "[WrongAnimal] default constructor called." << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
    std::cout << "[WrongAnimal] Copy constructor called." << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
    std::cout << "[WrongAnimal] Copy assignment operator called." << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[WrongAnimal] Destructor called." << std::endl;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << type <<  " sounds default WrongAnimal sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
