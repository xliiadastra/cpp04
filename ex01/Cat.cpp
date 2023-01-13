#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[Cat] constructor called." << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& src)
{
    std::cout << "[Cat] Copy constructor called." << std::endl;
    *this = src;
}

Cat&    Cat::operator=(const Cat& src)
{
    std::cout << "[Cat] Copy assignment operator called." << std::endl;
    if (this != &src)
    {
        if (this->brain)
            delete this->brain;
        this->type = src.type;
        this->brain = new Brain();
//        this->brain->setIdeas();
    }
    brain = new Brain(*src.brain);
    return (*this);
}
Cat::~Cat()
{
    std::cout << "[Cat] Destructor called." << std::endl;
    delete this;
}

void    Cat::makeSound(void) const
{
    std::cout << "mew-mew~" << std::endl;    
}

Brain*  Cat::getBrain()
{
    return (this->brain);
}

void    Cat::setBrain(std::string idea, unsigned int n)
{
    if (n > 100)
    {
        std::cout << "Number of Ideas cannot be more than 100" << std::endl;
        return ;
    }
    for (int i = 0; i < (int)n; i++)
        brain->setIdeas(idea, i);
}

void    Cat::printBrain()
{
}
