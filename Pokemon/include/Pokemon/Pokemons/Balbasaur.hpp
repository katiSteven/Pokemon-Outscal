#pragma once
#include "../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {
		class Balbasaur : public Pokemon {
		public:
			// Constructor
			Balbasaur();
		private:
			void vineWhip(Pokemon& target);
			void attack(Pokemon* target) override;
		};
	}
}