//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/guilds/scion/common/evocation/plasma-ball.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    WeaponType = "staff";
    WeaponSkill = "staff";

    addSpecification("limited by", (["equipment":({ "staff" })]));
}
