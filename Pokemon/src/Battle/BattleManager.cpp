#include "../include/Character/Player/Player.hpp"
#include "../include/Utility/Utility.hpp"
#include "../include/Battle/BattleManager.hpp"
namespace N_Battle {
	void BattleManager::startBattle(N_Player::Player& player, N_Pokemon::Pokemon& wildPokemon)
	{
		std::cout << "A wild " << wildPokemon.getName() << " appeared!\n";
		/*battleState.encounteredPokemon = &wildPokemon;
		battleState.chosenPokemon = &player.chosenPokemon;*/
		cout << "Your " << player.chosenPokemon.getName() << " has " << player.chosenPokemon.getHealth() << " health!";
		cout << "Wild " << wildPokemon.getName() << " has " << wildPokemon.getHealth() << " health!";
		battleState = BattleState{
			&player.chosenPokemon,
			&wildPokemon,
			true,
			true
		};
		// Handle Battle
		battle();

		// Determine and display the outcome of the battle
		handleBattleOutcome();
	}

	void BattleManager::battle() {

		while (battleState.isOngoing) {
			if (battleState.isPlayerTurn) {
				battleState.playerPokemon->attack(*battleState.wildPokemon);
			}
			else {
				battleState.wildPokemon->attack(*battleState.playerPokemon);
			}
			updateBattleState();

			battleState.isPlayerTurn = !battleState.isPlayerTurn;

			N_Utility::Utility::waitForEnter();
		}
	}

	void BattleManager::updateBattleState()
	{
		if (battleState.playerPokemon->isFainted() || battleState.wildPokemon->isFainted()) {
			battleState.isOngoing = false;
		}
	}

	void BattleManager::handleBattleOutcome()
	{
		if (battleState.playerPokemon->isFainted()) {
			cout << "Oh no!" << battleState.playerPokemon->getName() << " fainted! You need to visit the PokeCenter.\n";
			//playerPokemon.TakeDamage(playerPokemon.health); // Set health to 0 to indicate fainting
		}
		else {
			cout << battleState.playerPokemon->getName() << "is victorious! Keep an eye on your Pokémon's health.\n";
			//playerPokemon.heal(); // Heal the player's Pokémon after winning
		}
		N_Utility::Utility::waitForEnter();
	}

}