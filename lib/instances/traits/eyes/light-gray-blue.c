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
        addSpecification("type", "genetic");
        addSpecification("name", "light grayish blue eyes");
        addSpecification("description", "Your eyes are pale, light grayish-blue.");
        addSpecification("root", "eyes");
        "baseTrait"::reset(arg);
    }
}
