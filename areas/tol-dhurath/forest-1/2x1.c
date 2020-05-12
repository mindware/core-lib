//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/landforms/valley.c", "southwest");
    addFeature("/lib/environment/features/landforms/ridge.c", "southwest");

    addExit("south", "/areas/tol-dhurath/forest-1/2x0.c");
    addFeature("/lib/environment/features/paths/path.c", "south");
    addExit("east", "/areas/tol-dhurath/forest-1/3x1.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
}
