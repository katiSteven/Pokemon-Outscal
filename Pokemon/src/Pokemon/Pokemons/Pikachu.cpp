#include <iostream>
//#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../include/Utility/Utility.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;
		Pikachu::Pikachu() {
			name = "Pikachu";
			p_type = PokemonType::ELECTRIC;
			health = 100;
			attackPower = 15;
		}

		void N_Pokemon::N_Pokemons::Pikachu::thunderShock(Pokemon& target)
		{
			int damage = attackPower;
			cout << name << " attacks " << target.getName() << " for " << damage << " damage!\\n";
			target.TakeDamage(damage);
			N_Utility::Utility::waitForEnter();
		}

		void N_Pokemons::Pikachu::attack(Pokemon* target)
		{
			thunderShock(*target);
		}
	}
}
