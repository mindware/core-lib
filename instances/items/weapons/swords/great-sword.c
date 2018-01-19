//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, Realms MUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/weapon.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Great sword");
        set("short", "Great sword");
        set("aliases", ({ "sword", "two-handed sword", "greatsword" }));
        set("blueprint", "great sword");
    }
}
