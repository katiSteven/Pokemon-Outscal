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
			N_Utility::Utility::waitForEnter();

			cout << target.getName() << " is engulfed in flames...\n";
			N_Utility::Utility::waitForEnter();

			target.TakeDamage(attackPower);

			if (target.isFainted())
				cout << target.getName() << " fainted!\n";
			else
				cout << target.getName() << " has " << target.getHealth() << " HP left.\n";
			N_Utility::Utility::waitForEnter();
		}

		void Charmander::attack(Pokemon* target) {
			flameBurst(*target);
		}
	}
}
