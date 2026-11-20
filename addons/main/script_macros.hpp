// Global toggles for caching/logging
// #define DISABLE_COMPILE_CACHE
// #define DEBUG_MODE_FULL

#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"
#include "\z\ace\addons\main\script_macros.hpp"

#undef PREP
#ifdef DISABLE_COMPILE_CACHE
    #define LINKFUNC(x) {call FUNC(x)}
    #define PREP(fncName) FUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
    #define PREP_RECOMPILE_START    if (isNil "shot_over_fnc_recompile") then {shot_over_recompiles = []; shot_over_fnc_recompile = {{call _x} forEach shot_over_recompiles;}}; private _recomp = {
    #define PREP_RECOMPILE_END      }; call _recomp; shot_over_recompiles pushBack _recomp;
#else
    // LINKFUNC / PREP_RECOMPILE_START / PREP_RECOMPILE_END already match ACE3's script_debug.hpp for this branch - not redefined here.
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define MILS_PER_DEGREE (6400 / 360)

// Classes and variables more than one component uses. The variables keep the names of the original mod: missions
// read them (shto_charge is documented in docs/mission-makers.md), so they are not GVARs.
#define GUN_CLASS "shto_vn_static_m101_02_base"
#define SHELL_CLASS "shto_vn_m101_shell"
#define CHARGE_VAR "shto_charge"

// Category of the CBA keybinds. CBA saves a player's keybinds under it, so it must not change.
#define KEYBIND_CATEGORY "Shot, Over!"

// Deflection (mils) at which the crew emplaces the aiming stakes (sight) and from which the FDC notebook works out
// the deflection of a fire mission (fcs): 2800, as for the real M101's aiming posts
#define REFERRED_DEFLECTION 2800
