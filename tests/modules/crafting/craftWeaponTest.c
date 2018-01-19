//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, Realms MUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";

object Player;
object Selector;

/////////////////////////////////////////////////////////////////////////////
void Init()
{
    ignoreList += ({ "SetUpSkills", "SetUpInventory", "SetUpResearch",
        "CraftSword", "getMaterialsOnHand", "__inline_lib_tests_modules_crafting_craftWeaponTest_c_146_0000" });
}

/////////////////////////////////////////////////////////////////////////////
void SetUpSkills()
{
    Player->Wis(50);
    Player->Str(50);
    Player->Int(50);
    Player->addSkillPoints(500);
    Player->advanceSkill("blacksmithing", 20);
    Player->advanceSkill("metal crafting", 10);
    Player->advanceSkill("weapon smithing", 10);
    Player->advanceSkill("chemistry", 10);
    Player->advanceSkill("physics", 10);
    Player->advanceSkill("leatherworking", 20);
    Player->advanceSkill("carpentry", 10);
    Player->advanceSkill("wood crafting", 10);
    Player->advanceSkill("gem crafting", 20);
    Player->advanceSkill("sculpture", 15);
}

/////////////////////////////////////////////////////////////////////////////
void SetUpInventory()
{
    object material = clone_object("/lib/instances/items/materials/metal/admantite.c");
    material->set("quantity", 5);
    move_object(material, Player);

    material = clone_object("/lib/instances/items/materials/metal/admantite.c");
    material->set("quantity", 6);
    move_object(material, Player);

    material = clone_object("/lib/instances/items/materials/metal/steel.c");
    material->set("quantity", 10);
    move_object(material, Player);

    material = clone_object("/lib/instances/items/materials/metal/iron.c");
    material->set("quantity", 3);
    move_object(material, Player);

    material = clone_object("/lib/instances/items/materials/metal/iron.c");
    material->set("quantity", 5);
    move_object(material, Player);

    material = clone_object("/lib/instances/items/materials/wood/koa.c");
    material->set("quantity", 5);
    move_object(material, Player);

    material = clone_object("/lib/instances/items/materials/leather/pegasus-leather.c");
    material->set("quantity", 5);
    move_object(material, Player);

    material = clone_object("/lib/instances/items/materials/metal/gold.c");
    material->set("quantity", 3);
    move_object(material, Player);

    material = clone_object("/lib/instances/items/materials/metal/platinum.c");
    material->set("quantity", 3);
    move_object(material, Player);

    material = clone_object("/lib/instances/items/materials/metal/galvorn.c");
    material->set("quantity", 3);
    move_object(material, Player);

    material = clone_object("/lib/instances/items/materials/crystal/ruby.c");
    material->set("quantity", 5);
    move_object(material, Player);
}

/////////////////////////////////////////////////////////////////////////////
void SetUpResearch()
{
    Player->addResearchPoints(20);
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftCommonMetal.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftGems.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftRareGems.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftUncommonMetal.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftAlloy.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftRareMetal.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftPreciousMetal.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftMythicMetal.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftLeather.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftExoticLeather.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftCommonWood.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftUncommonWood.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/materials/craftRareWood.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/weapons/craftWeapons.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/weapons/swords/craftBasicSwords.c"));
    ExpectTrue(Player->initiateResearch("lib/instances/research/crafting/weapons/swords/craftLongSwords.c"));
}

/////////////////////////////////////////////////////////////////////////////
void CraftSword()
{
    // This method navigates through the crafting menus to generate an
    // appropriate sword for this test.
    command("1", Player);
    command("1", Player);
    command("1", Player);
    command("6", Player);
    command("25", Player);
    command("2", Player);
    command("11", Player);
    command("1", Player);
    command("25", Player);
    command("2", Player);
    command("15", Player);
    command("25", Player);
    command("3", Player);
    command("9", Player);
    command("1", Player);
    command("12", Player);
    command("2", Player);
    command("16", Player);
    command("3", Player);
    command("23", Player);
    command("11", Player);
    command("4", Player);
    command("13", Player);
    command("2", Player);
    command("35", Player);
    command("1", Player);
    command("25", Player);
    command("27", Player);
}

/////////////////////////////////////////////////////////////////////////////
public nomask mapping getMaterialsOnHand()
{
    mapping ret = ([]);
    object *inventory = filter(deep_inventory(Player),
        (: (member(inherit_list($1), "lib/items/material.c") > -1) :));

    if (sizeof(inventory))
    {
        foreach(object item in inventory)
        {
            string type = item->query("class");
            string material = item->query("blueprint");
            if (!member(ret, type))
            {
                ret[type] = ([]);
            }
            if (!member(ret[type], material))
            {
                ret[type][material] = 0;
            }
            ret[type][material] += item->query("quantity");
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    Selector = clone_object("/lib/modules/crafting/selectMaterialsSelector.c");
    Selector->setItem("long sword");
    Selector->setType("weapons");
    Selector->setSubType("swords");

    Player = clone_object("/lib/tests/support/services/mockPlayer.c");
    Player->Name("bob");
    Player->addCommands();

    SetUpSkills();
    SetUpResearch();
    SetUpInventory();
    move_object(Selector, Player);
    move_object(Player, "/lib/tests/support/environment/fakeEnvironment.c");
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    destruct(Player);
    destruct(Selector);
}

/////////////////////////////////////////////////////////////////////////////
void CraftSelectedOptionBecomesEnabledWhenAllCriteriaMet()
{
    Selector->initiateSelector(Player);
    ExpectSubStringMatch("31mCraft Selected Long sword",
        Player->caughtMessage());

    CraftSword();

    ExpectSubStringMatch("32mCraft Selected Long sword",
        Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void ChoosingCraftSelectedFailsWhenDisabled()
{
    Selector->initiateSelector(Player);
    string priorMessage = Player->caughtMessage();

    command("5", Player);
    ExpectEq(priorMessage, Player->caughtMessage());
}

/////////////////////////////////////////////////////////////////////////////
void CraftingASwordGeneratesTheCorrectItemAndReducesMaterials()
{
    Selector->initiateSelector(Player);

    ExpectFalse(present("long sword", Player));
    ExpectEq((["crystal": (["ruby": 5]),
        "leather": (["pegasus leather": 5]),
        "metal": (["admantite": 11, 
                   "galvorn": 3,
                   "gold": 3,
                   "iron": 8,
                   "platinum": 3,
                   "steel": 10 ]),
        "wood": (["koa": 5]) ]), getMaterialsOnHand());

    CraftSword();
    command("5", Player);
    ExpectTrue(present("long sword", Player));

    ExpectEq((["crystal":(["ruby":2]),
        "leather" : (["pegasus leather":4]),
        "metal" : (["admantite":5,
            "galvorn" : 1,
            "gold" : 2,
            "iron" : 8,
            "platinum" : 2,
            "steel" : 10]),
        "wood": (["koa":4])]), getMaterialsOnHand());
}