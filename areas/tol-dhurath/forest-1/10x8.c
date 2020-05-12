//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/landforms/hill.c", "southeast");
    addFeature("/lib/environment/features/trees/cherry-stand.c", "southeast");

    addExit("east", "/areas/tol-dhurath/forest-1/11x8.c");
    addFeature("/lib/environment/features/paths/path.c", "east");

    addRandomCreature(({"white-tail deer","outlaw"}));
}