//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, Realms MUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/material.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Ceramic slip");
        set("short", "Ceramic slip");
        set("aliases", ({ "slip", "clay" }));
        set("blueprint", "ceramic slip");
    }
}
