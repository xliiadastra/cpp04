#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* brain;

public:
    Cat();
    Cat(const Cat& src);
    Cat&    operator=(const Cat& src);
    ~Cat();

    void    makeSound(void) const;
    Brain*  getBrain();
    void    setBrain(std::string idea, unsigned int i);
    void    printBrain();
};

#endif
