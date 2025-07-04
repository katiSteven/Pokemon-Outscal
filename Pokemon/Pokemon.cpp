//

#include "PokemonType.hpp"
#include "Utility.hpp"
#include "Pokemon.hpp"

Pokemon::Pokemon() : name("Pikachu"), p_type(PokemonType::ELECTRIC), health(100) {}

Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_health)
	: name(p_name), p_type(p_type), health(p_health) {}

Pokemon::Pokemon(const Pokemon& other)
	: name(other.name), p_type(other.p_type), health(other.health) {}

Pokemon::~Pokemon() {
	//Destructor logic here if needed
}

void Pokemon::attack() {
	std::cout << name << " attacks with a powerful move!" << std::endl;
	Utility::waitForEnter();
}