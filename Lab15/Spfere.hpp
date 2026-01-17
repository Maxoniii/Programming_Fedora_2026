#pragma once 



class Spfere{
public:
    Spfere(float rad);
            
    float poverh() const;
    float v() const;

    void setRad(float rad);
    int getRad()const;

private:
    bool IsRadValid(float rad) const;
    float rad_; 
};