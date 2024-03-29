//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Nguyen Quang Tri on 2018/06/09.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include "FBullCowGame.hpp"
#include <map>
#define TMap std::map

using FString = std::string;
using int32 = int;

FBullCowGame::FBullCowGame() { Reset(); }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
int32 FBullCowGame::GetHiddenWordLength() const { return MyHiddenWord.length(); }
bool FBullCowGame::IsGameWon() const{ return bGameIsWon; }

int32 FBullCowGame::GetMaxTries() const{
    TMap<int32, int32> WordLengthToMaxTries{ {3, 4}, {4, 4}, {5, 10}, {6, 16}, {7, 20} };
    return WordLengthToMaxTries[MyHiddenWord.length()];
}

void FBullCowGame::Reset() {
    const FString HIDDEN_WORD = "planet";
    
    MyHiddenWord = HIDDEN_WORD;
    MyCurrentTry = 1;
    bGameIsWon = false;
    return;
}

EGuessStatus FBullCowGame::CheckGuessValidity(FString Guess) const{
    if(!IsIsogram(Guess)){ // if the guess isn't an isogram
        return EGuessStatus::Not_Isogram;
    }else if(!IsLowercase(Guess)){ // if the guess isn't all lowercase
        return EGuessStatus::Not_Lowercase; // if the guess isn't all lowercase
    }else if(Guess.length() != GetHiddenWordLength()){
        return EGuessStatus::Wrong_Length; // if the guess length is wrong
    }else{
        return EGuessStatus::OK;
    }
}

// receives a VALID guess, increments turns and returns count
FBullCowCount FBullCowGame::SubmitValidGuess(FString Guess) {
    // increase the turn number
    MyCurrentTry++;
    
    // setup a return variable
    FBullCowCount BullCowCount;
    
    // loop through all letters in the guess
    int32 WordLength = MyHiddenWord.length(); // assuming same length as guess
    for(int32 MHWChar = 0; MHWChar < WordLength; MHWChar++){
        // compare letters against the hidden word
        for(int32 GChar = 0; GChar < WordLength; GChar++){
            // if they match then
            if (Guess[GChar] == MyHiddenWord[MHWChar]){
                if (MHWChar == GChar){ // if they're in the same place
                        BullCowCount.Bulls++; // increase bulls
                    }else{
                        BullCowCount.Cows++; // must be a cow
                    }
                }
            }
        }
    if (BullCowCount.Bulls == WordLength){
        bGameIsWon = true;
    }else{
        bGameIsWon = false;
    }
    return BullCowCount;
}

bool FBullCowGame::IsIsogram(FString Word) const {
    // treat 0 and 1 letter words as isograms
    if (Word.length() <= 1) { return true; }
    
    TMap<char, bool> LetterSeen;    // setup our map
    for(auto Letter : Word){        // for all letter in the map
        Letter = tolower(Letter);   // handle mixed case
        if(LetterSeen[Letter]){     // if the letter is in the map
            return false;
        }else{
            LetterSeen[Letter] = true;
        }
        
    }
    
    return true;
}

bool FBullCowGame::IsLowercase(FString Word) const {
    for (auto Letter : Word){
        if(!islower(Letter)){   // if not a lowercase letter
            return false;
        }
    }
    return true;
}
















