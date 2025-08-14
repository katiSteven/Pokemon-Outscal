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
			
			cout << name << "name uses Wing Attack on target.name!" << "!" << endl;
			target.TakeDamage(20);
			
			N_Utility::Utility::waitForEnter();
		}

		void Pidgey::attack(Pokemon* target) {
			WingAttack(*target);
		}
	}
}