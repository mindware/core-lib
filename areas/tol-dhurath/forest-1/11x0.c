//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/willow-stand.c", "northwest");
    addFeature("/lib/environment/features/trees/cottonwood-stand.c", "northwest");
    addFeature("/lib/environment/features/water/ravine-creek.c", "northwest");

    addExit("north", "/areas/tol-dhurath/forest-1/11x1.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
}
