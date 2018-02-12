//
//  1_Inheritance.hpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/11.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Flower
{
private:
    string bloomTime;
public:
    Flower();
    void setBloomTime(string bloomIn);
    string getBloomTime();
};
Flower::Flower()
{
    setBloomTime("NA");
}

void Flower::setBloomTime(string bloomIn)
{
    this->bloomTime=bloomIn;
}

string Flower::getBloomTime()
{
    return bloomTime;
}

//TODO: Complete the class called Rose
//It is derived from the class Flower
class Rose : public Flower
{
private:
    string fragrance;
public:
    Rose();
    void setFragrance(string fragIn);
    string getFragrance();
};

Rose::Rose()
{
    setFragrance("NA");
}

void Rose::setFragrance(string fragIn)
{
    this->fragrance=fragIn;
}

string Rose::getFragrance()
{
    return fragrance;
}

