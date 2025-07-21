//#include "Pokemon.hpp"

namespace N_Battle {
	struct BattleState {
		N_Pokemon::Pokemon* playerPokemon;
		N_Pokemon::Pokemon* wildPokemon;
		bool isPlayerTurn;
		bool isOngoing;
	};
}