#include <iostream>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"

using namespace std;

class Player {
public:
	std::string name;
	Pokemon chosenPokemon;

	Player();
	Player(std::string p_name, const Pokemon& p_chosenPokemon);

	Player(const Player& player);

	void choosePokemon(int choice);
};
