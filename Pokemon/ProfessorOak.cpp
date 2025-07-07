#include "PokemonChoice.hpp"
//#include "PokemonType.hpp"
#include "Player.hpp"
#include "Utility.hpp"
#include "ProfessorOak.h"

using namespace std;

ProfessorOak::ProfessorOak() : name("Professor Oak") {}

ProfessorOak::ProfessorOak(std::string p_name) : name(p_name) {}

void ProfessorOak::greetPlayer(Player& player) {
    cout << name << ": Hello there!Welcome to the world of Pokémon!\n";
    Utility::waitForEnter();
    cout << name << ": My name is Oak.People call me the Pokémon Professor!\n";
    Utility::waitForEnter();
    cout << name << ": But enough about me.Let's talk about you!\n";
    Utility::waitForEnter();
    cout << name << ": First, tell me, what’s your name ?\n";
    getline(cin, player.name);
    cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
    Utility::waitForEnter();
    Utility::clearConsole();
}

void ProfessorOak::offerPokemonChoices(Player& player) {
    cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
    Utility::waitForEnter();
    cout << "1. Charmander - The fire type. A real hothead!\n";
    cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

    int choice;
    cout << name << ": So, which one will it be? Enter the number of your choice: ";
    cin >> choice;
    player.choosePokemon(choice);
    Utility::clearConsole();
}

void ProfessorOak::explainMainQuest(const Player& player) {
    Utility::clearConsole();
    cout << "Ah, " << player.name << ", let me tell you about your grand adventure that's about to unfold!\n";
    Utility::waitForEnter();
    cout << "Becoming a Pokémon Master is no easy task. It demands courage, strategy, and sometimes a little bit of luck.\n";
    Utility::waitForEnter();
    cout << "Your main mission is to collect all the Pokémon Badges and defeat the Pokémon League. Only then can you challenge the Elite Four   and aim for the    title of Champion." << player.name << "Wait, isn’t that just like every other Pokémon game?\n";
    Utility::waitForEnter();
    cout << "No breaking the fourth wall, " << player.name << "!This is serious business.\n";
    Utility::waitForEnter();
    cout << "To achieve this, you must capture new Pokémon, battle wild creatures, challenge gym leaders, and keep your Pokémon healthy at the PokeCenter.\n";
    Utility::waitForEnter();
    Utility::clearConsole();
    cout << "Remember, you can only carry a limited number of Pokémon. Choose wisely who you want on your team!" << player.name << ": Piece of cake, right?\n";
    Utility::waitForEnter();
    cout << "Ha! That’s what everyone thinks. But the path to becoming a Champion is filled with obstacles. Lose a battle, and it’s back to the start!\n";
    Utility::waitForEnter();
    cout << "So, what do you say? Are you ready to embark on this epic journey to become the next Pokémon Champion?" << player.name << ": Ready as I’ll ever be, Professor!\n";
    Utility::waitForEnter();
    cout << "That’s the spirit! Now, your journey begins. Remember, it’s not just about battling—it’s about forming bonds with your Pokémon. Go, Trainer, the world of Pokémon awaits you!\n";
    Utility::waitForEnter();
    cout << "Oh, and about the actual game loop… let’s just pretend I didn’t forget to set it up. Onwards!\n";
    Utility::waitForEnter();
    Utility::clearConsole();
}