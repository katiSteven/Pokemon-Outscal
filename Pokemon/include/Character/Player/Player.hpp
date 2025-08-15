#include <string>
//#include "Pokemon.hpp"
//#include "..\Pokemon\include\Pokemon.hpp"
#include "../include/Pokemon/Pokemon.hpp"

using namespace std;
namespace N_Player {
	class Player {
	public:
		string name;
		N_Pokemon::Pokemon* chosenPokemon;

		Player();
		Player(string p_name);

		Player(const Player& player);

		void choosePokemon(int choice);
	};
}
