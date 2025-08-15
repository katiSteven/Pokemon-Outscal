#pragma once
#include "../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {

		class Caterpie : public Pokemon {
		public:
			//constructor
			Caterpie();
		private:
			void bugBite(Pokemon& target);
			void attack(Pokemon* target) override;
		};

	}
}