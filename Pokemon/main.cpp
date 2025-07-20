#include<string>
#include <limits>
//#include <vector>
#include <cstdlib>
//
//#include "PokemonType.hpp"
#include "../include/Pokemon/PokemonChoice.hpp"
#include "../include/Character/Player/Player.hpp"
#include "../include/Character/ProfessorOak.h"
#include "../include/Utility/Utility.hpp"
//#include "WildEncounterManager.hpp"
#include "../include/Main/Game.h"

using namespace std;



int main() {

#pragma region Introduction
    //Pokemon pokemon;
    //Player player;
    //ProfessorOak professorOak;

    //professorOak.name = "ProfessorOak";

    //professorOak.greetPlayer(player);
    //professorOak.offerPokemonChoices(player);
#pragma endregion

#pragma region Intro 2
    //Pokemon pokemon1;
    //Player p = Player();
#pragma endregion

#pragma region OOPS and enums
    //Pokemon defaultPokemon;
    //Pokemon charmander = Pokemon("Charmander", PokemonType::FIRE, 100);
    //defaultPokemon.Print();
    //charmander.Print();
    //Pokemon bulbasaur = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
    //Pokemon bulbasaur_2 = Pokemon(bulbasaur);
    //bulbasaur.Print();
    //bulbasaur_2.Print();
    //bulbasaur_2.health = 80;
    //bulbasaur_2.Print();
#pragma endregion

#pragma region The Legendary Constructors Scroll
    //Player trainer = Player();
    //Pokemon bulbasaur = Pokemon("Bulbasaur", PokemonType::GRASS, 20);
    //Player steven = Player("Steven", bulbasaur);
    //Player steven_2 = Player(steven);
    //Pokemon bulbasaur_2 = Pokemon(bulbasaur);
#pragma endregion

    /*int randomNum = rand();
    cout << "Random number: " << randomNum << endl;
    return 0;*/

#pragma region Main Quest
    // Create Pokemon and Player objects for the game
    //Pokemon charmander("Charmander", PokemonType::FIRE, 100); // Using parameterized constructor

    // Continue with the main flow of the game
    ProfessorOak professor("Professor Oak");
    Player player = Player();

    // Greet the player and offer Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Explain the main quest
    professor.explainMainQuest(player);

    // Placeholder for where the game loop will start
    //cout << "\n[Placeholder for the Game Loop]\n";
    Game game = Game();
    game.gameLoop(player);
#pragma endregion

    return 0;


}