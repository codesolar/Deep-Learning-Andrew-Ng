//
//  1_Overloading.hpp
//  HelloWorld
//
//  Created by Nguyen Quang Tri on 2018/02/11.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
    
    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);
    
    int findSmaller(int arrayInt[], int size);
    float findSmaller(float arrayInF[], int size);
    char findSmaller(char arrayInC[], int size);
};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
int Compare::findSmaller(int input1, int input2, int input3)
{
    if(input1<input2){
        if(input1<input3)
            return input1;
        else
            return input3;
    }
    else{
        if(input2<input3)
            return input2;
        else
            return input3;
    }
}
float Compare::findSmaller(float input1, float input2, float input3)
{
    if(input1<input2){
        if(input1<input3)
            return input1;
        else
            return input3;
    }
    else{
        if(input2<input3)
            return input2;
        else
            return input3;
    }
}
char Compare::findSmaller(char input1, char input2, char input3)
{
    if(input1<input2){
        if(input1<input3)
            return input1;
        else
            return input3;
    }
    else{
        if(input2<input3)
            return input2;
        else
            return input3;
    }
}
int Compare::findSmaller(int arrayInt[], int size){
    int result = arrayInt[0];
    for(int i=0; i<size; i++){
        if(result>arrayInt[i])
            result = arrayInt[i];
    }
    return result;
}
float Compare::findSmaller(float arrayInF[], int size){
    float result = arrayInF[0];
    for(int i=0; i<size; i++){
        if(result>arrayInF[i])
            result = arrayInF[i];
    }
    return result;
}
char Compare::findSmaller(char arrayInC[], int size){
    char result = arrayInC[0];
    for(int i=0; i<size; i++){
        if(result>arrayInC[i])
            result = arrayInC[i];
    }
    return result;
}
