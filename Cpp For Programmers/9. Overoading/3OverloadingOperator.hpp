//
//  3OverloadingOperator.hpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/11.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include <iostream>

using namespace std;

//TODO: Add all necessary functions and
//Overload the '+' sign
//To achieve the required total

class Shape
{
private:
    int length;     // Length of a box
    int width;
    
public:
    // Constructor definition
    Shape(int l = 2, int w = 2)
    {
        length = l;
        width = w;
    }
    
    double Area()
    {
        return length * width;
    }
    int operator + (Shape ShapeInput){
        return (length + ShapeInput.length) * (width + ShapeInput.width);
    }
};
