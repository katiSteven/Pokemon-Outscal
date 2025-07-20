#include <string>
//#include "Pokemon.hpp"
//#include "..\Pokemon\include\Pokemon.hpp"
#include "../include/Pokemon/Pokemon.hpp"
using namespace std;

class Player {
public:
	string name;
	Pokemon chosenPokemon;

	Player();
	Player(string p_name, const Pokemon& p_chosenPokemon);

	Player(const Player& player);

	void choosePokemon(int choice);
};
