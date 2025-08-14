#include <iostream>
//#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Utility/Utility.hpp"
#include "../include/Pokemon/Pokemons/Balbasaur.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {
		Balbasaur::Balbasaur() {
			name = "Balbasaur";
			p_type = PokemonType::GRASS;
			health = 100;
			attackPower = 35;
		}

		void Balbasaur::vineWhip(Pokemon& target) {
			cout << name << " uses Vine Whip on " << target.getName() << "!" << std::endl;
			target.TakeDamage(35);
			N_Utility::Utility::waitForEnter();
		}

		void Balbasaur::attack(Pokemon* target) {
			vineWhip(*target);
		}
	}
}