//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, Realms MUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/armor.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Hard leather");
        set("short", "Hard leather");
        set("aliases", ({ "leather", "armor" }));
        set("blueprint", "hard leather");
    }
}
