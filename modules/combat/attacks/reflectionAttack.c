//*****************************************************************************
// Copyright (c) 2017 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/combat/attacks/baseAttack.c";

/////////////////////////////////////////////////////////////////////////////
public void init()
{
    ::init();
    setDamageType("magical");
        
    addMissMessage("##AttackerName## ##Infinitive::reflect## the attack, but fails to do any damage.");
    
    addHitMessage("##AttackerName## ##Infinitive::reflect## the attack back to ##TargetName##.","1-50");
}




