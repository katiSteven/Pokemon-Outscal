#include <iostream>
#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../include/Utility/Utility.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {

		Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}

		void Caterpie::bugBite(Pokemon& target) {
			cout << name << "name uses Wing Attack on " << target.name << "!" << endl;
			target.TakeDamage(20);

			N_Utility::Utility::waitForEnter();
		}
	}
}