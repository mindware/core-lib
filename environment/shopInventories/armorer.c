//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, Realms MUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/shopInventories/baseShop.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    name("The Armorer");
    welcomeMessage("Welcome to the armorer's shop");
    shopType("armor");
    shopSubType("heavy armor");
}
