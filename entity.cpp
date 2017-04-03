#include "entity.h"

// cc_entity_main implementation.
// Caskey, Damon V.
// 2016-02-25

// Accessors
float cc_entity_main::get_hitpoints() const
{
	return hitpoints_m;
}

float cc_entity_main::get_hitpoints_max() const
{
	return hitpoints_max_m;
}

float cc_entity_main::get_mana() const
{
    return mana_m;
}

float cc_entity_main::get_mana_max() const
{
    return mana_max;
}

// Mutators
void cc_entity_main::set_hitpoints(int value)
{
    hitpoints_m = value;
}

void cc_entity_main::set_hitpoints_max(int value)
{
    hitpoints_max_m = value;
}

void cc_entity_main::set_mana(int value)
{
    mana_m = value;
}

void cc_entity_main::set_mana_max(int value)
{
    mana_max_m = value;
}


