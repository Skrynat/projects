#include <iostream>

/* This program will be a game/text adventure with branches, 
multiple choices, and different endings which rely on user's choices */

int main() {

    std::cout << "Welcome to the great adventure in the world of magic!\n\n";
    std::cout << "*Please note: all your choices will affect which ending you will get...*\n\n\n";

    int getout;

    std::cout << "You woke up in the late morning in your house in a small medival village.\n";
    std::cout << "You hear some noice outside. Seems like the villagers are worried about something.\n\n";
    std::cout << "Should you get dresser and head out to check what's going on?\n Or just don't bother and keep sleeping?\n";

    std::cout << "1. Head out\n2. Keep sleeping\n Your choice: ";
    std::cin >> getout;

   
    if (getout != 1) {
         for (int i = 0; i < 2; i++) {
        std::cout << "Wrong answer. Please try again: ";
        std::cin >> getout;
    }
        getout = 1;
        std::cout << "First of all, it's not like you really have much of a choice, you are the main character after all.\n";
        std::cout << "Second of all, stop being a lazy b*tch. You've got an adventure to venture (lol)\n";
    }

}