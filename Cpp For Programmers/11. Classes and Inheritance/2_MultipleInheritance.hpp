//
//  2_MultipleInheritance.hpp
//  HelloWorld
//
//  Created by Nguyen QuangTri  on 2018/02/11.
//  Copyright © 2018 Tri Nguyen Quang. All rights reserved.
//

//header file for main.cpp
/*TODO:
 *-  create a class called Pet
 *- it inherits from both the class Patient
 *- and the class Dog
 *- Pet has one private member: name
 *- Pet has public getName and setName functions.
 */
#include<iostream>
#include<string>
using namespace std;
class Patient
{
private:
    int idNumber;
public:
    void setIdNumber(int idIn);
    int getIdNumber();
};

void Patient::setIdNumber(int idIn)
{
    idNumber = idIn;
}

int Patient::getIdNumber()
{
    return idNumber;
}

class Dog
{
private:
    string breed;
public:
    void setBreed(string breedIn);
    string getBreed();
};

void Dog::setBreed(string breedIn)
{
    breed = breedIn;
}

string Dog::getBreed()
{
    return breed;
}
class Pet : public Patient, public Dog{
private:
    string name;
public:
    void setName(string nameIn);
    string getName();
};
void Pet::setName(string nameIn){
    this->name=nameIn;
}
string Pet::getName(){
    return name;
}
