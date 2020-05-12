//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/landforms/hillock.c", "southeast");
    addFeature("/lib/environment/features/landforms/ridge.c", "southeast");
    addFeature("/lib/environment/features/water/brook.c", "southeast");

    addExit("north", "/areas/tol-dhurath/forest-1/18x3.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
    addExit("west", "/areas/tol-dhurath/forest-1/17x2.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
}
