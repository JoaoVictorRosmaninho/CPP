#ifndef BRAIN_HPP
#define BRAIN_HPP

#define SIZE_OF_IDEAS 100

#include <string>
#include <iostream>


class Brain {
    public:
        Brain( void );
        Brain( Brain const& other);
        Brain( Brain* other);
        ~Brain( void );
        Brain& operator = (Brain const& other);

        std::string  getIdea(unsigned char position) const;
        bool         setIdeia(unsigned char position, std::string ideia);
        std::string* getIdeas( void ) const;

    private:
        std::string* ideas;
 };

#endif