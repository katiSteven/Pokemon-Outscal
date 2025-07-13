#include <iostream>

#include "PokemonChoice.hpp"
#include "Player.hpp"
#include "Utility.hpp"
#include "Game.h"
//#include "WildEncounterManager.hpp"
#include "BattleManager.hpp"

using namespace std;

Game::Game() {

    forestGrass = Grass{
        forestGrass.wildPokemon = {
            Pokemon("Zubat", PokemonType::GRASS, 40, 20),
            Pokemon("Caterpie", PokemonType::GRASS, 35, 15),
            Pokemon("Pidgey", PokemonType::GRASS, 40, 25)
        },
        80,
        "Forest"
    };
}

void Game::gameLoop(Player& player)
{
    int choice;
    bool keepPlaying = true;
	BattleManager battleManager = BattleManager();
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

        switch (choice) {
        case 1:
            
            encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
            battleManager.startBattle(player, encounteredPokemon);
            break;
        case 2:
            std::cout << "You head to the PokeCenter.\\n";
            player.chosenPokemon.heal();
            std::cout << player.chosenPokemon.name << "'s health is fully restored!\\n";
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
