#include <iostream>

/* This program will be a game/text adventure with branches, 
multiple choices, and different endings which rely on user's choices */

int main() {

    std::cout << "Welcome to the great adventure in the world of magic!\n\n";
    std::cout << "*Please note: all your choices will affect which ending you will get...*\n\n\n";

    int getout; // Section: Player wakes up and chooses whether to get out of bed

    std::cout << "You woke up in the late morning in your house in a small medival village.\n";
    std::cout << "You hear some noice outside. Seems like the villagers are worried about something.\n\n";
    std::cout << "Should you get dresser and head out to check what's going on?\n Or just don't bother and keep sleeping?\n";

    std::cout << "1. Head out\n2. Keep sleeping\n Your choice: ";
    std::cin >> getout;

   
    if (getout != 1) {      //No matter what, the user will have to get out of the house
         for (int i = 0; i < 2; i++) {
        std::cout << "Wrong answer. Please try again: ";
        std::cin >> getout;
        }
        getout = 1;
        std::cout << "First of all, it's not like you really have much of a choice, you are the main character after all.\n";
        std::cout << "Second of all, stop being a lazy b*tch. You've got an adventure to venture (lol)\n";
    }

    std::cout << "\nYou quickly get dressed and head out of your house.\n";

    std::cout << "As you step outside, you see a small shiny object on the ground.\n";
    std::cout << "It's a gemstone, sparkling in the sunlight.\n";
    std::cout << "Do you want to pick it up?\n";
    std::cout << "1. Yes\n2. No\n Your choice: ";

    int pickgem;        // Section: Gemstone choice (may affect wizard interaction)
    std::cin >> pickgem; 

    if (pickgem == 1) {
        std::cout << "\nYou pick up the gemstone and put it in your pocket.\n";
        std::cout << "You feel a strange warmth emanating from it.\n";
        std::cout << "You decide to keep it, just in case it might be useful later.\n\n";
    } 
    else if (pickgem == 2) {
        std::cout << "\nYou decide to leave the gemstone where it is.\n";
        std::cout << "You feel a bit of regret, but also a sense of relief.\n";
        std::cout << "You don't want to get distracted from your adventure by some shiny object.\n\n";
    }
    else {
         for (int i = 0; i < 4; i++) {
            std::cout << "Wrong answer. Please try again: ";
            std::cin >> pickgem;
        }
        pickgem = 2;
        std::cout << "You decide to leave the gemstone where it is.\n";
        std::cout << "You feel a bit of regret, but also a sense of relief.\n";
        std::cout << "You don't want to get distracted from your adventure by some shiny object.\n\n";
    }

    std::cout << "You see a big crowd of villagers gathered around the village square.\n";
    std::cout << "You push through the crowd to see what's going on.\n";
    std::cout << "You see the village elder standing on a small podium, trying to calm the crowd.\n";
    std::cout << "You hear him say: \"Please, everyone, stay calm. We will figure this out together.\"\n";
    std::cout << "\"The goblins have been attacking travelers on the way out of the village.\"\n";
    std::cout << "\"We need someone to go and deal with them. Who will volunteer?\"\n\n";

    std::cout << "Will you volunteer to deal with the goblins?\n";
    std::cout << "1. Yes\n2. No\n Your choice: ";
    int volunteer;
    std::cin >> volunteer;      // Section: Volunteering to fight goblins (affects blacksmith interaction)

    if (volunteer == 1) {
        std::cout << "\nYou step forward and volunteer to deal with the goblins.\n";
        std::cout << "The village elder looks at you with a mix of relief and concern.\n";
        std::cout << "\"Thank you, brave soul,\" he says. \"May the gods be with you.\"\n";
        std::cout << "The crowd cheers and you feel a sense of pride and responsibility.\n";
    }
    else if (volunteer == 2) {
        std::cout << "\nYou just stand there, not volunteering, waiting to hear if someone would do it.\n";
        std::cout << "After a few moments of silence, the village elder notices you in the crowd.\n";
        std::cout << "\"Adventurer!\" he calls out. \"I completely missed you. Will you volunteer to deal with the goblins?\"\n";
        std::cout << "You feel a bit embarrassed, but also a sense of duty.\n";
        std::cout << "And since you already got attention of the village elder, you can't really back down now.\n";
        std::cout << "You step forward and volunteer to deal with the goblins.\n";
    }
    else {
         for (int i = 0; i < 2; i++) {
        std::cout << "Wrong answer. Please try again: ";
        std::cin >> volunteer;
        }
        volunteer = 2;
        std::cout << "\nYou just stand there, not volunteering, waiting to hear if someone would do it.\n";
        std::cout << "After a few moments of silence, the village elder notices you in the crowd.\n";
        std::cout << "\"Adventurer!\" he calls out. \"I completely missed you. Will you volunteer to deal with the goblins?\"\n";
        std::cout << "You feel a bit embarrassed, but also a sense of duty.\n";
        std::cout << "And since you already got attention of the village elder, you can't really back down now.\n";
        std::cout << "You step forward and volunteer to deal with the goblins.\n";
    }

    int prepare;

    std::cout << "But before heading out to deal with the goblins, you have to prepare.\n";
    std::cout << "You can either:\n";
    std::cout << "1. Visit the blacksmith to get a weapon.\n";
    std::cout << "2. Visit the wizard to get a grimoire.\n";
    std::cout << "3. Just head out without any preparation.\n";
    std::cout << "Your choice: ";
    std::cin >> prepare;

    bool prepared = false;   //will not go into the forest until prepared

    while (!prepared) {
    if (prepare == 1) {
        std::cout << "\nYou head to the blacksmith's shop.\n";
        std::cout << "The blacksmith greets you. He says he saw you hesitate in the village square.\n";
        std::cout << "\"I thought you were a hero...\" he says with a hint of disappointment look on his face.\n";
        std::cout << "But either way, he asks what can he do for you.\n";
        std::cout << "You explain the situation and ask for a weapon.\n";
        std::cout << "The blacksmith says his price. You look into your pockets and you are just a little bit short.\n\n";
        if (pickgem == 1) {     //additional interaction if the user picked up the gemstone
            std::cout << "You remember the gemstone you picked up earlier and showed it to him.\n";
            std::cout << "The blacksmith examines and says it has no value to him.\n";
            prepared = false;
        } else {
            continue;
        }
        
        std::cout << "Should you try to negotiate?\n";
        std::cout << "1. Yes\n2. No\n Your choice: ";
        int negotiate;
        std::cin >> negotiate;

        if (negotiate == 1) {
            if (volunteer == 2) {
                std::cout << "\nThe blacksmith looks at you with a raised eyebrow.\n";
                std::cout << "\"So you didn't volunteer to deal with the goblins, and not trying to negotiate my prices???\" he asks.\n";
                std::cout << "You feel a bit embarrassed and explain that you just wanted to make sure someone would do it.\n";
                std::cout << "The blacksmith doesn's seems to care much about your excuses and kicks you out of his shop.\n";

                std::cout << "What do you want to do next?\n";
                std::cout << "1. Visit the wizard\n2. Head out without anything\nYour choice: ";
                std::cin >> prepare;
                if (prepare == 1) prepare = 2;
                else if (prepare == 2) prepare = 3;
                else {
                     for (int i = 0; i < 2; i++) {
                    std::cout << "Wrong answer. Please try again: ";
                    std::cin >> prepare;
                    }
                    prepare = 3;
                }
                prepared = false;
                
            }
            else {
                std::cout << "\nThe blacksmith looks at you with a nod of respect.\n";
                std::cout << "\"Ah, a brave soul,\" he says. \"I can see that you are serious about dealing with the goblins.\"\n";
                std::cout << "\"Fine, I'll give you a discount.\n"; \" he says.\n";
                std::cout << "You thank him and leave the shop with a new weapon in hand.\n";
                prepared = true;
            }
        } else if (negotiate == 2) {
            std::cout << "\nYou decide not to negotiate with the blacksmith.\n";
            std::cout << "You thank him for his time and leave the shop.\n";
            std::cout << "You feel a bit disappointed, but also determined to face the goblins without a weapon.\n";

            std::cout << "What do you want to do next?\n";
                std::cout << "1. Visit the wizard\n2. Head out without anything\nYour choice: ";
                std::cin >> prepare;
                if (prepare == 1) prepare = 2;
                else if (prepare == 2) prepare = 3;
                else {
                     for (int i = 0; i < 2; i++) {
                    std::cout << "Wrong answer. Please try again: ";
                    std::cin >> prepare;
                    }
                    prepare = 3;
                }
                prepared = false;
        } else {
             for (int i = 0; i < 2; i++) {
            std::cout << "Wrong answer. Please try again: ";
            std::cin >> negotiate;
            }
            negotiate = 2;
            std::cout << "\nYou decide not to negotiate with the blacksmith.\n";
            std::cout << "You thank him for his time and leave the shop.\n";
            std::cout << "You feel a bit disappointed, but also determined to face the goblins.\n";
            
            std::cout << "What do you want to do next?\n";
                std::cout << "1. Visit the wizard\n2. Head out without anything\nYour choice: ";
                std::cin >> prepare;
                if (prepare == 1) prepare = 2;
                else if (prepare == 2) prepare = 3;
                else {
                     for (int i = 0; i < 2; i++) {
                    std::cout << "Wrong answer. Please try again: ";
                    std::cin >> prepare;
                    }
                    prepare = 3;
                }
                prepared = false;
        }
    } 
    else if (prepare == 2) {
        int grimoire = 0;
        std::cout << "\nYou head to the wizard's tower.\n";
        std::cout << "The wizard greets you and asks what you need.\n";
        std::cout << "You explain the situation and ask for a grimoire.\n";
        std::cout << "The wizard nods and hands you a grimoire filled with spells.\n";
        if (pickgem == 1) {     //additional interaction if the user picked up the gemstone
            std::cout << "But for a moment, the wizard seems to be distracted by something.\n";
            std::cout << "He notices the gemstone in your pocket and asks to see it.\n";
            std::cout << "You show it to him and he examines it closely.\n";
            std::cout << "He says it's a rare and powerful gemstone, capable of amplifying magical abilities.\n";
            std::cout << "He offers to enchant the grimoire with the gemstone's power, making it even more effective.\n";
            std::cout << "You gladly agree and hand over the gemstone.\n";
            grimoire = 2;
        }
        else {
            grimoire = 1;
        }
        std::cout << "\"This should help you against the goblins,\" he says.\n";
        std::cout << "You thank him and head out of the tower.\n";
        prepared = true;
    } 
    else if (prepare == 3) {
        std::cout << "\nYou decide to head out without any preparation.\n";
        std::cout << "You feel a bit nervous, but also excited for the adventure ahead.\n";
    } 
    else {
         for (int i = 0; i < 2; i++) {
        std::cout << "Wrong answer. Please try again: ";
        std::cin >> prepare;
        }
        prepare = 3;
        std::cout << "You decide to head out without any preparation (except mental).\n";
        std::cout << "You feel a bit nervous, but also excited for the adventure ahead.\n";
        prepared = true;
    }
    }
    std::cout << "\nYou head out of the village and into the forest.\n";
    std::cout << "After a few hours of walking, you hear some rustling in the bushes.\n";
    std::cout << "You see a group of goblins emerging from the bushes.\n";
    std::cout << "You take hide behind a tree and prepare to face them.\n";
    std::cout << "To be continued...\n";
}