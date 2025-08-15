#include <iostream>
//#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Pokemon/Pokemons/Zubat.hpp"
#include "../include/Utility/Utility.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {
		Zubat::Zubat() {
			name = "Zubat";
			p_type = PokemonType::POISON;
			health = 100;
			attackPower = 20;
		}

		void Zubat::Supersonic(Pokemon& target) {
			cout << name << "uses Wing Attack on " << target.getName() << "!";
			N_Utility::Utility::waitForEnter();

			cout << target.getName() << " is engulfed in dust, loses visibility...\n";
			N_Utility::Utility::waitForEnter();

			target.TakeDamage(attackPower);

			if (target.isFainted())
				cout << target.getName() << " fainted!\n";
			else
				cout << target.getName() << " has " << target.getHealth() << " HP left.\n";
			N_Utility::Utility::waitForEnter();
		}

		void Zubat::attack(Pokemon* target) {
			Supersonic(*target);
		}
	}
}