//
//  14.cpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/10.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//
#include <iostream>
#include<sstream>
using namespace std;
int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;
    cout<<"Enter an integer: ";
    cin>>givenInt;
    cout<<"Enter a float: ";
    cin>>givenFloat;
    cout<<"Enter a double: ";
    cin>>givenDouble;
    cin.ignore();
    cout<<"Enter a character: ";
    cin>>givenChar;
    cin.ignore();
    cout<<"Enter a string: ";
    getline(cin, givenString);
    cout<<"The value of integer: "<<givenInt<<endl;
    cout<<"The address of integer: "<<&givenInt<<endl;
    cout<<"The value of float: "<<givenFloat<<endl;
    cout<<"The address of float: "<<&givenFloat<<endl;
    cout<<"The value of double: "<<givenDouble<<endl;
    cout<<"The address of double: "<<&givenDouble<<endl;
    cout<<"The value of character: "<<givenChar<<endl;
    cout<<"The address of character: "<<&givenChar<<endl;
    cout<<"The value of string: "<<givenString<<endl;
    cout<<"The address of string: "<<&givenString<<endl;
    return 0;
}

