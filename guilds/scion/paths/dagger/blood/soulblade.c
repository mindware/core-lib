//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/sustainedResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        sustainedResearchItem::reset(arg);
        addSpecification("name", "Soul Blade");
        addSpecification("source", "Scion of Dhuras Guild");
        addSpecification("description", "");

        addSpecification("limited by", (["equipment":({
            "dagger", "short sword" })]));

        addPrerequisite("lib/guilds/scion/paths/dagger/root.c",
            (["type":"research"]));
        addPrerequisite("lib/guilds/scion/paths/dagger/blood/root.c",
            (["type":"research"]));

        addSpecification("modifiers", ({ 
            ([
                "type":"research",
                "research item": "lib/guilds/scion/paths/dagger/blood/sweeping-torment.c",
                "name" : "sweeping torment",
                "formula" : "additive",
                "base value" : 2,
                "rate": 1.0
            ]),
            ([
                "type":"research",
                "research item": "lib/guilds/scion/paths/dagger/blood/soul-brand.c",
                "name" : "soul brand",
                "formula" : "additive",
                "base value" : 2,
                "rate": 1.0
            ]),
            ([
                "type":"research",
                "research item": "lib/guilds/scion/paths/dagger/blood/scourge-blade.c",
                "name" : "scourge blade",
                "formula" : "additive",
                "base value" : 2,
                "rate": 1.0
            ]),
            ([
                "type":"research",
                "research item": "lib/guilds/scion/paths/dagger/blood/wicked-edge.c",
                "name" : "wicked edge",
                "formula" : "additive",
                "base value" : 2,
                "rate": 1.0
            ]),
            ([
                "type":"research",
                "research item": "lib/guilds/scion/paths/dagger/blood/tortured-pommel.c",
                "name" : "tortured pommel",
                "formula" : "additive",
                "base value" : 5,
                "rate": 1.0
            ]),
        }));

        addSpecification("scope", "self");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("cooldown", 4);
        addSpecification("spell point cost", 10);
        addSpecification("stamina point cost", 50);
        addSpecification("command template", "soul blade");
        addSpecification("bonus undead enchantment", 3);
        addSpecification("bonus resist magical", 3);

        addSpecification("use ability activate message", "Thin tendrils of crimson "
            "energy wrap around ##InitiatorPossessive::Name## dagger.");
        addSpecification("use ability deactivate message", "Thin tendrils of crimson "
            "energy around ##InitiatorPossessive::Name## dagger subside.");
    }
}