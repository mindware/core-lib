//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        addSpecification("type", "persona");
        addSpecification("name", "red fox");
        addSpecification("description", "You are a red fox.");
        addSpecification("root", "animal persona");
        "baseTrait"::reset(arg);
    }
}
