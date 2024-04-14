#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iomanip>
# include "input.hpp"

class Contact {
    private:
        std::string  name;
        std::string  last_name;
        std::string  nickname;
        std::string  phone_number;
        std::string  darkest_secret;
        unsigned int index;

        std::string format(std::string text);

    public:
        
        Contact();
        ~Contact();
        
        void initialize(short int index);
        void show();
        void show_sumarize(void);
        std::string to_string();
};

#endif