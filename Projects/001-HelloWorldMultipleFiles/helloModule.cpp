//
// Created by Hunter on 12/18/2018.
//

#include "helloModule.h"

void helloModule::greet(){
    std::cout << word1 << " " << word2 << std::endl;
}

helloModule::helloModule(){
    word1 = "Hello";
    word2 = "World!";
}

helloModule::helloModule(std::string new1, std::string new2){
    word1 = new1;
    word2 = new2;
}