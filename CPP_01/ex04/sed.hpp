/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:21:45 by jv                #+#    #+#             */
/*   Updated: 2024/04/15 20:10:18 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
#define SED_H

#include <string>
#include <fstream>
#include <iostream>

class Sed {
    public:

    Sed(const std::string& path, const std::string& s1, const std::string& s2);
    ~Sed();

    void execute(void);

    private:
        std::fstream file;
        const std::string&  from;
        const std::string&  to;
    
};

#endif