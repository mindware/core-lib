//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/city.c");
    addBuilding("/lib/environment/buildings/trades/warehouse.c",
        "east", "/lib/tutorial/eledhel/southern-city/warehouse/0x1.c");

    addExit("south", "/lib/tutorial/eledhel/southern-city/19x5.c");
    addExit("north", "/lib/tutorial/eledhel/southern-city/19x7.c");
}
