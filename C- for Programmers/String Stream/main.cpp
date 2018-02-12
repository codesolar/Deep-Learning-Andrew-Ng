//
//  main.cpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/09.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include "main.hpp"

int main()
{
    string name1, address1, phone1, name2, address2, phone2;
    cout << "Please enter your name 1: ";
    getline(cin, name1);
    cout << "Please enter your address 1: ";
    getline(cin, address1);
    cout << "Please enter your phone 1: ";
    getline(cin, phone1);
    cout << "Please enter your name 2: ";
    getline(cin, name2);
    cout << "Please enter your address 2: ";
    getline(cin, address2);
    cout << "Please enter your phone 2: ";
    getline(cin, phone2);
    //Print the information to the console
    cout << name1 << endl << "\t\t" << address1 << "\n" << "\t\t" << phone1 << "\n";
    cout << name2 << endl << "\t\t" << address2 << "\n" << "\t\t" << phone2 << "\n";
    return 0;
}

