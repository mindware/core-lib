//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/landforms/dell.c", "west");
    addFeature("/lib/environment/features/water/rocky-lake-shore.c", "west");
    addFeature("/lib/environment/features/water/brook.c", "west");

    addExit("west", "/areas/tol-dhurath/entry/5x8.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("east", "/areas/tol-dhurath/entry/7x8.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
}