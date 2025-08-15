#include <iostream>
//#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../include/Utility/Utility.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {

		Pidgey::Pidgey() {
			name = "Pidgey";
			p_type = PokemonType::NORMAL;
			health = 100;
			attackPower = 35;
		}

		void Pidgey::WingAttack(Pokemon& target) {
			
			cout << name << "name uses Wing Attack on "<<target.getName()<<"!" << "!" << endl;
			N_Utility::Utility::waitForEnter();

			cout << target.getName() << " is blown back by the strong winds...\n";
			N_Utility::Utility::waitForEnter();

			target.TakeDamage(attackPower);

			if (target.isFainted())
				cout << target.getName() << " fainted!\n";
			else
				cout << target.getName() << " has " << target.getHealth() << " HP left.\n";
			N_Utility::Utility::waitForEnter();
		}

		void Pidgey::attack(Pokemon* target) {
			WingAttack(*target);
		}
	}
}