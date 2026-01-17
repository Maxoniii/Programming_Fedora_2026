#include "Spfere.hpp"
#include <iostream>
#include <exception>



Spfere::Spfere(float rad){
    IsRadValid(rad);
    setRad(rad);
}



void Spfere::setRad(float rad){
    if(!IsRadValid(rad)){
        throw std::invalid_argument("Rad must be positive");
    }
    rad_=rad;
}



int Spfere::getRad()const{
    return rad_;
}

bool Spfere::IsRadValid(float rad) const{
    return rad>0;
}

float Spfere::poverh()const{
    return 4.0f * 3.14*rad_*rad_;
}

float Spfere::v()const{
    return (4.0f/3.0f) * 3.14 * rad_*rad_;

}
