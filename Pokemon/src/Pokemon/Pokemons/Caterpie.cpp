#include <iostream>
//#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../include/Utility/Utility.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {

		Caterpie::Caterpie() {
			name = "Caterpie";
			p_type = PokemonType::BUG;
			health = 100;
			attackPower = 10;
		}

		void Caterpie::bugBite(Pokemon& target) {
			cout << name << "name uses Wing Attack on " << target.getName() << "!" << endl;
			target.TakeDamage(20);

			N_Utility::Utility::waitForEnter();
		}

		void Caterpie::attack(Pokemon* target) {
			bugBite(*target);
		}
	}
}