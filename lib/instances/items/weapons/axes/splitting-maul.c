//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/weapon.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Splitting maul");
        set("short", "Splitting maul");
        set("aliases", ({ "axe", "maul", "splitting maul" }));
        set("blueprint", "splitting maul");
    }
}
