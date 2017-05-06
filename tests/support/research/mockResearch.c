virtual inherit "/lib/modules/research/passiveResearchItem.c";

public void init()
{
    "passiveResearchItem"::init();
    addSpecification("name", "mock research");
    addSpecification("description", "This does stuff.");
    addSpecification("scope", "self");
    addSpecification("research type", "granted");
    addSpecification("research cost", 1);
    addSpecification("bonus strength", 1);
    addSpecification("bonus weapon attack", 1); // Don't care about the value
    addSpecification("bonus fire attack", 25);  // value is the damage if not a
                                                // weapon attack
}


