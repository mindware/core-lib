//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/material.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Hemlock");
        set("short", "Hemlock (Wood)");
        set("aliases", ({ "wood", "hemlock" }));
        set("blueprint", "hemlock");
    }
}
