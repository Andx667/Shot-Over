#define COMPONENT logistics
#define COMPONENT_BEAUTIFIED Logistics
#include "\z\shot_over\addons\main\script_mod.hpp"

#include "\z\shot_over\addons\main\script_macros.hpp"

// Object variables of crates, pallets and containers, with the original mod's names (see main\script_macros.hpp)
#define CRATES_LEFT_VAR "shto_cratesleft"
#define CRATE_LIST_VAR "shto_crateList"
#define CRATE_IS_OPEN_VAR "shto_crateIsOpen"

// ACE action distance (m) of the shell, crate, pallet and container actions
#define INTERACTION_DISTANCE 5
// ACE cargo size of a pallet per started 21 crates (a full x42 pallet)
#define PALLET_CARGO_SIZE(crates) (ceil ((crates) / 21) * 5)
// Where the two shells lie in an opened crate (open crate model)
#define CRATE_SHELL_POSITIONS [[0.425, 0.075, 0.1], [0.425, -0.075, 0.1]]
