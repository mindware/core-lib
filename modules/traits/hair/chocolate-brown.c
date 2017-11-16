//*****************************************************************************
// Copyright (c) 2017 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        addSpecification("type", "genetic");
        addSpecification("name", "chocolate brown hair");
        addSpecification("description", "Your hair is very dark brown.");
        addSpecification("root", "hair");
        "baseTrait"::reset(arg);
    }
}
