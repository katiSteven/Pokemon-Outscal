#include "Player.hpp"
#include "Utility.hpp"
#include "BattleManager.hpp"

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon)
{
	std::cout << "A wild " << wildPokemon.name << " appeared!\n";
	battle(player.chosenPokemon, wildPokemon);
	// Determine and display the outcome of the battle
	handleBattleOutcome(player, player.chosenPokemon.isFainted());
}

void BattleManager::battle(Pokemon& chosenPokemon, Pokemon& encounteredPokemon) {
	while (!chosenPokemon.isFainted() && !encounteredPokemon.isFainted()) {
		Utility::clearConsole();

		cout << "Your " << chosenPokemon.name << " has " << chosenPokemon.health << " health.\n";
		cout << "Wild " << encounteredPokemon.name << " has " << encounteredPokemon.health << " health.\n";

		cout << "Choose your action:\n";
		cout << "1. Attack\n";

		int action;
		cin >> action;
		Utility::clearInputBuffer();

		if (action == 1) {
			chosenPokemon.attack(encounteredPokemon);
			if (!encounteredPokemon.isFainted()) {
				encounteredPokemon.attack(chosenPokemon);
			}
		}
		else {
			cout << "Invalid action. Please try again.\n";
			continue;
		}
	}
}

void BattleManager::handleBattleOutcome(Player player, bool isFainted)
{
	if (isFainted) {
		cout << "Oh no!" << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
		//playerPokemon.TakeDamage(playerPokemon.health); // Set health to 0 to indicate fainting
	} else {
		cout << player.chosenPokemon.name << "is victorious! Keep an eye on your Pokémon's health.\n";
		//playerPokemon.heal(); // Heal the player's Pokémon after winning
	}
	Utility::waitForEnter();
}
