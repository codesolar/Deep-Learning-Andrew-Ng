//
//  2_MultipleInheritance.cpp
//  HelloWorld
//
//  Created by Nguyen QuangTri  on 2018/02/11.
//  Copyright © 2018 Tri Nguyen Quang. All rights reserved.
//

#include "2_MultipleInheritance.hpp"
int main()
{
    Pet p1;
    p1.setName("Kali");
    p1.setIdNumber(44444);
    p1.setBreed("Aussie");
    
    cout<<p1.getName()<<" "<<p1.getIdNumber()<<" "<<p1.getBreed();
    return 0;
}
