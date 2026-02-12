#include <cstdio>
#include <iostream>
#include <random>

int main() {
    // random number making code
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1,100);

    // random number is made and assigned here
    int randomNumber = dist(gen);
    int plrChoice = 0;
    int guesses = 0;

    std::cout<< "Guess a random number between 1 and 100\n";

    if (!(std::cin>>plrChoice)) {
        std::cout << "Enter only numbers";
        return 1;
    }

    while (!(plrChoice == randomNumber)){
        if (plrChoice > randomNumber){
            std::cout << "Your guess is too high\n";
            guesses += 1;
        }

        else if (plrChoice < randomNumber){
            std::cout << "Your guess is too low\n";
            guesses += 1;
        }

        std::cin >> plrChoice;
    }

    std::cout << "Your guess is correct\n";
    std::cout << "Guesses you made: " << guesses;
    return 0;
}
