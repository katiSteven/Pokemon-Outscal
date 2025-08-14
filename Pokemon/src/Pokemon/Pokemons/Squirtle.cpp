#include <iostream>
//#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Utility/Utility.hpp"
#include "../include/Pokemon/Pokemons/Squirtle.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {
		Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, 35) {}

		void Squirtle::waterSplash(Pokemon& target) {
			cout << name << " uses Water Splash on " << target.getName() << "!" << std::endl;
			target.TakeDamage(35);
			N_Utility::Utility::waitForEnter();
		}

		void Squirtle::attack(Pokemon* target) {
			waterSplash(target);
		}
	}
}