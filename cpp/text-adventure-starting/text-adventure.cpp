#include <iostream>
#include <thread>
#include <chrono>

/* This program will be a game/text adventure with branches, 
multiple choices, and different endings which rely on user's choices */


void duelOutcome() {
    std::cout << "\nYou offer a fair and square duel to the goblin leader. If you win, they leave the village alone. If you lose, they're free to do whatever they want.\n";
    std::cout << "The goblin leader looks at you with a mix of amusement and respect.\n";
    std::cout << "\"You are brave, human,\" he says. \"Let's do it.\"\n";
    std::cout << "The duel is fierce and intense, the battle goes eye to eye.\n";
    std::cout << "Despite the opponent being like 3 times your size, you manage to keep up with him, using your agility and quick thinking to outmaneuver him.\n";
    std::cout << "But unfortunately, one of the goblins manages to sneak up behind one of the bushes, and shoots you from behind with a crossbow.\n";
    std::cout << "You fall to the ground, injured and exhausted.\n";
    std::cout << "The gemstone falls out of your pocket and the goblin leader picks it up.\n";
    std::cout << "\"You fought well, human,\" he says. \"But in the end, you lost.\"\n";
    std::cout << "You ask him to at least spare your life, but he just laughs.\n";
    std::cout << "\"Life is cheap, human,\" he says, and drops the gemstone to the ground.\n";
    std::cout << "He takes a moment to swing his mace at your head, before ending your life...\n\n";
    std::cout << "The village elder and the villagers were wondering where you were for a long time.\n";
    std::cout << "When you didn't return, they assumed the worst.\n";
    std::cout << "They send a search party, and they eventually found your body with the gemstone next to it.\n";
    std::cout << "The village used the gemstone to fund a small militia to protect the village from future goblin attacks.\n";
    std::cout << "You are remembered as a brave soul who fought valiantly against the goblins, but also as a cautionary tale about the dangers of pride and overconfidence.\n";
    std::cout << "The village elder holds a small ceremony in your honor. The villagers still were resisting the goblin attacks.\n";
    std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
    std::cout << "*Tragic Heroic Ending*\n";
}

void cowardlyEnding() {
    std::cout << "\nYou decide to go back to the village.\n";
    std::cout << "You make your way back to the village, where you were treated as a disgrace for running away from the goblins.\n";
    std::cout << "The villages made a decision to not trust you with any important tasks anymore.\n";
    std::cout << "You live the rest of your life in shame, knowing that you could have done more.\n\n";
    std::cout << "*Cowardly Ending*\n";
}




int main() {

    std::cout << "\n\nWelcome to the great adventure in the world of magic!\n\n";
    std::cout << "*Please note: all your choices will affect which ending you will get...*\n";
    std::cout << "Also this is my first C++ project, so please be kind :)\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Pause for 2 second
    std::cout << "Let's begin!\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Pause for 1 second

    int getout; // Section: Player wakes up and chooses whether to get out of bed

    std::cout << "You woke up in the late morning in your house in a small medival village.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3)); // Pause for 3 second
    std::cout << "It was a beautiful autumn late morning, with colorful orange leaves falling from the trees.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3)); // Pause for 3 second
    std::cout << "You hear some noice outside. Seems like the villagers are worried about something.\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Pause for 1 second
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
                std::cout << "\"Fine, I'll give you a discount\" he says.\n";
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
    std::cout << "Half way through the forest, a thought crosses your mind.\n";
    std::cout << "You wonder if you should have prepared more.\n";
    std::cout << "Would you like to set a trap for the goblins?\n";
    std::cout << "1. Yes\n2. No\n Your choice: ";
    int trap;
    std::cin >> trap;   // Section: Setting a trap for goblins (affects the difficulty of the fight)
    if (trap == 1) {
        std::cout << "\nYou decide to set a trap for the goblins.\n";
        std::cout << "You dig a shallow pit and line the bottom with sharp wooden spikes.\n";
        std::cout << "You cover the pit with leaves and branches, making it look like solid ground.\n";
        std::cout << "You feel a bit more confident knowing that you have a backup plan.\n";
    } 
    else if (trap == 2) {
        std::cout << "\nYou decide not to set a trap for the goblins.\n";
        std::cout << "You feel a bit nervous, but also determined to face the goblins head on.\n";
    }
    else {
         for (int i = 0; i < 2; i++) {
        std::cout << "Wrong answer. Please try again: ";
        std::cin >> trap;
        }
        trap = 2;
        std::cout << "\nYou decide not to set a trap for the goblins.\n";
        std::cout << "You feel a bit nervous, but also determined to face the goblins head on.\n";
    }


    std::cout << "After a few hours of walking, you hear some rustling in the bushes.\n";
    std::cout << "You see a group of goblins emerging from the bushes.\n";
    std::cout << "You take hide behind a tree and prepare to face them.\n";
    
    std::cout << "How will you approach the goblins?\n";

    bool repeatCheckpoint = true; //to repeat the checkpoint if the user wants to try something else

    switch (prepare) {
        case 1:
            std::cout << "With your new weapon in hand, you feel confident and ready to face the goblins.\n";
            std::cout << "You step out from behind the tree and charge at the goblins, shouting a battle cry.\n";
            std::cout << "The goblins are caught off guard and you manage to take down a few of them before they can react.\n";

            while (repeatCheckpoint) {
            std::cout << "The rest of the goblins quickly regroup.\nWhat do you do next?\n";
            std::cout << "1. Continue fighting\n2. Try to intimidate them\n3. Run and try to come up with a plan B while escaping the goblins.\n Your choice: ";
            int swordchoice;
            std::cin >> swordchoice;    // Section: Multiple choices of the blacksmith path (affects the ending)
            if (swordchoice == 1) {
                if (trap == 1) {
                    std::cout << "\nAs you are filled with confidence, you continue fighting the goblins, using your weapon to take them down one by one.\n";
                    std::cout << "The goblins are fierce and relentless, but you manage to hold your ground.\n";
                    std::cout << "At one point, you get injured, which decreases your fighting capabilities.\n";
                    std::cout << "However, you remember the pit trap you set earlier and decide to run for it.\n";
                    std::cout << "You lead the goblins towards the pit trap and several of them fall into the pit and are impaled by the spikes at the bottom.\n";
                    std::cout << "The remaining goblins weren't intimidated by the trap. Their attention was still on you.\n";
                    std::cout << "Since there were only a few of them left, you manage to take them down and stand victorious...\n\n";
                    std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery and cunning.\n";
                    std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                    std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                    std::cout << "*Heroic Ending*\n";
                } 
                else {
                    std::cout << "\nYou continue fighting the goblins, using your weapon to take them down one by one.\n";
                    std::cout << "The goblins are fierce and relentless, but you manage to hold your ground.\n";
                    std::cout << "At one point, you get injured, which decreases your fighting capabilities.\n";
                    std::cout << "As you understand that you can't keep this up forever, you decide to flee.\n";
                    std::cout << "You run as fast as you can, but the injury slows you down. You lost too much blood.\n";
                    std::cout << "The goblins were quickly catch up to you and the distance between you and them was quickly closing in.\n";
                    std::cout << "By some interesting twist of fate, as you run, you see a random adventurer in a black cloan in front of you.\n";
                    std::cout << "The mysterious mage quickly casts a meteor spell, which lands right in the middle of the goblin group, instantly incinerating them all.\n";
                    std::cout << "As he was casting the spell, you saw a pentagram on his wrist, hidden under his sleeve.\n";
                    std::cout << "You didn't pay much attention to it at that moment, you were just happy to be alive.\n";
                    std::cout << "You are saved, but something doesn't feel right.\n";
                    std::cout << "The mage had some kind of dark aura around him, and you feel uneasy.\n";
                    std::cout << "You thank the mage for saving your life, but he doesn't respond.\n";

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
                        std::cout << "The mage looks at you with a hint of a smile and says: \"Because I see potential in you.\"\n";
                        std::cout << "He offers to take you as his apprentice and teach you the ways of magic.\n";
                        std::cout << "You feel a sense of excitement and curiosity.\n";
                        std::cout << "You agree to become his apprentice and follow him into the forest.\n";
                        std::cout << "You spend the next few years learning the ways of magic from the dark mage, becoming a powerful sorcerer yourself.\n";
                        std::cout << "You eventually return to the village, using your newfound powers to protect it from future goblin attacks.\n";
                        std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                        std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                        std::cout << "*Apprentice Ending*\n";
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
                        return 0;
                    }
                    else break;
                    }
                    } 
                    
                    
                    if (pickgem == 1) {
                        std::cout << "The mage sees the gemstone in your pocket through your torn clothes.\n";
                        std::cout << "The mage wasn't just any mage, he was a dark sorcerer, and he saw immersive power contained within that gemstone.\n";
                        std::cout << "He wasn't as kind as he seemed to be at first.\n";
                        std::cout << "He took advantage of you being weakened, finished you without hesitation and took the gemstone from you.\n";
                        std::cout << "You died, but at least you took some goblins with you.\n\n";
                        std::cout << "You are remembered as a hero who fought bravely against the goblins, but also as a cautionary tale about trusting strangers.\n";
                        std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                        std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                        std::cout << "*Heroic Sacrifice Ending*\n";
                    } 
                    else {
                        std::cout << "The mage doesn't seem to have any interest in you, and after a brief moment, he slowly walks away into the forest, disappearing from sight.\n";
                        std::cout << "The uneased feeling doesn't leave you, but you are alive.\n\n";
                        std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery.\n";
                        std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                        std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n";
                        std::cout << "But something still bothers you about that dark mage...\n\n";
                        std::cout << "*Happy Ending(?)*\n";
                    }
                }
                repeatCheckpoint = false;
            } 
            
            else if (swordchoice == 2) {
                std::cout << "\nYou stand out from the cover, slowly approaching the goblins with a heroic walk.\n";
                std::cout << "You point your weapon at them and shout: \"What are you doing in our forest, goblins?\"\n";
                std::cout << "The goblins stop in their tracks, looking at you with confusion.\n";
                std::cout << "It seems like they don't understand you.\n";
                std::cout << "Then, all of a sudden, one of the biggest goblins steps forward and growls: \"What does it seems like, fool?\"\n";
                std::cout << "You feel a bit intimidated, but you stand your ground.\n";
                std::cout << "With a calm tone, but confidently, you said: \"You are trespassing on our land and killing our innocent villagers. I'm giving a choice: leave now or face the consequences.\"\n";
                std::cout << "The goblin leader looks at you for a moment, then bursts out laughing.\n";
                std::cout << "\"And how exactly do you plan to enforce these consequences?\" he asks mockingly.\n";
                std::cout << "You feel a bit nervous, but you didn't lose your head.\n";
                std::cout << "You said: \"You are surrounded by a bunch of assassins-allies of mine, hidden in the trees. They are ready to strike at my command.\"\n";
                std::cout << "The goblin leader raised his eyebrow in surprise and took a quick look around.\n";
                std::cout << "\"What if you are just bluffing?\" he asks.\n";
                std::cout << "You didn't expect them to figure it out so quickly. So you came up with an idea...\n";
                std::cout << "You said: \"You don't have to believe me if you don't want to, but I'd rather resolve this peacefully.\n";
                std::cout << "After thinking for a moment, the goblin leader finally says: \"I wish that it was that easy, human. But we can't just leave. We have to survive on something.\"\n";
                std::cout << "\"We can make a deal.\" you say.\n";
                std::cout << "The goblin leader responds: \"I'm listening.\"\n";
                if (pickgem == 1) {
                    std::cout << "Your option to pick up the gemstone earlier proved to be useful.\n";
                    std::cout << "1. Offer the gemstone as a gift in exchange for their promise to leave the village alone.\n";
                    std::cout << "2. Offer a fair and square duel to the goblin leader. If you win, they leave the village alone. If you lose, you give them the gemstone.\n Your choice: ";
                    int goblindeal;
                    std::cin >> goblindeal;
                    if (goblindeal == 1) {
                        std::cout << "\nYou offer the gemstone as a gift in exchange for their promise to leave the village alone.\n";
                        std::cout << "The goblin leader examines the gemstone closely and his eyes widen in surprise.\n";
                        std::cout << "\"Alright, human,\" he says. \"We accept your gift and promise to leave the village alone.\"\n";
                        std::cout << "You feel a sense of relief and satisfaction.\n";
                        std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery and cunning.\n";
                        std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                        std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                        std::cout << "*Diplomatic Ending*\n";
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
                    std::cout << "\nYou offer a fair and square duel to the goblin leader. If you win, they leave the village alone. If you lose, they're free to do whatever they want.\n";
                    std::cout << "The goblin leader looks at you with a mix of amusement and respect.\n";
                    std::cout << "\"You are brave, human,\" he says. \"Let's do it.\"\n";
                    std::cout << "The duel is fierce and intense, the battle goes eye to eye.\n";
                    std::cout << "Despite the opponent being like 3 times your size, you manage to keep up with him, using your agility and quick thinking to outmaneuver him.\n";
                    std::cout << "But unfortunately, one of the goblins manages to sneak up behind one of the bushes, and shoots you from behind with a crossbow.\n";
                    std::cout << "You fall to the ground, injured and exhausted.\n";
                    std::cout << "The goblin leader picks up the crossbow and points it at your head.\n";
                    std::cout << "\"You fought well, human,\" he says. \"But a deal is a deal.\"\n";
                    std::cout << "You ask him to at least spare your life, but he just laughs.\n";
                    std::cout << "\"Life is cheap, human,\" he says, and shoots you in the head...\n\n";
                    std::cout << "The village elder and the villagers were wondering where you were for a long time.\n";
                    std::cout << "When you didn't return, they assumed the worst.\n";
                    std::cout << "They send a search party, and they eventually found your body.\n";
                    std::cout << "The village couldn't keep up with the goblin attacks and was eventually abandoned.\n";
                    std::cout << "You are remembered as a brave soul who fought valiantly against the goblins, but also as a cautionary tale about the dangers of pride and overconfidence.\n";
                    std::cout << "The village elder holds a small ceremony in your honor before leaving the village for the last time.\n";
                    std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                    std::cout << "*Tragic Ending*\n";
                }
                repeatCheckpoint = false;
            }
            else if (swordchoice == 3) {
                std::cout << "\nYou decide that discretion is the better part of valor and choose to run away from the goblins.\n";
                std::cout << "You sprint through the forest, dodging trees and leaping over roots.\n";
                std::cout << "The goblins give chase, but you are faster and more agile.\n";
                if (trap == 1) {
                    std::cout << "As you run, you lead the goblins towards the pit trap you set earlier.\n";
                    std::cout << "Several of them fall into the pit and are impaled by the spikes at the bottom.\n";
                    std::cout << "The remaining goblins weren't intimidated by the trap. Their attention was still on you.\n";
                    std::cout << "Since there were only a few of them left, you manage to finish them off and celebrate your victory...\n\n";
                    std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery and cunning.\n";
                    std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                    std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                    std::cout << "*Heroic Ending*\n";
                }
                else {
                    std::cout << "You manage to lose the goblins in the forest.\n";
                    std::cout << "You are exhausted and out of breath, but you are alive.\n\n";
                    std::cout << "Should you try to come back at them, or just go back to the village?\n";
                    std::cout << "1. Go back to the village\n2. Try to come back at them\n Your choice: ";
                    int runchoice;
                    std::cin >> runchoice;
                    if (runchoice == 1) {
                        cowardlyEnding();
                    }
                    else if (runchoice == 2) {
                        std::cout << "\nYou decide to try to come back at the goblins.\n";
                        std::cout << "You head back into the forest, determined to find the goblins and finish what you started.\n";
                        std::cout << "After a few hours of searching, you finally find them.\n";
                        std::cout << "This time, you've decided to make it stealthy.\n";
                        std::cout << "You took them out one by one, into the bushes, without them noticing you.\n";
                        std::cout << "By the time the goblins realizes what is happening, it's already too late.\n";
                        std::cout << "So little was left of them, that you managed to finish them off without much of a fight...\n\n";
                        std::cout << "You make your way back to the village, where you are hailed as a hero for your bravery and cunning.\n";
                        std::cout << "The village elder holds a small ceremony in your honor, and a statue is erected in the village square.\n";
                        std::cout << "Your story is told for generations to come, inspiring others to be brave and selfless.\n\n";
                        std::cout << "*Heroic Ending*\n";
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
                std::cout << "You fall to the ground, cold and lifeless...\n\n";
                std::cout << "Would you like to return to the last checkpoint (the moment you were standing there, trying to come up with a plan)?\n";
                std::cout << "1. Yes\n2. No\n Your choice: ";
                int checkpoint;
                std::cin >> checkpoint;
                if (checkpoint == 1) {
                    repeatCheckpoint = true;
                }
                else if (checkpoint == 2) {
                    std::cout << "You are dead. Game over.\n";
                    std::cout << "*Dead Ending*\n";
                }
                else {
                     for (int i = 0; i < 2; i++) {
                    std::cout << "Wrong answer. Please try again: ";
                    std::cin >> checkpoint;
                    }
                    std::cout << "You are dead. Game over.\n";
                    std::cout << "*Dead Ending*\n";
                    repeatCheckpoint = false;
                }
            }
        }
            break;

        case 2:
            std::cout << "With the grimoire in hand, you feel a surge of magical energy coursing through your veins.\n";
            std::cout << "You step out from behind the tree and begin to chant a spell from the grimoire.\n";
            std::cout << "A bolt of lightning shoots from your fingertips, striking one of the goblins and sending it flying.\n";
            std::cout << "The other goblins are momentarily stunned by the display of magic, giving you an advantage.\n";
            std::cout << "You continue to cast spells, taking down goblin after goblin with ease.\n";
            std::cout << "Eventually, all the goblins are defeated and you stand victorious.\n";
            std::cout << "You make your way back to the village, where you are hailed as a hero for your magical prowess.\n";
            break;
        case 3:
            std::cout << "Without any preparation, you feel a bit nervous as you step out from behind the tree.\n";
            std::cout << "The goblins notice you immediately and charge at you with their crude weapons.\n";
            std::cout << "You try to defend yourself with your bare hands, but it's no use against their numbers and";
            break;
}
}