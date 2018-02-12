//
//  ClassesProg2.hpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/11.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

/*Header file for main.cpp
 **Create a class called Cat.
 **Create the following members:
 **private members: name, breed, age
 **public members: setName, setBreed,setAge
 **getName, getBreed, getAge, printInfo*/

#include<iostream>
using namespace std;
class Cats{
    string name;
    string breed;
    int age;
public:
    void setName(string name);
    void setBreed(string breed);
    void setAge(int age);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};
void Cats::setName(string name){
    this->name=name;
}
void Cats::setBreed(string breed){
    this->breed=breed;
}
void Cats::setAge(int age){
    this->age=age;
}
string Cats::getName(){
    return name;
}
string Cats::getBreed(){
    return breed;
}
int Cats::getAge(){
    return age;
}
void Cats::printInfo(){
    cout<<name<<" "<<breed<<" "<<age<<endl;
}
