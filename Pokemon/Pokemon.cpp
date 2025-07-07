//

//#include "PokemonType.hpp"
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

void Pokemon::attack(Pokemon& target)
{
	int damage = 10;
	cout << name << " attacks " << target.name << " for " << damage << " damage!\\n";
	target.TakeDamage(damage);
	Utility::waitForEnter();
}

void Pokemon::TakeDamage(int damage)
{
	health -= damage;
	if (health < 0) { health = 0; }
}

bool Pokemon::isFainted()
{
	return health <= 0;
}
