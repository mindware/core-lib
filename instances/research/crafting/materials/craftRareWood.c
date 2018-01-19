//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, Realms MUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        knowledgeResearchItem::reset(arg);
        addSpecification("name", "Craft Rare Wood");
        addSpecification("description", "This skill provides the user with the "
            "knowledge required to craft items using uncommon wood such as "
            "purple heart or koa.");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addPrerequisite("lib/instances/research/crafting/materials/craftUncommonWood.c", (["type":"research"]));
    }
}

