//
//  1_Vector.cpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/12.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include "1_Vector.hpp"
int main ()
{
    //TODO: instantiate vFloat vector
    std::vector<float> vFloat;
    std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";
    
    //Changing the size of vectorInts to 6
    vFloat.resize(6);
    std::cout<<"vFloat now has "<<vFloat.size()<<" elements\n";
    //TODO: Change the size of vFloat to 10 elements
    vFloat.resize(10);
    std::cout<<"vFloat now has "<<vFloat.size()<<" elements\n";
    
    return 0;
}
