//
//  Stringstream.cpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/10.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

int main ()
{
    std::string stringLength;
    float inches = 0;
    float yardage = 0;
    
    std::cout << "Enter number of inches: ";
    std::getline (std::cin,stringLength);
    std::stringstream(stringLength) >> inches;
    std::cout<<"You entered "<<inches<<"\n";
    yardage = inches/36;
    std::cout << "Yardage is " << yardage << "\n";
    return 0;
}

