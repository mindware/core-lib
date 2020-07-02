//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setInterior("/lib/environment/interiors/ruin.c");
    addDecorator("ruined interior-to-exterior north-corner hallway east exit");

    addExit("east", "/areas/tol-dhurath/temple-interior/4x9.c");
    addExit("south", "/areas/tol-dhurath/temple-interior/3x8.c");
}
