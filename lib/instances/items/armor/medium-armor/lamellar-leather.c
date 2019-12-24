//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/armor.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Lamellar leather");
        set("short", "Lamellar leather");
        set("aliases", ({ "leather", "armor", "lamellar leather" }));
        set("blueprint", "lamellar leather");
    }
}