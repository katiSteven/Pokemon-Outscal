#include <iostream>
//#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Pokemon/Pokemons/Charmander.hpp"

#include "../include/Utility/Utility.hpp"
namespace N_Pokemon {
	namespace N_Pokemons {
		Charmander::Charmander() {
			name = "Charmander";
			p_type = PokemonType::FIRE;
			health = 100;
			attackPower = 35;
		}
		void Charmander::flameBurst(Pokemon& target) {
			cout << name << " uses Flame Burst on " << target.getName() << "!" << endl;
			target.TakeDamage(35);
			N_Utility::Utility::waitForEnter();
		}

		void Charmander::attack(Pokemon* target) {
			flameBurst(*target);
		}
	}
}
