//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/oak-stand.c", "northeast");
    addFeature("/lib/environment/features/landforms/tor.c", "south");
    addFeature("/lib/environment/features/trees/hemlock-stand.c", "west");

    addExit("south", "/areas/tol-dhurath/forest-1/17x2.c");
    addFeature("/lib/environment/features/paths/path.c", "south");
    addExit("north", "/areas/tol-dhurath/forest-1/17x4.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
}
