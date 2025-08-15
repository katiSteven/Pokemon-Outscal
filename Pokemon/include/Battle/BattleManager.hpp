
#include "../Battle/BattleState.hpp"
namespace N_Battle {
	class BattleManager {
	public:
		void startBattle(N_Player::Player& player, N_Pokemon::Pokemon* wildPokemon);
	private:
		BattleState battleState;

		void battle();
		void updateBattleState();
		void handleBattleOutcome();
	};
}