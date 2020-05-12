//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/ambrosia-apple-stand.c", "west");
    addFeature("/lib/environment/features/trees/pine-stand.c", "west");
    addFeature("/lib/environment/features/landforms/glen.c", "west");

    addExit("south", "/areas/tol-dhurath/entry/4x7.c");
    addFeature("/lib/environment/features/paths/path.c", "south");
    addExit("north", "/areas/tol-dhurath/entry/4x9.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
    addExit("west", "/areas/tol-dhurath/entry/3x8.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
}
