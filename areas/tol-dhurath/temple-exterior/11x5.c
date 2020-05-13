//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/water/ravine-dry-creek.c", "southeast");
    addFeature("/lib/environment/features/water/stream.c", "east");
    addFeature("/lib/environment/features/landforms/combe.c", "west");

    addExit("west", "/areas/tol-dhurath/temple-exterior/10x5.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("east", "/areas/tol-dhurath/temple-exterior/12x5.c");
    addFeature("/lib/environment/features/paths/path.c", "east");

    addRandomCreature(({"black bear","outlaw"}));
}
