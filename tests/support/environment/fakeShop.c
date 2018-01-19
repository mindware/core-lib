//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, Realms MUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/tests/support/environment/fakeTerrain.c");
    addFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    addShop("/lib/environment/shopInventories/swordsmith.c");
}
