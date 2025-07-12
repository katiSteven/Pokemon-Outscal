
//#include "Player.hpp"

class BattleManager {
public:
	
	void startBattle(Player& player, Pokemon& wildPokemon);
	void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
	void handleBattleOutcome(Player player, bool playerWon);
};