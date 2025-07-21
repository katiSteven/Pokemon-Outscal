//#include <vector>
//
//#include "Grass.hpp"
using namespace std;
namespace N_Battle {
	class WildEncounterManager {
	public:

		WildEncounterManager();

		N_Pokemon::Pokemon getRandomPokemonFromGrass(const N_Pokemon::Grass& grass);
	};
}