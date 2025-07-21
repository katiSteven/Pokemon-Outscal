#include <iostream>
//
#include "../include/Pokemon/PokemonChoice.hpp"
//#include "PokemonType.hpp"
#include "../include/Utility/Utility.hpp"
#include "../include/Character/Player/Player.hpp"
using namespace std;
namespace N_Player {
    Player::Player() {
        name = "Trainer";
        chosenPokemon = N_Pokemon::Pokemon();
    }

    Player::Player(string p_name, const N_Pokemon::Pokemon& p_chosenPokemon) {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
    }

    Player::Player(const Player& player) {
        name = player.name;
        chosenPokemon = player.chosenPokemon;
    }

    void Player::choosePokemon(int choice) {
        switch ((N_Pokemon::PokemonChoice)choice)
        {
        case N_Pokemon::PokemonChoice::CHARMANDER:
            chosenPokemon = N_Pokemon::Pokemon("CHARMANDER", N_Pokemon::PokemonType::FIRE, 50, 30);
            break;
        case N_Pokemon::PokemonChoice::BULBASAUR:
            chosenPokemon = N_Pokemon::Pokemon("BULBASAUR", N_Pokemon::PokemonType::GRASS, 70, 20);
            break;
        case N_Pokemon::PokemonChoice::SQUIRTLE:
            chosenPokemon = N_Pokemon::Pokemon("SQUIRTLE", N_Pokemon::PokemonType::WATER, 90, 10);
            break;
        default:
            chosenPokemon = N_Pokemon::Pokemon("PIKACHU", N_Pokemon::PokemonType::ELECTRIC, 70, 30);
            break;
        }
        cout << "Player: " << name << " chose " << chosenPokemon.name << "!\n";
        N_Utility::Utility::waitForEnter();
    }
}
