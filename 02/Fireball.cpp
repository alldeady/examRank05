#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "Fireballed") {}
Fireball::~Fireball() {}

ASpell	*Fireball::clone(void) const { return (new Fireball(*this)); }
