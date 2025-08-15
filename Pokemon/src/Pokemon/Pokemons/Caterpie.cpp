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
			N_Utility::Utility::waitForEnter();

			cout << " Attack cuts through your "<< target.getName()<<"'s defense...\n";
			N_Utility::Utility::waitForEnter();

			target.TakeDamage(attackPower);

			if (target.isFainted())
				cout << target.getName() << " fainted!\n";
			else
				cout << target.getName() << " has " << target.getHealth() << " HP left.\n";
			N_Utility::Utility::waitForEnter();
		}

		void Caterpie::attack(Pokemon* target) {
			bugBite(*target);
		}
	}
}