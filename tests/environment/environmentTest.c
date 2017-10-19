//*****************************************************************************
// Copyright (c) 2017 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";

object Environment;
object Dictionary;

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    Dictionary = load_object("/lib/dictionaries/environmentDictionary.c");
    Environment = clone_object("/lib/tests/support/environment/testEnvironment.c");
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    destruct(Environment);
    destruct(Dictionary);
}

/////////////////////////////////////////////////////////////////////////////
void DefaultDescriptionDisplaysCorrectlyForTerrain()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    Environment->testAddFeature("/lib/tests/support/environment/fakeSimpleFeature.c", "south");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "west");
    Environment->testAddFeature("fake feature", "east");
    Environment->testAddItem("/lib/tests/support/environment/fakeItem.c", "north");

    ExpectSubStringMatch("a forest. To the south you see a dark and foreboding cave largely obscured by foliage. To the north, west and east you see a stand of majestic oak trees with branches laden with acorns. To the north you see a sign.",
        Environment->long());
}

/////////////////////////////////////////////////////////////////////////////
void BuildingWithoutExitDisplaysCorrectly()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddBuilding("/lib/tests/support/environment/fakeBuilding.c", "north");
    Environment->testAddFeature("/lib/tests/support/environment/fakeSimpleFeature.c", "south");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "west");
    Environment->testAddFeature("fake feature", "east");
    Environment->testAddItem("/lib/tests/support/environment/fakeItem.c", "north");

    ExpectSubStringMatch("a forest. To the south you see a dark and foreboding cave largely obscured by foliage. To the west and east you see a stand of majestic oak trees with branches laden with acorns. To the north you see a sign. To the north you see a building.*no obvious exits",
        Environment->long());
}

/////////////////////////////////////////////////////////////////////////////
void BuildingWithExitDisplaysCorrectly()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddBuilding("/lib/tests/support/environment/fakeBuilding.c", "north", "/lib/tests/support/environment/toLocation.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeSimpleFeature.c", "south");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "west");
    Environment->testAddFeature("fake feature", "east");
    Environment->testAddItem("/lib/tests/support/environment/fakeItem.c", "north");

    ExpectSubStringMatch("a forest. To the south you see a dark and foreboding cave largely obscured by foliage. To the west and east you see a stand of majestic oak trees with branches laden with acorns. To the north you see a sign. To the north you see a building.*one obvious exit: north",
        Environment->long());
}
/////////////////////////////////////////////////////////////////////////////
void DefaultDescriptionDisplaysCorrectlyForInteriors()
{
    Environment->testSetInterior("/lib/tests/support/environment/fakeInterior.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeInteriorFeature.c", "north");

    ExpectSubStringMatch("a stone hallway. To the north you see an impressive tapestry of Tantor the Unclean dueling an undead unicorn with his trusty plunger.",
        Environment->long());
}

/////////////////////////////////////////////////////////////////////////////
void IsEnvironmentalElementReturnsFalseWhenElementNotInEnvironment()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");

    ExpectFalse(Environment->isEnvironmentalElement("raddish"));
}

/////////////////////////////////////////////////////////////////////////////
void IsEnvironmentalElementReturnsTrueWhenElementInEnvironment()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");

    ExpectTrue(Environment->isEnvironmentalElement("fake feature"));
}

/////////////////////////////////////////////////////////////////////////////
void IsEnvironmentalElementReturnsTrueWhenAliasInEnvironment()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");

    ExpectTrue(Environment->isEnvironmentalElement("oak"), "oak is alias");
    ExpectTrue(Environment->isEnvironmentalElement("stand"), "stand is alias");
    ExpectTrue(Environment->isEnvironmentalElement("stand of oak trees"), "stand of oak trees is alias");
}

/////////////////////////////////////////////////////////////////////////////
void IdReturnsFalseWhenElementNotInEnvironment()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");

    ExpectFalse(Environment->id("raddish"));
}

/////////////////////////////////////////////////////////////////////////////
void IdReturnsTrueWhenElementInEnvironment()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");

    ExpectTrue(Environment->id("fake feature"));
}

/////////////////////////////////////////////////////////////////////////////
void IdReturnsTrueWhenAliasInEnvironment()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");

    ExpectTrue(Environment->id("oak"), "oak is alias");
    ExpectTrue(Environment->id("stand"), "stand is alias");
    ExpectTrue(Environment->id("stand of oak trees"), "stand of oak trees is alias");
}

/////////////////////////////////////////////////////////////////////////////
void AliasesForStateNotAvailableWhenNotInProperState()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");

    ExpectTrue(Environment->isEnvironmentalElement("oak"), "oak is alias");
    ExpectTrue(Environment->isEnvironmentalElement("stand"), "stand is alias");
    ExpectTrue(Environment->isEnvironmentalElement("stand of oak trees"), "stand of oak trees is alias");
    ExpectFalse(Environment->isEnvironmentalElement("charred stumps"), "charred stumps is not alias");
    ExpectFalse(Environment->isEnvironmentalElement("tree stumps"), "tree stumps is not alias");
    ExpectFalse(Environment->isEnvironmentalElement("stumps"), "stumps is not alias");

    Environment->currentState("deadified");
    ExpectFalse(Environment->isEnvironmentalElement("oak"), "oak is not alias");
    ExpectFalse(Environment->isEnvironmentalElement("stand"), "stand is not alias");
    ExpectFalse(Environment->isEnvironmentalElement("stand of oak trees"), "stand of oak trees is not alias");
    ExpectTrue(Environment->isEnvironmentalElement("charred stumps"), "charred stumps is alias");
    ExpectTrue(Environment->isEnvironmentalElement("tree stumps"), "tree stumps is alias");
    ExpectTrue(Environment->isEnvironmentalElement("stumps"), "stumps is alias");
}

/////////////////////////////////////////////////////////////////////////////
void LongShowsInventory()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    object person = clone_object("/lib/realizations/player.c");
    person->Name("dwight");
    move_object(person, Environment);

    object weapon = clone_object("/lib/items/weapon.c");
    weapon->set("name", "blah");
    weapon->set("weapon type", "long sword");
    weapon->set("short", "Sword of Blah");
    move_object(weapon, Environment);

    ExpectSubStringMatch("Dwight", Environment->long());
    ExpectSubStringMatch("Sword of Blah", Environment->long());
}

/////////////////////////////////////////////////////////////////////////////
void LongShowsNoObviousExits()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");

    ExpectSubStringMatch("-=-=- There are no obvious exits",
        Environment->long());
}

/////////////////////////////////////////////////////////////////////////////
void LongShowsOneObviousExit()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    Environment->testAddExit("north", "/some/path.c");
    ExpectSubStringMatch("-=-=- There is one obvious exit: north",
        Environment->long());
}

/////////////////////////////////////////////////////////////////////////////
void LongShowsTwoObviousExits()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    Environment->testAddExit("north", "/some/path.c");
    Environment->testAddExit("south", "/some/path2.c");
    ExpectSubStringMatch("-=-=- There are two obvious exits: [a-z]+, [a-z]+",
        Environment->long());
}

/////////////////////////////////////////////////////////////////////////////
void LongShowsManyObviousExits()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    Environment->testAddExit("north", "/some/path.c");
    Environment->testAddExit("south", "/some/path2.c");
    Environment->testAddExit("east", "/some/path3.c");
    Environment->testAddExit("west", "/some/path4.c");
    Environment->testAddExit("up", "/some/path5.c");

    ExpectSubStringMatch("-=-=- There are five obvious exits: [a-z, ]+",
        Environment->long());
}

/////////////////////////////////////////////////////////////////////////////
void LongOnlyShowsExitsWhenInCorrectState()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    Environment->testAddExit("north", "/some/path.c");
    Environment->testAddExit("south", "/some/path2.c", "weasels");

    ExpectSubStringMatch("-=-=- There is one obvious exit: north",
        Environment->long());

    Environment->currentState("weasels");
    ExpectSubStringMatch("-=-=- There are two obvious exits: [a-z]+, [a-z]+",
        Environment->long());
}

/////////////////////////////////////////////////////////////////////////////
void LongRaisesErrorWhenTerrainOrInteriorNotSete()
{
    string expected = "*ERROR in environment.c: Either a valid terrain or interior must be set.\n";
    string err = catch (Environment->long());
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void CanMoveToAttachedLocation()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    Environment->testAddExit("north", "/lib/tests/support/environment/toLocation.c");

    object person = clone_object("/lib/realizations/player.c");
    person->Name("dwight");
    move_object(person, Environment);
    ExpectEq("lib/tests/support/environment/testEnvironment.c", program_name(environment(person)));

    command("north", person);
    ExpectEq("lib/tests/support/environment/toLocation.c", program_name(environment(person)));
}

/////////////////////////////////////////////////////////////////////////////
void MovesToLocationForAppropriateState()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    Environment->testAddExit("north", "/lib/tests/support/environment/toLocation.c");
    Environment->testAddExit("north", "/lib/tests/support/environment/fromLocation.c", "deadified");
    Environment->currentState("deadified");

    object person = clone_object("/lib/realizations/player.c");
    person->Name("dwight");
    move_object(person, Environment);
    ExpectEq("lib/tests/support/environment/testEnvironment.c", program_name(environment(person)));

    command("north", person);
    ExpectEq("lib/tests/support/environment/fromLocation.c", program_name(environment(person)));
}

/////////////////////////////////////////////////////////////////////////////
void MovesToDefaultLocationWhenNotDefinedInState()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    Environment->testAddExit("north", "/lib/tests/support/environment/toLocation.c");
    Environment->testAddExit("north", "/lib/tests/support/environment/fromLocation.c", "deadified");
    Environment->currentState("otherstate");

    object person = clone_object("/lib/realizations/player.c");
    person->Name("dwight");
    move_object(person, Environment);
    ExpectEq("lib/tests/support/environment/testEnvironment.c", program_name(environment(person)));

    command("north", person);
    ExpectEq("lib/tests/support/environment/toLocation.c", program_name(environment(person)));
}

/////////////////////////////////////////////////////////////////////////////
void DefaultMoveLocationsStillAvailableWhenInDifferentStateAndNotOverridden()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    Environment->testAddExit("south", "/lib/tests/support/environment/toLocation.c");
    Environment->testAddExit("north", "/lib/tests/support/environment/fromLocation.c", "deadified");
    Environment->currentState("deadified");

    object person = clone_object("/lib/realizations/player.c");
    person->Name("dwight");
    move_object(person, Environment);
    ExpectEq("lib/tests/support/environment/testEnvironment.c", program_name(environment(person)));

    command("south", person);
    ExpectEq("lib/tests/support/environment/toLocation.c", program_name(environment(person)));
}

/////////////////////////////////////////////////////////////////////////////
void AddFeatureRaisesErrorWhenUnableToRegiterObject()
{
    string expected = "*ERROR in environment.c: Unable to register '/some/bad/path.c'. Be sure that the file exists and inherits a valid environmental element.\n";
    string err = catch (Environment->testAddFeature("/some/bad/path.c", "north"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void AddFeatureRaisesErrorOnNamingConflict()
{
    string expected = "*ERROR in environment.c: Unable to register '/lib/tests/support/environment/fakeFeatureDuplicate.c'. A conflicting item with that name already exists.\n";
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    string err = catch (Environment->testAddFeature("/lib/tests/support/environment/fakeFeatureDuplicate.c", "north"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void AddFeatureRaisesErrorOnFailure()
{
    string expected = "*ERROR in environment.c: 'fake forest' is not a valid feature.\n";
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    string err = catch (Environment->testAddFeature("fake forest", "north"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void AddItemRaisesErrorWhenUnableToRegiterObject()
{
    string expected = "*ERROR in environment.c: Unable to register '/some/bad/path.c'. Be sure that the file exists and inherits a valid environmental element.\n";
    string err = catch (Environment->testAddItem("/some/bad/path.c", "north"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void AddItemRaisesErrorOnNamingConflict()
{
    string expected = "*ERROR in environment.c: Unable to register '/lib/tests/support/environment/fakeItemDuplicate.c'. A conflicting item with that name already exists.\n";
    Environment->testAddItem("/lib/tests/support/environment/fakeItem.c", "north");
    string err = catch (Environment->testAddItem("/lib/tests/support/environment/fakeItemDuplicate.c", "north"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void AddItemRaisesErrorOnFailure()
{
    string expected = "*ERROR in environment.c: 'fake forest' is not a valid item.\n";
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    string err = catch (Environment->testAddItem("fake forest", "north"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void AddExitRaisesErrorOnFailure()
{
    string expected = "*ERROR in environment.c: 'north' must be a string and '0' must be a valid destination file.\n";
    string err = catch (Environment->testAddExit("north"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void AddBuildingRaisesErrorWhenUnableToRegiterObject()
{
    string expected = "*ERROR in environment.c: Unable to register '/some/bad/path.c'. Be sure that the file exists and inherits a valid environmental element.\n";
    string err = catch (Environment->testAddBuilding("/some/bad/path.c", "north"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void AddBuildingRaisesErrorOnNamingConflict()
{
    string expected = "*ERROR in environment.c: Unable to register '/lib/tests/support/environment/fakeBuildingDuplicate.c'. A conflicting item with that name already exists.\n";
    Environment->testAddBuilding("/lib/tests/support/environment/fakeBuilding.c", "north");
    string err = catch (Environment->testAddBuilding("/lib/tests/support/environment/fakeBuildingDuplicate.c", "north"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void AddBuildingRaisesErrorOnFailure()
{
    string expected = "*ERROR in environment.c: 'fake forest' is not a valid building with a valid location.\n";
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    string err = catch (Environment->testAddBuilding("fake forest", "north"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void SetTerrainRaisesErrorWhenUnableToRegiterObject()
{
    string expected = "*ERROR in environment.c: Unable to register '/some/bad/path.c'. Be sure that the file exists and inherits a valid environmental element.\n";
    string err = catch (Environment->testSetTerrain("/some/bad/path.c"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void SetTerrainRaisesErrorOnNamingConflict()
{
    string expected = "*ERROR in environment.c: Unable to register '/lib/tests/support/environment/fakeTerrainDuplicate.c'. A conflicting item with that name already exists.\n";
    Dictionary->registerElement("/lib/tests/support/environment/fakeTerrain.c", "terrain");
    string err = catch (Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrainDuplicate.c"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void SetTerrainRaisesErrorOnFailure()
{
    string expected = "*ERROR in environment.c: 'fake sign' is not a valid terrain.\n";
    Environment->testAddItem("/lib/tests/support/environment/fakeItem.c", "north");
    string err = catch (Environment->testSetTerrain("fake sign"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void SetTerrainCanOnlyBeCalledOnce()
{
    string expected = "*ERROR in environment.c: Only one terrain OR one interior can be set.\n";
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    string err = catch (Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void SetTerrainCannotBeCalledIfInteriorSet()
{
    string expected = "*ERROR in environment.c: Only one terrain OR one interior can be set.\n";
    Environment->testSetInterior("/lib/tests/support/environment/fakeInterior.c");
    string err = catch (Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void SetInteriorCannotBeCalledIfTerrainSet()
{
    string expected = "*ERROR in environment.c: Only one terrain OR one interior can be set.\n";
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    string err = catch (Environment->testSetInterior("/lib/tests/support/environment/fakeInterior.c"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void SetInteriorRaisesErrorWhenUnableToRegiterObject()
{
    string expected = "*ERROR in environment.c: Unable to register '/some/bad/path.c'. Be sure that the file exists and inherits a valid environmental element.\n";
    string err = catch (Environment->testSetInterior("/some/bad/path.c"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void SetInteriorRaisesErrorOnNamingConflict()
{
    string expected = "*ERROR in environment.c: Unable to register '/lib/tests/support/environment/fakeInteriorDuplicate.c'. A conflicting item with that name already exists.\n";
    Dictionary->registerElement("/lib/tests/support/environment/fakeInterior.c", "interior");
    string err = catch (Environment->testSetInterior("/lib/tests/support/environment/fakeInteriorDuplicate.c"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void SetInteriorRaisesErrorOnFailure()
{
    string expected = "*ERROR in environment.c: 'fake sign' is not a valid interior.\n";
    Environment->testAddItem("/lib/tests/support/environment/fakeItem.c", "north");
    string err = catch (Environment->testSetInterior("fake sign"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void SetInteriorCanOnlyBeCalledOnce()
{
    string expected = "*ERROR in environment.c: Only one terrain OR one interior can be set.\n";
    Environment->testSetInterior("/lib/tests/support/environment/fakeInterior.c");
    string err = catch (Environment->testSetInterior("/lib/tests/support/environment/fakeInterior.c"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void AddObjectRaisesErrorOnFailure()
{
    string expected = "*ERROR in environment.c: '/bad/path.c' is not a valid file.\n";
    string err = catch (Environment->testAddObject("/bad/path.c"));
    ExpectEq(expected, err);
}

/////////////////////////////////////////////////////////////////////////////
void AddObjectToDefaultStateCreatesObjectOnReset()
{
    Environment->testAddObject("/lib/items/weapon.c");
    ExpectFalse(sizeof(all_inventory(Environment)));
    Environment->reset();
    ExpectEq(1, sizeof(all_inventory(Environment)));
}

/////////////////////////////////////////////////////////////////////////////
void SetupIsOnlyCalledOnceByReset()
{
    Environment->reset();
    ExpectEq(1, Environment->setupCalled());
    Environment->reset();
    ExpectEq(1, Environment->setupCalled());
}

/////////////////////////////////////////////////////////////////////////////
void RepeatedResetsDoNotCreateMultiplesOfSameObject()
{
    Environment->testAddObject("/lib/items/weapon.c");
    ExpectFalse(sizeof(all_inventory(Environment)));
    Environment->reset();
    ExpectEq(1, sizeof(all_inventory(Environment)));
    Environment->reset();
    ExpectEq(1, sizeof(all_inventory(Environment)));
}

/////////////////////////////////////////////////////////////////////////////
void ResetWillRecreateOnlyObjectsThatAreNotPresent()
{
    Environment->testAddObject("/lib/items/weapon.c");
    Environment->testAddObject("/lib/items/armor.c");
    ExpectFalse(sizeof(all_inventory(Environment)));
    Environment->reset();
    ExpectEq(2, sizeof(all_inventory(Environment)));
    destruct(all_inventory(Environment)[0]);
    ExpectEq(1, sizeof(all_inventory(Environment)));
    Environment->reset();
    ExpectEq(2, sizeof(all_inventory(Environment)));
    ExpectTrue(present_clone("/lib/items/weapon.c", Environment));
    ExpectTrue(present_clone("/lib/items/armor.c", Environment));
}

/////////////////////////////////////////////////////////////////////////////
void OnlyObjectsForProperStateArePresent()
{
    object stateMachine = load_object("/lib/core/stateMachine.c");
    Environment->setStateMachine(stateMachine);
    Environment->testAddObject("/lib/items/weapon.c");
    Environment->testAddObject("/lib/items/armor.c", "blah");
    Environment->testAddObject("/lib/items/item.c", "blah2");

    Environment->reset();
    ExpectEq(1, sizeof(all_inventory(Environment)), "1 element visible for default state");
    ExpectTrue(present_clone("/lib/items/weapon.c", Environment), "weapon present");

    Environment->onStateChanged(stateMachine, "blah");
    ExpectEq(2, sizeof(all_inventory(Environment)), "2 elements visible for 'blah' state");
    ExpectTrue(present_clone("/lib/items/weapon.c", Environment), "weapon present");
    ExpectTrue(present_clone("/lib/items/armor.c", Environment), "armor present");

    Environment->onStateChanged(stateMachine, "blah2");
    ExpectEq(2, sizeof(all_inventory(Environment)), "2 elements visible for 'blah2' state");
    ExpectTrue(present_clone("/lib/items/weapon.c", Environment), "weapon present");
    ExpectTrue(present_clone("/lib/items/item.c", Environment), "item present");
}

/////////////////////////////////////////////////////////////////////////////
void CallerForOnStateChangedMustBeCurrentlySetStateMachine()
{
    object stateMachine = load_object("/lib/core/stateMachine.c");
    Environment->setStateMachine(stateMachine);
    Environment->testAddObject("/lib/items/weapon.c");
    Environment->testAddObject("/lib/items/armor.c", "blah");
    Environment->testAddObject("/lib/items/item.c", "blah2");

    Environment->reset();
    ExpectEq(1, sizeof(all_inventory(Environment)), "1 element visible for default state");
    ExpectTrue(present_clone("/lib/items/weapon.c", Environment), "weapon present");

    Environment->onStateChanged(this_object(), "blah");
    ExpectEq(1, sizeof(all_inventory(Environment)), "1 element visible if state machine not initiator");
    ExpectTrue(present_clone("/lib/items/weapon.c", Environment), "weapon present");
    ExpectFalse(present_clone("/lib/items/armor.c", Environment), "armor present");

    Environment->onStateChanged(stateMachine, "blah");
    ExpectEq(2, sizeof(all_inventory(Environment)), "2 elements visible for 'blah2' state");
    ExpectTrue(present_clone("/lib/items/weapon.c", Environment), "weapon present");
    ExpectTrue(present_clone("/lib/items/armor.c", Environment), "armor present");
}

/////////////////////////////////////////////////////////////////////////////
void SetAdditionalLongDescriptionAddsCustomLong()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    Environment->testSetAdditionalLongDescription("This is an extra message");
    ExpectSubStringMatch("a forest. To the north you see a stand of majestic oak trees with branches laden with acorns. This is an extra message",
        Environment->long());
}

/////////////////////////////////////////////////////////////////////////////
void AdditionalLongDescriptionAddsCustomLongOnlyToCorrectState()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddFeature("/lib/tests/support/environment/fakeFeature.c", "north");
    Environment->testSetAdditionalLongDescription("This is an extra message", "blah");
    ExpectSubStringMatch("a forest. To the north you see a stand of majestic oak trees with branches laden with acorns.\n",
        Environment->long());

    Environment->currentState("blah");
    ExpectSubStringMatch("This is an extra message",
        Environment->long());
}

/////////////////////////////////////////////////////////////////////////////
void ParseEfunCallForCallOtherWithKeyDisplaysInLong()
{
    Environment->testSetTerrain("/lib/tests/support/environment/fakeTerrain.c");
    Environment->testAddObject("/lib/tests/support/items/testSword.c");
    Environment->testSetAdditionalLongDescription("##call_other::key::/lib/tests/support/items/testSword.c::swordMessage");
    Environment->reset();

    ExpectTrue(present_clone("/lib/tests/support/items/testSword.c", Environment), "weapon present");
    ExpectSubStringMatch("a forest. You can feel a weaselish buzz in the air",
        Environment->long());

}
