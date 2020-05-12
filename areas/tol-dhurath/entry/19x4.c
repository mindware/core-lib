//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/golden-apple-stand.c", "southwest");
    addFeature("/lib/environment/features/landforms/hollow.c", "southwest");
    addFeature("/lib/environment/features/landforms/valley.c", "southwest");

    addExit("west", "/areas/tol-dhurath/entry/18x4.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("east", "/areas/tol-dhurath/entry/20x4.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
}
