//
//  ClassesProgramming.cpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/11.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include "ClassesProgramming.hpp"
int main()
{
    Dog dog1, dog2;
    dog1.setName("Trixie");
    dog1.setLicenseNumber(1234);
    dog2.setName("Kali");
    dog2.setLicenseNumber(5678);
    dog1.printInfo();
    dog2.printInfo();
    return 0;
}
