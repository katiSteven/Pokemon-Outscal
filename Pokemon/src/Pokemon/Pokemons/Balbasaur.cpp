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
			N_Utility::Utility::waitForEnter();

			cout << target.getName()<<" is engulfed in vines...\n";
			N_Utility::Utility::waitForEnter();

			target.TakeDamage(attackPower);

			if (target.isFainted())
				cout << target.getName() << " fainted!\n";
			else
				cout << target.getName() << " has " << target.getHealth() << " HP left.\n";
			N_Utility::Utility::waitForEnter();
		}

		void Balbasaur::attack(Pokemon* target) {
			vineWhip(*target);
		}
	}
}