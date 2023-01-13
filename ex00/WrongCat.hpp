#ifndef WRONGCat_HPP
# define WRONGCat_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat& src);
    WrongCat&    operator=(const WrongCat& src);
    ~WrongCat();
    void    makeSound(void) const;
};

#endif
