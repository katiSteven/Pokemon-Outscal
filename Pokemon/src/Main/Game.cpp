#include <iostream>

#include "../include/Pokemon/PokemonChoice.hpp"
#include "../include/Character/Player/Player.hpp"
#include "../include/Utility/Utility.hpp"
#include "../include/Main/Game.h"
//#include "WildEncounterManager.hpp"
#include "../include/Battle/BattleManager.hpp"

using namespace std;
namespace N_Main {
    Game::Game() {

        forestGrass = N_Pokemon::Grass{
            forestGrass.wildPokemon = {
                N_Pokemon::Pokemon("Zubat", N_Pokemon::PokemonType::GRASS, 40, 20),
                N_Pokemon::Pokemon("Caterpie", N_Pokemon::PokemonType::GRASS, 35, 15),
                N_Pokemon::Pokemon("Pidgey", N_Pokemon::PokemonType::GRASS, 40, 25)
            },
            80,
            "Forest"
        };
    }

    void Game::gameLoop(N_Player::Player& player)
    {
        int choice;
        bool keepPlaying = true;
        N_Battle::BattleManager battleManager = N_Battle::BattleManager();
        while (keepPlaying) {
            N_Utility::Utility::clearConsole();
            cout << "What would you like to do next - " << player.name << "\n"
                << "1. Battle Wild Pokémon\n"
                << "2. Visit PokeCenter\n"
                << "3. Challenge Gyms\n"
                << "4. Enter Pokémon League\n"
                << "5. Quit\n";

            cout << "Enter your choice: ";
            cin >> choice;
            N_Utility::Utility::clearInputBuffer(); // Clear the input buffer to avoid issues with getline later

            N_Battle::WildEncounterManager encounterManager = N_Battle::WildEncounterManager::WildEncounterManager();

            switch (choice) {
            case 1:

                encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
                battleManager.startBattle(player, encounteredPokemon);
                break;
            case 2:
                std::cout << "You head to the PokeCenter.\\n";
                player.chosenPokemon.heal();
                std::cout << player.chosenPokemon.getName() << "'s health is fully restored!\\n";
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
            N_Utility::Utility::waitForEnter();
        }
        cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
    }

}