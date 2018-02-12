//
//  1_Inheritance.cpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/11.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include "1_Inheritance.hpp"
int main()
{
    Rose r1;
    r1.setBloomTime("spring");
    r1.setFragrance("strong");
    
    cout<<"r1 blooms in "<<r1.getBloomTime()<<", "<<r1.getFragrance();
    return 0;
}
