//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/landforms/hillock.c", "east");
    addFeature("/lib/environment/features/water/ravine-waterfall.c", "northwest");
    addFeature("/lib/environment/features/water/brook.c", "north");

    addExit("west", "/areas/tol-dhurath/entry/9x0.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("east", "/areas/tol-dhurath/entry/11x0.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
}
