//
//  2_VectorAndIterator.hpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/12.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<float> vIn);

void printVector(vector<float> vIn)
{//printing the contents of vIns
    //TODO: Complete the function
    vector<float>::iterator it;
    for(it = vIn.begin(); it != vIn.end(); it++)
        cout<<*it<<" ";
}
