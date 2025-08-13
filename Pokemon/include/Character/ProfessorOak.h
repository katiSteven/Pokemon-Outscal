#include <string>
//

using namespace std;
namespace N_Character {
    class ProfessorOak {
    public:
        std::string name;

        ProfessorOak();

        ProfessorOak(std::string p_name);

        void greetPlayer(N_Player::Player& player) const;

        void offerPokemonChoices(N_Player::Player& player) const;

        void explainMainQuest(const N_Player::Player& player);
    };
}