//
//  3OverloadingOperator.cpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/11.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include "3OverloadingOperator.hpp"

int main(void)
{
    Shape sh1(4, 4);    // Declare shape1
    Shape sh2(2, 6);    // Declare shape2
    Shape sh3;          //Declare shape3
    
    int total = sh1 + sh2;
    cout << "\nsh1.Area() = " << sh1.Area();
    cout << "\nsh2.Area() = " << sh2.Area();
    cout << "\nTotal = "<<total;
    return 0;
}
