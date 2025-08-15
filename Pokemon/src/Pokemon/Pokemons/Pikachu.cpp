#include <iostream>
//#include "../include/Pokemon/PokemonType.hpp"
#include "../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../include/Utility/Utility.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {
		using namespace std;
		Pikachu::Pikachu() {
			name = "Pikachu";
			p_type = PokemonType::ELECTRIC;
			health = 100;
			attackPower = 15;
		}

		void N_Pokemon::N_Pokemons::Pikachu::thunderShock(Pokemon& target)
		{
			cout << name << " attacks " << target.getName() << " for " << attackPower << " damage!\\n";
			N_Utility::Utility::waitForEnter();

			cout << target.getName() << " is shocked and rendered immobile...\n";
			N_Utility::Utility::waitForEnter();

			target.TakeDamage(attackPower);

			if (target.isFainted())
				cout << target.getName() << " fainted!\n";
			else
				cout << target.getName() << " has " << target.getHealth() << " HP left.\n";
			N_Utility::Utility::waitForEnter();
		}

		void N_Pokemons::Pikachu::attack(Pokemon* target)
		{
			thunderShock(*target);
		}
	}
}
