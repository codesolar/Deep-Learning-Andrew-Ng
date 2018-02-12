//
//  2OverloadingConstructors.hpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/11.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

//header file

/*Create a class that has four constructors:
 * one that accepts no input parameters
 * one that accepts name
 * one that accepts license number
 * one that accepts name and license number
 * The default values are:
 name = NA
 license = 0
 */

#include<iostream>
#include<string>
using namespace std;
class Dog{
    string name;
    int license;
public:
    Dog();
    Dog(string name);
    Dog(int license);
    Dog(string name, int license);
    void setName(string name);
    void setLicense(int license);
    string getName();
    int getLicense();
};
void Dog::setName(string name){
    this->name=name;
}
void Dog::setLicense(int license){
    this->license=license;
}
string Dog::getName(){
    return name;
}
int Dog::getLicense(){
    return license;
}
Dog::Dog(){
    setName("NA");
    setLicense(0);
}
Dog::Dog(string name){
    setName(name);
    setLicense(0);
}
Dog::Dog(int license){
    setName("NA");
    setLicense(license);
}
Dog::Dog(string name, int license){
    setName(name);
    setLicense(license);
}
