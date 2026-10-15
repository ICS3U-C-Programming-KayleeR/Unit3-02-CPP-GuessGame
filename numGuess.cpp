// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 03,10,2026
// This program creates a game for
// the user to guess the ssecret number.It
// lets the user know if they are correct or not

#include <iostream>
int main() {
    // declare variables
    int userGuess, secretNum;

    // set the secret number
    secretNum = 7;
    // get the user's guess
    std::cout <<"Guess the secret number: ";
    std::cin >> userGuess;

    // check if the user is correct or not
    if (userGuess == secretNum) {
        std::cout <<"You have guessed correctly";
        }
    if (userGuess != secretNum) {
        std::cout <<"You have guessed incorrectly.";
        std::cout <<"The correct answer is " <<secretNum;
        }
}
