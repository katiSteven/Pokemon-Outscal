#include <iostream>

#include "PokemonChoice.hpp"
//#include "PokemonType.hpp"
#include "Player.hpp"
#include "Utility.hpp"

//#include "Grass.hpp"
#include "Game.h"
#include "WildEncounterManager.hpp"


using namespace std;

//Grass forestGrass = {
//    {{"Zubat", PokemonType::GRASS, 40} , {"Caterpie", PokemonType::GRASS, 35}, {"Pidgey", PokemonType::GRASS, 40}},
//    80,
//    "Forest"
//};
//
//Grass caveGrass = {
//	{{"Geodude", PokemonType::GRASS, 50}},
//	80,
//    "Cave"
//};

Game::Game() {
    
    forestGrass = Grass();
    forestGrass.wildPokemon = {
            {"Zubat", PokemonType::GRASS, 40} ,
            {"Caterpie", PokemonType::GRASS, 35},
            {"Pidgey", PokemonType::GRASS, 40}
    };
    forestGrass.environment = "Forest";
	forestGrass.encounterRate = 80;
    
    //Game::encounteredPokemon;
}

void Game::gameLoop(Player& player)
{
    int choice;
    bool keepPlaying = true;
    while (keepPlaying) {
        Utility::clearConsole();
        cout << "What would you like to do next - " << player.name << "\n"
            << "1. Battle Wild Pokémon\n"
            << "2. Visit PokeCenter\n"
            << "3. Challenge Gyms\n"
            << "4. Enter Pokémon League\n"
            << "5. Quit\n";

        cout << "Enter your choice: ";
        cin >> choice;
        Utility::clearInputBuffer(); // Clear the input buffer to avoid issues with getline later

        WildEncounterManager encounterManager = WildEncounterManager();

        Pokemon encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);

        switch (choice) {
        case 1:
			
            cout << "A wild " << encounteredPokemon.name <<" appeared!\n";
            //Battle(player.chosenPokemon, encounteredPokemon);
            break;
        case 2:
            cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\\n";
            cout << "[functionalities not implemented till now]";
            break;
        case 3:
            cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\\n";
            cout << "[functionalities not implemented till now]";
            break;
        case 4:
            cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\\n";
            cout << "[functionalities not implemented till now]";
            break;
        case 5:
            cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\\n";
            keepPlaying = false;
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            continue;
        }
        Utility::waitForEnter();
    }
    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}

void Game::Battle(Pokemon& chosenPokemon, Pokemon& encounteredPokemon) {
    while (!chosenPokemon.isFainted() && !encounteredPokemon.isFainted()) {
        Utility::clearConsole();

		cout << "Your " << chosenPokemon.name << " has " << chosenPokemon.health << " health.\n";
		cout << "Wild " << encounteredPokemon.name << " has " << encounteredPokemon.health << " health.\n";

		cout << "Choose your action:\n";
		cout << "1. Attack\n";

		int action;
		cin >> action;
		Utility::clearInputBuffer();

		if (action == 1) {
			chosenPokemon.attack(encounteredPokemon);
			if (!encounteredPokemon.isFainted()) {
				encounteredPokemon.attack(chosenPokemon);
			}
		}else {
			cout << "Invalid action. Please try again.\n";
			continue;
		}
    }
}