#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {

		class Pikachu : public Pokemon {
		public:
			//Constructor
			Pikachu();
		private:
			void thunderShock(Pokemon& target);
			void attack(Pokemon* target) override;
		};
	}
}