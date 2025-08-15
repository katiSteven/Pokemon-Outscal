#include <iostream>
//
#include "../include/Pokemon/PokemonChoice.hpp"
//#include "PokemonType.hpp"
#include "../include/Utility/Utility.hpp"
#include "../include/Character/Player/Player.hpp"
#include "../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../include/Pokemon/Pokemons/Charmander.hpp"
#include "../include/Pokemon/Pokemons/Pikachu.hpp"
//using namespace ;
using namespace std;
namespace N_Player {
    Player::Player() {
        name = "Trainer";
        //chosenPokemon = new N_Pokemon::Pokemon();
    }

    Player::Player(string p_name) {
        name = p_name;
    }

    Player::Player(const Player& player) {
        name = player.name;
        chosenPokemon = player.chosenPokemon;
    }

    void Player::choosePokemon(int choice) {
        switch ((N_Pokemon::PokemonChoice)choice)
        {
        case N_Pokemon::PokemonChoice::CHARMANDER:
            chosenPokemon = new N_Pokemon::N_Pokemons::Charmander();
                //N_Pokemon::Pokemon("CHARMANDER", N_Pokemon::PokemonType::FIRE, 50, 30);
            break;
        case N_Pokemon::PokemonChoice::BULBASAUR:
            chosenPokemon = new N_Pokemon::N_Pokemons::Balbasaur();
                //N_Pokemon::Pokemon("BULBASAUR", N_Pokemon::PokemonType::GRASS, 70, 20);
            break;
        case N_Pokemon::PokemonChoice::SQUIRTLE:
            chosenPokemon = new N_Pokemon::N_Pokemons::Squirtle();
                //N_Pokemon::Pokemon("SQUIRTLE", N_Pokemon::PokemonType::WATER, 90, 10);
            break;
        default:
            chosenPokemon = new N_Pokemon::N_Pokemons::Pikachu();
                //N_Pokemon::Pokemon("PIKACHU", N_Pokemon::PokemonType::ELECTRIC, 70, 30);
            break;
        }
        cout << "Player: " << name << " chose " << chosenPokemon->getName() << "!\n";
        N_Utility::Utility::waitForEnter();
    }
}
