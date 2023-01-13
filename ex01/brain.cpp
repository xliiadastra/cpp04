#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "[Brain] default constructor called." << std::endl;
}

Brain::Brain(const Brain& src)
{
    std::cout << "[Brain] Copy constructor called." << std::endl;
    *this = src;
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "[Brain] Copy assignment operator called." << std::endl;
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.getIdeas(i);
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "[Brain] Destructor called." << std::endl;
}

std::string Brain::getIdeas(unsigned int i) const
{
    if (i > 100)
        return ("");
    return (this->ideas[i]);
}

void    Brain::setIdeas(std::string idea, unsigned int i)
{
    if (i > 100)
        return ;
    this->ideas[i] = idea;
}
