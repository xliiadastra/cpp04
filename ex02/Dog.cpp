#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "[Dog] constructor called." << std::endl;
    this->type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& src)
{
    std::cout << "[Dog] Copy constructor called." << std::endl;
    *this = src;
}

Dog&    Dog::operator=(const Dog& src)
{
    std::cout << "[Dog] Copy assignment operator called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain(*src.brain);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "[Dog] Destructor called." << std::endl;
    delete this->brain;
}

void    Dog::makeSound(void) const
{
    std::cout << "bow-wow~" << std::endl;
}

Brain*  Dog::getBrain()
{
    return (this->brain);
}

void    Dog::setBrain(std::string idea, unsigned int n)
{
    if (n > 100)
    {
        std::cout << "Number of Ideas cannot be more than 100" << std::endl;
        return ;
    }
    for (unsigned int i = 0; i < n; i++)
        brain->setIdeas(idea, i);

}

void    Dog::printBrain()
{
    std::cout << "   * Print Brain Start *   " << std::endl;
    for (unsigned int i = 0; i < 100; i++)
    {
        if (brain->getIdeas(i) != "")
            std::cout << brain->getIdeas(i) << std::endl;
    }
    std::cout << "   * Print Brain End *   " << std::endl;
}
