//#include "Pokemon.hpp"


struct BattleState {
	Pokemon* playerPokemon;
	Pokemon* wildPokemon;
	bool isPlayerTurn;
	bool isOngoing;
};