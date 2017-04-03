#include "axis.h"

// cc_entity_main entity layout.
// Caskey, Damon V.
// 2016-02-25

class cc_entity_main
{
    public:

        // Accessors.
        int get_hitpoints()       const;
        int get_hitpoints_max()   const;
        int get_mana()            const;
        int get_mana_max()        const;

        // Mutators.
        void set_hitpoints(int value);
        void set_hitpoints_max(int value);
        void set_mana(int value);
        void set_mana_max(int value);

    private:

        int             hitpoints_m;          // Current health supply.
        int             hitpoints_max_m;      // Maximum health supply.
        int             mana_m;               // Energy for special moves.
        int             mana_max_m;           // Maximum energy for special moves.
        cc_axis_main    position_m;           // Location on screen.
        cc_axis_main    velocity_m;           // Movement speed on screen.
};
