#include <string>
//

using namespace std;

class ProfessorOak {
public:
    std::string name;

    ProfessorOak();

    ProfessorOak(std::string p_name);

    void greetPlayer(Player& player);

    void offerPokemonChoices(Player& player);

    void explainMainQuest(const Player& player);
};