#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <limits>

/* This program will be a game/text adventure with branches, 
multiple choices, and different endings which rely on user's choices */

void waitForEnter () {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "\nThank you for playing! <3\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

void duelOutcome() {
    std::cout << "\nYou offer a fair and square duel to the goblin leader. If you win, they leave the village alone. If you lose, they're free to do whatever they want.\n";
    std::this_thread::sleep_for(std::chrono::seconds(4));
    std::cout << "The goblin leader looks at you with a mix of amusement and respect.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "\"You are brave, human,\" he says. \"Let's do it.\"\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "The duel is fierce and intense, the battle goes eye to eye.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Despite the opponent being like 3 times your size, you manage to keep up with him, using your agility and quick thinking to outmaneuver him.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "But unfortunately, one of the goblins manages to sneak up behind one of the bushes, and shoots you from behind with a crossbow.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "You fall to the ground, injured and exhausted.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "The gemstone falls out of your pocket and the goblin leader picks it up.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "\"You fought well, human,\" he says. \"But in the end, you lost.\"\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You ask him to at least spare your life, but he just laughs.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "\"Life is cheap, human,\" he says, and drops the gemstone to the ground.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "He takes a moment to swing his mace at your head, before ending your life...\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "The village elder and the villagers were wondering where you were for a long time.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "When you didn't return, they assumed the worst.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "They send a search party, and they eventually found your body with the gemstone next to it.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "The village used the gemstone to fund a small militia to protect the village from future goblin attacks.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "You are remembered as a brave soul who fought valiantly against the goblins, but also as a cautionary tale about the dangers of pride and overconfidence.\n";
    std::this_thread::sleep_for(std::chrono::seconds(4));
    std::cout << "The village elder holds a small ceremony in your honor. The villagers still were resisting the goblin attacks.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "*Tragic Heroic Ending*\n";
    waitForEnter();
}

void cowardlyEnding() {
    std::cout << "\nYou decide to go back to the village.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You make your way back to the village, where you were treated as a disgrace for running away from the goblins.\n";
    std::this_thread::sleep_for(std::chrono::seconds(4));
    std::cout << "The villages made a decision to not trust you with any important tasks anymore.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You live the rest of your life in shame, knowing that you could have done more.\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "*Cowardly Ending*\n";
    waitForEnter();
}

void apprenticeTragicEnding() {
    std::cout << "\nYou decide to refuse the dark mage's offer.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "The dark mage looks at you with a mix of disappointment and anger.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "\"Very well,\" he says.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "For a moment, you feel that something is wrong.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Before you can react, an earth spike is already penetrating your chest, and you fall to the ground, cold and lifeless...\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "You are remembered as a brave soul who fought valiantly against the goblins, but also as a cautionary tale about the dangers of pride and overconfidence.\n";
    std::this_thread::sleep_for(std::chrono::seconds(4));
    std::cout << "The village elder holds a small ceremony in your honor before leaving the village for the last time.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "*Tragic Heroic Ending*\n";
    waitForEnter();
}

void noGemstone() {
    std::cout << "\nYou decide to leave the gemstone where it is.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You feel a bit of regret, but also a sense of relief.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You don't want to get distracted from your adventure by some shiny object.\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(2)); 
}

void notVolunteering() {
    std::cout << "\nYou just stand there, not volunteering, waiting to hear if someone would do it.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "After a few moments of silence, the village elder notices you in the crowd.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "\"Adventurer!\" he calls out. \"I completely missed you. Will you volunteer to deal with the goblins?\"\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You feel a bit embarrassed, but also a sense of duty.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "And since you already got attention of the village elder, you can't really back down now.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You step forward and volunteer to deal with the goblins.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
}

void dontNegotiate() {
    std::cout << "\nYou decide not to negotiate with the blacksmith.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You thank him for his time and leave the shop.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You feel a bit disappointed, but also determined to face the goblins.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
}

void failedBlacksmith() {
    std::cout << "What do you want to do next?\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "1. Visit the wizard\n2. Head out without anything\nYour choice: ";
}

bool notPrepared() {
    std::cout << "You decide to head out without any preparation (except mental).\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You feel a bit nervous, but also excited for the adventure ahead.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    return true;
}

void noTrap() {
    std::cout << "You decide not to set a trap for the goblins.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You feel a bit nervous, but also determined to face the goblins head on.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
}


int main() {

    std::cout << "\n\nWelcome to the great adventure in the world of magic!\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "*Please note: all your choices will affect which ending you will get...*\n";
    std::cout << "Also this is my first C++ project, so please be kind :)\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(4)); // Pause for 4 second
    std::cout << "Let's begin!\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));

    int getout; // Section: Player wakes up and chooses whether to get out of bed

    std::cout << "You woke up in the late morning in your house in a small medieval village.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3)); // Pause for 3 second
    std::cout << "It was a beautiful autumn late morning, with colorful orange leaves falling from the trees.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3)); // Pause for 3 second
    std::cout << "You hear some noise outside. Seems like the villagers are worried about something.\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Should you get dressed and head out to check what's going on?\nOr just don't bother and keep sleeping?\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "1. Head out\n2. Keep sleeping\n Your choice: ";
    std::cin >> getout;

   
    if (getout != 1) {      //No matter what, the user will have to get out of the house
         for (int i = 0; i < 2; i++) {
        std::cout << "Wrong answer. Please try again: ";
        std::cin >> getout;
        }
        getout = 1;
        std::cout << "First of all, it's not like you really have much of a choice, you are the main character after all.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "Second of all, stop being a lazy b*tch. You've got an adventure to venture (lol)\n";
        std::this_thread::sleep_for(std::chrono::seconds(4));
    }

    std::cout << "\nYou quickly get dressed and head out of your house.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "As you step outside, you see a small shiny object on the ground.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "It's a gemstone, sparkling in the sunlight.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Do you want to pick it up?\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "1. Yes\n2. No\n Your choice: ";

    int grimoire = 0;      // Section: Whether the user has a grimoire or not (affects wizard interaction)
    int pickgem;        // Section: Gemstone choice (may affect wizard interaction)
    std::cin >> pickgem; 

    if (pickgem == 1) {
        std::cout << "\nYou pick up the gemstone and put it in your pocket.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "You feel a strange warmth emanating from it.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "You decide to keep it, just in case it might be useful later.\n\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
    } 
    else if (pickgem == 2) {
        noGemstone();
    }
    else {
         for (int i = 0; i < 4; i++) {
            std::cout << "Wrong answer. Please try again: ";
            std::cin >> pickgem;
        }
        pickgem = 2;
        noGemstone();
    }

    std::cout << "You see a big crowd of villagers gathered around the village square.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You push through the crowd to see what's going on.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You see the village elder standing on a small podium, trying to calm the crowd.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You hear him say: \"Please, everyone, stay calm. We will figure this out together.\"\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "\"The goblins have been attacking travelers on the way out of the village.\"\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "\"We need someone to go and deal with them. Who will volunteer?\"\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "Will you volunteer to deal with the goblins?\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "1. Yes\n2. No\n Your choice: ";
    int volunteer;
    std::cin >> volunteer;      // Section: Volunteering to fight goblins (affects blacksmith interaction)

    if (volunteer == 1) {
        std::cout << "\nYou step forward and volunteer to deal with the goblins.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "The village elder looks at you with a mix of relief and concern.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "\"Thank you, brave soul,\" he says. \"May the gods be with you.\"\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "The crowd cheers and you feel a sense of pride and responsibility.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    else if (volunteer == 2) {
        notVolunteering();
    }
    else {
         for (int i = 0; i < 2; i++) {
        std::cout << "Wrong answer. Please try again: ";
        std::cin >> volunteer;
        }
        volunteer = 2;
        notVolunteering();
    }

    int prepare;

    std::cout << "But before heading out to deal with the goblins, you have to prepare.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You can either:\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "1. Visit the blacksmith to get a weapon.\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "2. Visit the wizard to get a grimoire.\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "3. Just head out without any preparation.\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Your choice: ";
    std::cin >> prepare;

    bool prepared = false;   //will not go into the forest until prepared

    while (!prepared) {
    if (prepare == 1) {
        std::cout << "\nYou head to the blacksmith's shop.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "The blacksmith greets you. He says he saw you hesitate in the village square.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "\"I thought you were a hero...\" he says with a hint of disappointment look on his face.\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        std::cout << "But either way, he asks what can he do for you.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "You explain the situation and ask for a weapon.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "The blacksmith says his price. You look into your pockets and you are just a little bit short.\n\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        if (pickgem == 1) {     //additional interaction if the user picked up the gemstone
            std::cout << "You remember the gemstone you picked up earlier and showed it to him.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "The blacksmith examines and says it has no value to him.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            prepared = false;
        } else {
            continue;
        }
        
        std::cout << "Should you try to negotiate?\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "1. Yes\n2. No\n Your choice: ";
        int negotiate;
        std::cin >> negotiate;

        if (negotiate == 1) {
            if (volunteer == 2) {
                std::cout << "\nThe blacksmith looks at you with a raised eyebrow.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "\"So you didn't volunteer to deal with the goblins, and not trying to negotiate my prices???\" he asks.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "You feel a bit embarrassed and explain that you just wanted to make sure someone would do it.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "The blacksmith doesn's seems to care much about your excuses and kicks you out of his shop.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                failedBlacksmith();
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
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "\"Ah, a brave soul,\" he says. \"I can see that you are serious about dealing with the goblins.\"\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "\"Fine, I'll give you a discount\" he says.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "You thank him and leave the shop with a new weapon in hand.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                prepared = true;
            }
        } else if (negotiate == 2) {
            dontNegotiate();
            failedBlacksmith();
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
            dontNegotiate();
            failedBlacksmith();
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
        std::cout << "\nYou head to the wizard's tower.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "The wizard greets you and asks what you need.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "You explain the situation and ask for a grimoire.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "The wizard nods and hands you a grimoire filled with spells.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        if (pickgem == 1) {     //additional interaction if the user picked up the gemstone
            std::cout << "But for a moment, the wizard seems to be distracted by something.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "He notices the gemstone in your pocket and asks to see it.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "You show it to him and he examines it closely.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "He says it's a rare and powerful gemstone, capable of amplifying magical abilities.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "He offers to enchant the grimoire with the gemstone's power, making it even more effective.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "You gladly agree and hand over the gemstone.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "*Gemstone used for enchantment*\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            pickgem = 0; //the user no longer has the gemstone
            grimoire = 2;
        }
        else {
            grimoire = 1;
        }
        std::cout << "\"This should help you against the goblins,\" he says.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "You thank him and head out of the tower.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "*Grimoire Acquired*\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        prepared = true;
    } 
    else if (prepare == 3) {
      prepared = notPrepared();
    } 
    else {
        for (int i = 0; i < 2; i++) {
            std::cout << "Wrong answer. Please try again: ";
            std::cin >> prepare;
        }
        prepare = 3;
        prepared = notPrepared();
    }
    }

    std::cout << "\nYou head out of the village and into the forest.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Half way through the forest, a thought crosses your mind.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You wonder if you should have prepared more.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Would you like to set a trap for the goblins?\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "1. Yes\n2. No\n Your choice: ";
    int trap;
    std::cin >> trap;   // Section: Setting a trap for goblins (affects the difficulty of some of the fights)
    if (trap == 1) {
        std::cout << "\nYou decide to set a trap for the goblins.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "You dig a shallow pit and line the bottom with sharp wooden spikes.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "You cover the pit with leaves and branches, making it look like solid ground.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "You feel a bit more confident knowing that you have a backup plan.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
    } 
    else if (trap == 2) {
        noTrap();
    }
    else {
         for (int i = 0; i < 2; i++) {
        std::cout << "Wrong answer. Please try again: ";
        std::cin >> trap;
        }
        trap = 2;
        noTrap();
    }


    std::cout << "After a few hours of walking, you hear some rustling in the bushes.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You see a group of goblins emerging from the bushes.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "You take hide behind a tree and prepare to face them.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));

    bool repeatCheckpoint = true; //to repeat the checkpoint if the user wants to try something else

    switch (prepare) {
        case 1:
            std::cout << "With your new weapon in hand, you feel confident and ready to face the goblins.\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));
            std::cout << "You step out from behind the tree and charge at the goblins, shouting a battle cry.\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));
            std::cout << "The goblins are caught off guard and you manage to take down a few of them before they can react.\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));
            while (repeatCheckpoint) {
            std::cout << "The rest of the goblins quickly regroup.\nWhat do you do next?\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "1. Continue fighting\n2. Try to intimidate them\n3. Run and try to come up with a plan B while escaping the goblins.\n Your choice: ";
            int swordchoice;
            std::cin >> swordchoice;    // Section: Multiple choices of the blacksmith path (affects the ending)
            if (swordchoice == 1) {
                if (trap == 1) {
                    std::cout << "\nAs you are filled with confidence, you continue fighting the goblins, using your weapon to take them down one by one.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "The goblins are fierce and relentless, but you manage to hold your ground.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "At one point, you get injured, which decreases your fighting capabilities.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "However, you remember the pit trap you set earlier and decide to run for it.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "You lead the goblins towards the pit trap and several of them fall into the pit and are impaled by the spikes at the bottom.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "The remaining goblins weren't intimidated by the trap. Their attention was still on you.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "Since there were only a few of them left, you manage to take them down and stand victorious...\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery and cunning.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "*Heroic Ending*\n";
                    waitForEnter();
                } 
                else {
                    std::cout << "\nYou continue fighting the goblins, using your weapon to take them down one by one.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "The goblins are fierce and relentless, but you manage to hold your ground.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "At one point, you get injured, which decreases your fighting capabilities.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "As you understand that you can't keep this up forever, you decide to flee.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "You run as fast as you can, but the injury slows you down. You lost too much blood.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "The goblins were quickly catch up to you and the distance between you and them was quickly closing in.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "By some interesting twist of fate, as you run, you see a random adventurer in a black cloan in front of you.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "The mysterious mage quickly casts a meteor spell, which lands right in the middle of the goblin group, instantly incinerating them all.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "As he was casting the spell, you saw a pentagram on his wrist, hidden under his sleeve.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You didn't pay much attention to it at that moment, you were just happy to be alive.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You are saved, but something doesn't feel right.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "The mage had some kind of dark aura around him, and you feel uneasy.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "You thank the mage for saving your life, but he doesn't respond.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));

                    int eg;
                    for (int i = 0; i <= 2; i++) {
                    std::cout << "Input: ";
                    std::cin >> eg;  
                    if (eg != 42 && eg != 666) {
                        std::cout << "Invalid input. Please try again: ";
                    }
                    else if (eg == 42 || eg == 666) {
                        if (eg == 42) { //Easter egg for people who are curious enough to try random inputs
                        std::cout << "You ask the mage why he saved you.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "The mage looks at you with a hint of a smile and says: \"Because I see potential in you.\"\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "He offers to take you as his apprentice and teach you the ways of magic.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "You feel a sense of excitement and curiosity.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "You agree to become his apprentice and follow him into the forest.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "You spend the next few years learning the ways of magic from the dark mage, becoming a powerful sorcerer yourself.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "You eventually return to the village, using your newfound powers to protect it from future goblin attacks.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "*Apprentice Ending*\n";
                        waitForEnter();
                        return 0;
                    }
                        else if (eg == 666 && pickgem == 1) { //Another easter egg for curious people
                        std::cout << "Out of desperation, all of a sudden, you decide to swallow the gemstone.\n";
                        std::cout << "The mage looks at you with a mix of confusion and surprise.\n";
                        std::cout << "\"What are you doing?\" he asks.\n";
                        std::cout << "But you don't answer.\n";
                        std::cout << "You feel a strange sensation as the gemstone dissolves in your stomach.\n";
                        std::cout << "Suddenly, all of your injuries heal, and you feel a surge of energy and power.\n";
                        std::cout << "Your eyes start to glow with a bright red light, and you feel a dark aura surrounding you.\n";
                        std::cout << "Without even realizing it, you wave your hand, and the dark mage is disintegrated into dust.\n";
                        std::cout << "You now headed back to the village, but you are no longer the same person.\n";
                        std::cout << "The dark power of the gemstone has taken over you.\n";
                        std::cout << "As you arrive at the village, you made the villagers kneel before you, recognizing your newfound power.\n";
                        std::cout << "You become the dark lord of the region, ruling with an iron fist and striking fear into the hearts of all who oppose you.\n";
                        std::cout << "Your story is told for generations to come, inspiring others to be afraid and submissive.\n\n";

                        std::cout << "            ______              \n";
                        std::cout << "       .d$$$******$$$$c.        \n";
                        std::cout << "    .d$P\"            \"$$c      \n";
                        std::cout << "   $$$$$.           .$$$*$.    \n";
                        std::cout << " .$$ 4$L*$$.     .$$Pd$  '$b   \n";
                        std::cout << " $F   *$. \"$$e.e$$\" 4$F   ^$b  \n";
                        std::cout << "d$     $$   z$$$e   $$     '$. \n";
                        std::cout << "$P     `$L$$P` `\"$$d$\"      $$ \n";
                        std::cout << "$$     e$$F       4$$b.     $$ \n";
                        std::cout << "$b  .$$\" $$      .$$ \"4$b.  $$ \n";
                        std::cout << "$$e$P\"    $b     d$`    \"$$c$F \n";
                        std::cout << "'$P$$$$$$$$$$$$$$$$$$$$$$$$$$  \n";
                        std::cout << " \"$c.      4$.  $$       .$$   \n";
                        std::cout << "  ^$$.      $$ d$\"      d$P    \n";
                        std::cout << "    \"$$c.   `$b$F    .d$P\"     \n";
                        std::cout << "      `4$$$c.$$$..e$$P\"        \n";
                        std::cout << "          `^^^^^^^`            \n\n";
                        std::cout << "*Dark Lord Ending*\n";
                        waitForEnter();
                        return 0;
                    }
                        else break;
                    }
                    } 
                    
                    
                    if (pickgem == 1) {
                        std::cout << "The mage sees the gemstone in your pocket through your torn clothes.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "The mage wasn't just any mage, he was a dark sorcerer, and he saw immersive power contained within that gemstone.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "He wasn't as kind as he seemed to be at first.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "He took advantage of you being weakened, finished you without hesitation and took the gemstone from you.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "You died, but at least you took some goblins with you.\n\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "You are remembered as a hero who fought bravely against the goblins, but also as a cautionary tale about trusting strangers.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "*Heroic Sacrifice Ending*\n";
                        waitForEnter();
                    } 
                    else {
                        std::cout << "The mage doesn't seem to have any interest in you, and after a brief moment, he slowly walks away into the forest, disappearing from sight.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "The uneased feeling doesn't leave you, but you are alive.\n\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "But something still bothers you about that dark mage...\n\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "*Happy Ending(?)*\n";
                        waitForEnter();
                    }
                }
                repeatCheckpoint = false;
            } 
            else if (swordchoice == 2) {
                std::cout << "\nYou stand out from the cover, slowly approaching the goblins with a heroic walk.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "You point your weapon at them and shout: \"What are you doing in our forest, goblins?\"\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "The goblins stop in their tracks, looking at you with confusion.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "It seems like they don't understand you.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "Then, all of a sudden, one of the biggest goblins steps forward and growls: \"What does it seems like, fool?\"\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "You feel a bit intimidated, but you stand your ground.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "With a calm tone, but confidently, you said: \"You are trespassing on our land and killing our innocent villagers. I'm giving a choice: leave now or face the consequences.\"\n";
                std::this_thread::sleep_for(std::chrono::seconds(4));
                std::cout << "The goblin leader looks at you for a moment, then bursts out laughing.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "\"And how exactly do you plan to enforce these consequences?\" he asks mockingly.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "You feel a bit nervous, but you didn't lose your head.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "You said: \"You are surrounded by a bunch of assassins-allies of mine, hidden in the trees. They are ready to strike at my command.\"\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "The goblin leader raised his eyebrow in surprise and took a quick look around.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "\"What if you are just bluffing?\" he asks.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "You didn't expect them to figure it out so quickly. So you came up with an idea...\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "You said: \"You don't have to believe me if you don't want to, but I'd rather resolve this peacefully.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "After thinking for a moment, the goblin leader finally says: \"I wish that it was that easy, human. But we can't just leave. We have to survive on something.\"\n";
                std::this_thread::sleep_for(std::chrono::seconds(4));
                std::cout << "\"We can make a deal.\" you say.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "The goblin leader responds: \"I'm listening.\"\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                if (pickgem == 1) {
                    std::cout << "Your option to pick up the gemstone earlier proved to be useful.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "1. Offer the gemstone as a gift in exchange for their promise to leave the village alone.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "2. Offer a fair and square duel to the goblin leader. If you win, they leave the village alone. If you lose, you give them the gemstone.\n Your choice: ";
                    int goblindeal;
                    std::cin >> goblindeal;
                    if (goblindeal == 1) {
                        std::cout << "\nYou offer the gemstone as a gift in exchange for their promise to leave the village alone.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "The goblin leader examines the gemstone closely and his eyes widen in surprise.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "\"Alright, human,\" he says. \"We accept your gift and promise to leave the village alone.\"\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "You feel a sense of relief and satisfaction.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery and cunning.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "*Diplomatic Ending*\n";
                        waitForEnter();
                    }
                    else if (goblindeal == 2) {
                        duelOutcome();
                    }
                    else {
                         for (int i = 0; i < 2; i++) {
                        std::cout << "Wrong answer. Please try again: ";
                        std::cin >> goblindeal;
                        }
                        duelOutcome();
                    }
                }
                else {
                    std::cout << "Without the gemstone, your options are limited.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "\nYou offer a fair and square duel to the goblin leader. If you win, they leave the village alone. If you lose, they're free to do whatever they want.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "The goblin leader looks at you with a mix of amusement and respect.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "\"You are brave, human,\" he says. \"Let's do it.\"\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "The duel is fierce and intense, the battle goes eye to eye.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "Despite the opponent being like 3 times your size, you manage to keep up with him, using your agility and quick thinking to outmaneuver him.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(4));
                    std::cout << "But unfortunately, one of the goblins manages to sneak up behind one of the bushes, and shoots you from behind with a crossbow.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(4));
                    std::cout << "You fall to the ground, injured and exhausted.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "The goblin leader picks up the crossbow and points it at your head.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "\"You fought well, human,\" he says. \"But a deal is a deal.\"\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "You ask him to at least spare your life, but he just laughs.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "\"Life is cheap, human,\" he says, and shoots you in the head...\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "The village elder and the villagers were wondering where you were for a long time.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "When you didn't return, they assumed the worst.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "They send a search party, and they eventually found your body.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "The village couldn't keep up with the goblin attacks and was eventually abandoned.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "You are remembered as a brave soul who fought valiantly against the goblins, but also as a cautionary tale about the dangers of pride and overconfidence.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(4));
                    std::cout << "The village elder holds a small ceremony in your honor before leaving the village for the last time.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "*Tragic Ending*\n";
                    waitForEnter();
                }
                repeatCheckpoint = false;
            }
            else if (swordchoice == 3) {
                std::cout << "\nYou decide that discretion is the better part of valor and choose to run away from the goblins.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "You sprint through the forest, dodging trees and leaping over roots.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "The goblins give chase, but you are faster and more agile.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                if (trap == 1) {
                    std::cout << "As you run, you lead the goblins towards the pit trap you set earlier.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "Several of them fall into the pit and are impaled by the spikes at the bottom.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "The remaining goblins weren't intimidated by the trap. Their attention was still on you.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "Since there were only a few of them left, you manage to finish them off and celebrate your victory...\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery and cunning.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "*Heroic Ending*\n";
                    waitForEnter();
                }
                else {
                    std::cout << "You manage to lose the goblins in the forest.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "You are exhausted and out of breath, but you are alive.\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "Should you try to come back at them, or just go back to the village?\n";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    std::cout << "1. Go back to the village\n2. Try to come back at them\n Your choice: ";
                    int runchoice;
                    std::cin >> runchoice;
                    if (runchoice == 1) {
                        cowardlyEnding();
                    }
                    else if (runchoice == 2) {
                        std::cout << "\nYou decide to try to come back at the goblins.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "You head back into the forest, determined to find the goblins and finish what you started.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "After a few hours of searching, you finally find them.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "This time, you've decided to make it stealthy.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "You took them out one by one, into the bushes, without them noticing you.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "By the time the goblins realizes what is happening, it's already too late.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "So little was left of them, that you managed to finish them off without much of a fight...\n\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery and cunning.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(4));
                        std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(4));
                        std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "*Heroic Ending*\n";
                        waitForEnter();
                    }
                    else {
                         for (int i = 0; i < 2; i++) {
                        std::cout << "Wrong answer. Please try again: ";
                        std::cin >> runchoice;
                        }
                        cowardlyEnding();
                    }
                }
                repeatCheckpoint = false;
            }
            else {
                 for (int i = 0; i < 2; i++) {
                std::cout << "Wrong answer. Please try again: ";
                std::cin >> swordchoice;
                }
                std::cout << "When you were standing there, trying to come up with a plan, one of the goblins managed to sneak up behind one of the bushes, and shoots you from behind with a crossbow.\n";
                std::this_thread::sleep_for(std::chrono::seconds(4));
                std::cout << "You fall to the ground, cold and lifeless...\n\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "Would you like to return to the last checkpoint (the moment you were standing there, trying to come up with a plan)?\n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                std::cout << "1. Yes\n2. No\n Your choice: ";
                int checkpoint;
                std::cin >> checkpoint;
                if (checkpoint == 1) {
                    repeatCheckpoint = true;
                }
                else if (checkpoint == 2) {
                    std::cout << "You are dead. Game over.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    std::cout << "*Dead Ending*\n";
                    waitForEnter();
                    repeatCheckpoint = false;
                }
                else {
                     for (int i = 0; i < 2; i++) {
                    std::cout << "Wrong answer. Please try again: ";
                    std::cin >> checkpoint;
                    }
                    std::cout << "You are dead. Game over.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "*Dead Ending*\n";
                    waitForEnter();
                    repeatCheckpoint = false;
                    }
                }
            } //end of while loop
            break;
        case 2:
            std::cout << "With the grimoire in hand, you feel a surge of magical energy coursing through your veins.\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));
            std::cout << "You step out from behind the tree and begin to chant a spell from the grimoire.\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));
            if (grimoire == 2) {
                std::cout << "Since the grimoire was enchanted with the gemstone's power, a couple of extra spells appeared in it.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "You were surprised to see them appear, but you quickly adapted to them.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "You cast a powerful metero spell, which lands right in the middle of the goblin group, instantly incinerating them all.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "The goblins didn't even have a chance to react.\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "You stand there, victorious and amazed at your own power...\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "As you make your way back to the village, on the way, you see a mysterious figure in a black cloak watching you from the shadows.\n";
                std::this_thread::sleep_for(std::chrono::seconds(4));
                std::cout << "You feel a chill run down your spine, but the dark mage started to approach you.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "The dark mage introduces himself as a sorcerer who has been watching you.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "You ask him: \"What do you want from me?\"\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "He responds: \"You look like a worthy opponent\".\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "Without any further warning, he casts a Rock Bullet spell at you.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "To protect yourself, you quickly cast an earth wall spell, which blocks the attack.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "What do you do next?\n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                std::cout << "1. Try to negotiate with him\n2. Accept the fight with him\n3. Run away\n Your choice: ";
                int magechoice;
                std::cin >> magechoice;   // Section: Multiple choices of the wizard path (affects the ending)
                if (magechoice == 1) {
                    std::cout << "\nYou decide to try to negotiate with the dark mage.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "You ask him what he wants and why he is attacking you.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "The dark mage responds: \"I can't let someone with your power roam free.\"\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You explain that you are just trying to protect your village from the goblins.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "The dark mage seems to consider your words for a moment, then says: \"I can make you a counter-offer.\"\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "\"If you would agree to become my apprentice, I'll take care of the village for you.\"\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "But it seems like he is hiding something.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "\"What's the catch?\" you ask.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "The dark mage waits for a moment, then says: \"You won't be able to see that village anymore.\"\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "\"You will be bound to me, and you will have to leave your old life behind.\"\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You feel a sense of unease, but also a sense of curiosity.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "Do you accept his offer?\n";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    std::cout << "1. Yes\n2. No\n Your choice: ";
                    int apprenticechoice;
                    std::cin >> apprenticechoice;
                    if (apprenticechoice == 1) {
                        std::cout << "\nYou decide to accept the dark mage's offer and become his apprentice.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "You follow him into the forest, leaving your old life behind.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "You spend the next few years learning the ways of magic from the dark mage, becoming a powerful sorcerer yourself.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "You roam together across the lands, helping him with his dark deeds.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "But you never forget your village and the people you left behind.\n\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "As a protection for the village as the dark mage promised, he set up a powerful barrier around it, which prevents any goblins from entering.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "Also, he gave the village wizard some knowledge about how to train new wizards, so the village will be protected in the future.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        std::cout << "*Apprentice Ending*\n";
                        waitForEnter();
                    }
                    else if (apprenticechoice == 2) {
                        apprenticeTragicEnding();
                    }
                    else {
                         for (int i = 0; i < 2; i++) {
                        std::cout << "Wrong answer. Please try again: ";
                        std::cin >> apprenticechoice;
                        }
                        apprenticeTragicEnding();
                    }
                }
                else if (magechoice == 2) {
                    std::cout << "\nYou decide to accept the fight with the dark mage.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "The battle is fierce and intense, with both of you casting powerful spells at each other.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You manage to dodge most of his attacks, but he is a skilled sorcerer and he manages to land a few hits on you.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "At one point, you get injured, which decreases your magical capabilities.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "Despite the injury, you manage to hold your ground and keep fighting.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "As you keep fighting, you see the villige wizard running at your direction.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "He quickly casts a shield spell around you, which blocks the dark mage's next attack.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "The dark mage looks at the wizard with a mix of surprise and anger.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "Once the dark mage had the change, he quickly casts a teleportation spell, disappearing from sight.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You are relieved that the fight is over, but you are also injured and exhausted.\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You make your way back to the village with the wizard, where you are hailed as a hero for your bravery.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "But you knew, that the dark mage will be back, and next time, he will be more prepared.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "So you keep training together with the village wizard, preparing for the next encounter with the dark mage...\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "*Heroic Mage Ending*\n";
                    waitForEnter();
                }
                else if (magechoice == 3) {
                    std::cout << "\nYou decide that discretion is the better part of valor and choose to run away from the dark mage.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You sprint through the forest, dodging trees and leaping over roots.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You managed to lose the dark mage in the forest.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "As you get back to the village, you feel a sense of relief.\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "But something still bothers you about that dark mage...\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    std::cout << "You have a feeling that this was not the last time you see him...\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "*Happy Ending(?)*\n";
                    waitForEnter();
                }
                else {
                     for (int i = 0; i < 2; i++) {
                    std::cout << "Wrong answer. Please try again: ";
                    std::cin >> magechoice;
                    }
                    std::cout << "When you were standing there, trying to come up with a plan, the dark mage have already pierced your chest with an earth spike.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "You fall to the ground, cold and lifeless...\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "You are dead. Game over.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    std::cout << "*Dead Ending*\n";
                    waitForEnter();
                }
            }
            else {
                std::cout << "You cast a fireball spell, which lands right in the middle of the goblin group, engulfing some of them in flames.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "The goblins didn't even have a chance to react.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "As the remaining goblins are trying to recover from the shock, you quickly cast a lightning bolt spell, which strikes down several more goblins.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "The goblins are now in full panic mode, and they start to flee.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "You stand there, victorious and amazed at your own power...\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery and cunning.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "*Heroic Ending*\n";
                waitForEnter();
            }
            break;
        case 3:
            std::cout << "You see a rock on the ground and pick it up.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "You throw the rock at the goblins, hitting one of them.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "The goblins are now alerted to your presence and they start to chase you.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "You run as fast as you can, but the goblins are faster.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "They quickly catch up to you and surround you.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "You are outnumbered and outmatched.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "The goblins attack you, and you are quickly overwhelmed.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "You fall to the ground, cold and lifeless...\n\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "You are dead. Game over.\n"; 
            waitForEnter();
            break;
}
    return 0;
}