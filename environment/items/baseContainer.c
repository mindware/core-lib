//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, Realms MUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/items/baseItem.c";

/////////////////////////////////////////////////////////////////////////////
public int isContainer()
{
    return 1;
}

/////////////////////////////////////////////////////////////////////////////
public int canGet(object target)
{
    return 1;
}