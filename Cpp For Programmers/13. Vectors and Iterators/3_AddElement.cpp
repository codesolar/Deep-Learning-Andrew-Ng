//
//  3_AddElement.cpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/12.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it
#include "3_AddElement.hpp"
int main ()
{
    vector<int> vInts;
    vInts.assign(10, 5);
    printVector(vInts);
    assignFunction(vInts, 1);
    pushBackFunction(vInts, 2);
    emplaceFunction(vInts,1, 3);
    
    return 0;
}
