//
// Created by Hunter on 12/18/2018.
//

#ifndef HELLOWORLD_HELLOMODULE_H
#define HELLOWORLD_HELLOMODULE_H

#endif //HELLOWORLD_HELLOMODULE_H
#include <string>
#include <iostream>

class helloModule{
    std::string word1;
    std::string word2;
public:
    void greet();
    helloModule();
    helloModule(std::string new1, std::string new2);
};