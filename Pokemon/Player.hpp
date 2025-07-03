#include <string>
#include "Pokemon.hpp";

using namespace std;

class Player {
public:
	string name;
	Pokemon chosenPokemon;

	Player();
	Player(std::string p_name, const Pokemon& p_chosenPokemon);

	Player(const Player& player);

	void choosePokemon(int choice);
};
