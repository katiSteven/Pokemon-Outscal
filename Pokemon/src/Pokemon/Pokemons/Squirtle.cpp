#include <iostream>
//#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Utility/Utility.hpp"
#include "../include/Pokemon/Pokemons/Squirtle.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {
		Squirtle::Squirtle() {
			name = "Squirtle";
			p_type = PokemonType::WATER;
			health = 100;
			attackPower = 35;
		}

		void Squirtle::waterSplash(Pokemon& target) {
			cout << name << " uses Water Splash on " << target.getName() << "!" << std::endl;
			N_Utility::Utility::waitForEnter();

			cout << target.getName() << " is drenched in water...\n";
			N_Utility::Utility::waitForEnter();

			target.TakeDamage(attackPower);

			if (target.isFainted())
				cout << target.getName() << " fainted!\n";
			else
				cout << target.getName() << " has " << target.getHealth() << " HP left.\n";
			N_Utility::Utility::waitForEnter();
		}

		void Squirtle::attack(Pokemon* target) {
			waterSplash(*target);
		}
	}
}