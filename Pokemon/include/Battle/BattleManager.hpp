
#include "../Battle/BattleState.hpp"

class BattleManager {
public:
	void startBattle(Player& player, Pokemon& wildPokemon);
private:
	BattleState battleState;
	
	void battle();
	void updateBattleState();
	void handleBattleOutcome();
};