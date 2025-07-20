//#include "Grass.hpp"

//


#include "../Pokemon/Grass.hpp"
#include "../Battle/WildEncounterManager.hpp"
using namespace std;

class Game {
private:
    Grass forestGrass;
    Pokemon encounteredPokemon;
    
public:
    //WildEncounterManager encounterManager;
    Game();
    void gameLoop(Player& player);
    //void Battle(Pokemon& chosenPokemon, Pokemon& encounteredPokemon);
};

