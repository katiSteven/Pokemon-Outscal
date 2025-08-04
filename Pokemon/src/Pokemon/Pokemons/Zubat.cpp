#include <iostream>
//#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Pokemon/Pokemons/Zubat.hpp"
#include "../include/Utility/Utility.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {
		Zubat::Zubat() : Pokemon("Zubat", PokemonType::POISON, 100, 20) {}

		void Zubat::Supersonic(Pokemon& target) {
			cout << name << "uses Wing Attack on " << target.getName() << "!";

			target.TakeDamage(20);
			
			N_Utility::Utility::waitForEnter();
		}
	}
}