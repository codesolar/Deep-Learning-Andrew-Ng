//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Nguyen Quang Tri on 2018/06/09.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount{
    int32 Bulls = 0;
    int32 Cows = 0;
};

enum class EGuessStatus{
    Invalid_Status,
    OK,
    Not_Isogram,
    Wrong_Length,
    Not_Lowercase
};

class FBullCowGame{
public:
    FBullCowGame(); // constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;
    bool IsGameWon() const;
    EGuessStatus CheckGuessValidity(FString) const; // TODO: make a more rich return value.
    
    void Reset(); // TODO: make a more rich return value.
    
    // provide a method for counting bulls and cows, and increasing turn #
    FBullCowCount SubmitValidGuess(FString);
    
private:
    // see constructor for initialization
    int32 MyCurrentTry;
    FString MyHiddenWord;
    bool bGameIsWon;
    
    bool IsIsogram(FString) const;
    bool IsLowercase(FString) const;
};
#endif /* FBullCowGame_hpp */
























