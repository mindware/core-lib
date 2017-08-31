//*****************************************************************************
// Copyright (c) 2017 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
public void init()
{
    addSpecification("type", "racial");
    addSpecification("name", "Sea Elf");
    addSpecification("description", "");
    addSpecification("root", "elf");
    addSpecification("opposing root", "dwarf");
    addSpecification("opinion", 10);
    addSpecification("opposing opinion", -10);
    "baseTrait"::init();
}
