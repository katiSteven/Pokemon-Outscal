#include "../Pokemon/Grass.hpp"
#include "../Battle/WildEncounterManager.hpp"
using namespace std;
namespace N_Main {
    class Game {
    private:
        N_Pokemon::Grass forestGrass;
        N_Pokemon::Pokemon* encounteredPokemon;

    public:
        //WildEncounterManager encounterManager;
        Game();
        void gameLoop(N_Player::Player& player);
        //void Battle(Pokemon& chosenPokemon, Pokemon& encounteredPokemon);
        ~Game();
    };


}