#include "script_component.hpp"

params ["_display"];

_display displayAddEventHandler ["MouseButtonDown", {_this call FUNC(mouseButton)}];
