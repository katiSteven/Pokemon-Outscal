#include <cstdlib>
#include <ctime>
#include <vector>
//
#include "Pokemon.hpp"
#include "Grass.hpp"
#include "WildEncounterManager.hpp"

WildEncounterManager::WildEncounterManager() {
	srand(time(0)); // Seed the random number generator
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
	int randomIndex;

	randomIndex = rand() / grass.wildPokemon.size();

	return grass.wildPokemon[randomIndex];
}