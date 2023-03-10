#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[Cat] constructor called." << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& src)
{
    this->brain = NULL;
    std::cout << "[Cat] Copy constructor called." << std::endl;
    *this = src;
}

Cat&    Cat::operator=(const Cat& src)
{
    std::cout << "[Cat] Copy assignment operator called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*src.brain);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "[Cat] Destructor called." << std::endl;
    delete this->brain;
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
    for (unsigned int i = 0; i < n; i++)
        brain->setIdeas(idea, i);
}

void    Cat::printBrain()
{
    std::cout << "   * Print Brain Start *   " << std::endl;
    for (unsigned int i = 0; i < 100; i++)
    {
        if (brain->getIdeas(i) != "")
            std::cout << brain->getIdeas(i) << std::endl;
    }
    std::cout << "   * Print Brain End *   " << std::endl;
}
