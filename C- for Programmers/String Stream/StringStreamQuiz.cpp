//
//  StringStreamQuiz.cpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/10.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string input;
    float length = 0;
    float width = 0;
    cout << "Please enter the length of a room: ";
    getline(cin, input);
    stringstream(input) >> length;
    cout << "Please enter the width of a room: ";
    getline(cin, input);
    stringstream(input) >> width;
    cout << "Area of the room: " << length * width << endl;
    return 0;
}

