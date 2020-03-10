//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";

object Resource;
object Player;
object Environment;

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    Player = clone_object("/lib/tests/support/services/mockPlayer.c");
    Player->Name("bob");
    Player->addCommands();
    Player->colorConfiguration("none");
    Player->charsetConfiguration("ascii");

    Environment = clone_object("/lib/tests/support/environment/harvestRoom.c");
    move_object(Player, Environment);

    Resource = clone_object("/lib/environment/harvestableResource.c");
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    destruct(Resource);
    destruct(Player);
    destruct(Environment);
}

/////////////////////////////////////////////////////////////////////////////
void SettingInvalidResourceFileThrowsError()
{
    string error = catch (Resource->setup("alder", 25, 
        "/lib/environment/environment.c", "description", ({ "tree" })));

    ExpectEq("*EnvironmentalElement: The resource "
        "\"/lib/environment/environment.c\" must exist and be clonable.\n", 
        error);
}

/////////////////////////////////////////////////////////////////////////////
void CanSetUpHarvestableResource()
{
    Resource->setup("yew", 25, "/lib/instances/items/materials/wood/yew.c",
        "a heavily-forested stand of yew trees. Several trees remain",
        ({ "conifer", "evergreen", "yew tree", "tree" }));

    Resource->resetQuantity(Environment);
    ExpectEq("Name: Yew\n"
        "There are 25 yew available for harvest.\n", 
        Resource->getHarvestStatistics(Environment, Player));
}
