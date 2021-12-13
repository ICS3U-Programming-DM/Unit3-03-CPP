// Copyright © 2021 Dylan Melo All rights reserved
//
// Created by Dylan Melo
// Created on December 2021
// This program gets the user to guess a number
// between 0 and 9 and tells them if it's correct.
#include <iostream>

#include <random>

int main() {
    
    // this is to check the user's number.
    int someRandomNumber;
    float userNumber;

    // Get input from user
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> userNumber;
    std::cout << "" << std::endl;
    
    std::random_device rseed;

    std::mt19937 rgen(rseed());

    std::uniform_int_distribution<int> idist(0,9); 

    someRandomNumber = idist(rgen);

    std::cout << someRandomNumber << std::endl;
  
    // process
    if (userNumber == someRandomNumber) {
        // output
        std::cout << "You've guessed correctly";
    } else if (userNumber >= 10) {
        std::cout << "You Number must be between 0 and 9 silly";
        // output
    } else if (userNumber <=-1) {
        std::cout << "You Number must be between 0 and 9 silly";
    }  else {
        // output
        std::cout << "You've guessed incorrectly";
    }
}
