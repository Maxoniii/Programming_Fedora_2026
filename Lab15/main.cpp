#include <iostream>
#include "Spfere.hpp"
int main() {
    try{
        Spfere spfere(5.0f);
        std::cout<<"Spfere radius"<<spfere.getRad()<<std::endl;
        
    }
    catch(const std::invalid_argument& ex){
        std::cerr << ex.what()<<std::endl;
    }
    return 0;
}

