#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain& src);
    Brain&  operator=(const Brain& src);
    ~Brain();

    std::string getIdeas(unsigned int i) const;
    void        setIdeas(std::string idea, unsigned int i);
};


#endif