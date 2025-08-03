#include <cstdlib>
#include <ctime>
#include <vector>
//
//#include "Pokemon.hpp"
#include "..\include\Pokemon\Pokemon.hpp"
#include "../include/Pokemon/Grass.hpp"
//#include "Game.h"
#include "../include/Battle/WildEncounterManager.hpp"
namespace N_Battle {
	WildEncounterManager::WildEncounterManager() {
		srand(time(0)); // Seed the random number generator
	}

	N_Pokemon::Pokemon WildEncounterManager::getRandomPokemonFromGrass(const N_Pokemon::Grass& grass) {
		int randomIndex;

		randomIndex = rand() % grass.wildPokemon.size();

		return grass.wildPokemon[randomIndex];
	}
}