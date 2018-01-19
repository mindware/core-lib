//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, Realms MUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************

/////////////////////////////////////////////////////////////////////////////
public void onSkillPointsUsed(object caller, string data)
{
    raise_error(sprintf("event handler: onSkillPointsUsed called, data: %s, caller: %s",
        data, program_name(caller)));
}
