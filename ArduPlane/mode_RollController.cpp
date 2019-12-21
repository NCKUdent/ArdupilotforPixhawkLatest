#include "mode.h"
#include "Plane.h"

bool RollController::_enter()
{
    plane.throttle_allows_nudging = false;
    plane.auto_throttle_mode = false;
    plane.auto_navigation_mode = false;

    return true;
}

void RollController::update()
{
    
	plane.nav_pitch_cd = 0;
}