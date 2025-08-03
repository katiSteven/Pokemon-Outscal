#include <iostream>
//#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../include/Utility/Utility.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;
		Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 15) {}

		void N_Pokemon::N_Pokemons::Pikachu::thunderShock(Pokemon& target)
		{
			int damage = attackPower;
			cout << name << " attacks " << target.name << " for " << damage << " damage!\\n";
			target.TakeDamage(damage);
			N_Utility::Utility::waitForEnter();
		}
	}
}
