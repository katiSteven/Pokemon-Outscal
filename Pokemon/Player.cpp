#include <iostream>
//
#include "PokemonChoice.hpp"
//#include "PokemonType.hpp"
#include "Utility.hpp"
#include "Player.hpp"
using namespace std;

Player::Player() {
    name = "Trainer";
    chosenPokemon = Pokemon();
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
        chosenPokemon = Pokemon("CHARMANDER", PokemonType::FIRE, 50, 30);
        break;
    case PokemonChoice::BULBASAUR:
        chosenPokemon = Pokemon("BULBASAUR", PokemonType::GRASS, 70, 20);
        break;
    case PokemonChoice::SQUIRTLE:
        chosenPokemon = Pokemon("SQUIRTLE", PokemonType::WATER, 90, 10);
        break;
    default:
        chosenPokemon = Pokemon("PIKACHU", PokemonType::ELECTRIC, 70, 30);
        break;
    }
    cout << "Player: " << name << " chose " << chosenPokemon.name << "!\n";
    Utility::waitForEnter();
}