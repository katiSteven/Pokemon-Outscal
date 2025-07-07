#include <iostream>
//
#include "PokemonChoice.hpp"
//#include "PokemonType.hpp"
#include "Utility.hpp"
#include "Player.hpp"
using namespace std;

Player::Player() {
    name = "Trainer";
    chosenPokemon = Pokemon(/*"Pikachu", PokemonType::ELECTRIC, 10*/);
}

Player::Player(string p_name, const Pokemon& p_chosenPokemon) {
    name = p_name;
    chosenPokemon = p_chosenPokemon;
}

Player::Player(const Player& player) {
    name = player.name;
    chosenPokemon = player.chosenPokemon;
}

void Player::choosePokemon(int choice) {
    switch ((PokemonChoice)choice)
    {
    case PokemonChoice::CHARMANDER:
        chosenPokemon = Pokemon("CHARMANDER", PokemonType::FIRE, 100);
        break;
    case PokemonChoice::BULBASAUR:
        chosenPokemon = Pokemon("BULBASAUR", PokemonType::GRASS, 100);
        break;
    case PokemonChoice::SQUIRTLE:
        chosenPokemon = Pokemon("SQUIRTLE", PokemonType::WATER, 100);
        break;
    default:
        chosenPokemon = Pokemon("PIKACHU", PokemonType::ELECTRIC, 100);
        break;
    }
    cout << "Player: " << name << " chose " << chosenPokemon.name << "!\n";
    Utility::waitForEnter();
}