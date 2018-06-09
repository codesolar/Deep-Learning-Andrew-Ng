//
//  main.cpp
//  BullCowGame
//
//  Created by Nguyen Quang Tri on 2018/06/07.
//  Copyright © 2018 Nguyen Quang Tri. All rights reserved.
//

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

using FText = std::string;
using int32 = int;

void PrintIntro();
FText GetValidGuess();
void PlayGame();
bool AskToPlayAgain();
void PrintGameSummary();

FBullCowGame BCGame; // instantiate a new game

int main(int32 argc, const char * argv[]) {
    do{
        PrintIntro();
        PlayGame();
    }while (AskToPlayAgain());
    return 0;
}
void PrintIntro(){
    // introduce the game
    std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
    std::cout << "Can you guess the " << BCGame.GetHiddenWordLength() << " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
    return;
}

// loop continually until the user gives a valid guess
FText GetValidGuess(){ // TODO change to GetValidGuess
    FText Guess = "";
    EGuessStatus Status = EGuessStatus::Invalid_Status;
    do{
        // get a guess from the player
        int32 CurrentTry = BCGame.GetCurrentTry();
        
        std::cout << "Try " << CurrentTry << " of " <<  BCGame.GetMaxTries();
        std::cout << ". Enter your Guess: ";
        
        std::getline(std::cin, Guess);
        
        Status = BCGame.CheckGuessValidity(Guess);
        switch (Status) {
            case EGuessStatus::Wrong_Length:
                std::cout << "Please enter a " << BCGame.GetHiddenWordLength() << " letter word.\n";
                break;
            case EGuessStatus::Not_Isogram:
                std::cout << "Please enter a word without repeating letters.\n";
                break;
            case EGuessStatus::Not_Lowercase:
                std::cout << "Please enter all lowercase letters.\n";
                break;
            default:
                break;
        }
        std::cout << std::endl;
    }while (Status != EGuessStatus::OK); // keep looping until we get no error
    return Guess;
}
void PlayGame() {
    BCGame.Reset();
    int32 MaxTries = BCGame.GetMaxTries();
    
    // loop asking for guesses while the game is NOT won
    // and there are still tries remaining
    
    while(!BCGame.IsGameWon() && BCGame.GetCurrentTry() <= MaxTries){ // TODO change from FOR to WHILE
        FText Guess = GetValidGuess();
        
        // submit valid guess to the game
        FBullCowCount BullCowCount = BCGame.SubmitValidGuess(Guess);
        // print number of bulls and cows
        std::cout << "Bulls = " << BullCowCount.Bulls;
        std::cout << ". Cows = " << BullCowCount.Cows << std::endl;
        
        // repeat the guess back to them
        std::cout << "Your Guess was: " << Guess << "\n\n";
    }
    
    // TODO: summarize the game
    PrintGameSummary();
    return;
}
bool AskToPlayAgain(){
    std::cout << "Do you want to play game with the same hidden word again (y/n)? ";
    FText Response = "";
    getline(std::cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}
void PrintGameSummary(){
    if (BCGame.IsGameWon()){
        std::cout << "WELL DONE - YOU WIN!\n";
    }else{
        std::cout << "Better luck next time!\n";
    }
}
























