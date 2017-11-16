//*****************************************************************************
// Copyright (c) 2017 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/buildings/baseShop.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    Name("luthier");

    addTimeOfDayDescription("dawn", ({
        ". It has a closed sign in the window. A light is shining out from the windows"
    }));
    addTimeOfDayDescription("morning", ({ ". There is an open sign in the window" }));
    addTimeOfDayDescription("noon", ({ ". There is an open sign in the window" }));
    addTimeOfDayDescription("afternoon", ({
        ". There is an open sign in the window" }));
    addTimeOfDayDescription("evening", ({
        ". The open sign in the window is lit by the waning day's light" }));
    addTimeOfDayDescription("dusk", ({
        ". A sign in the window states that it is open and a light invitingly shines out into the street from its window" }));
    addTimeOfDayDescription("night", ({
        " with a closed sign in the window looking in upon an unlit shop" }));
    addTimeOfDayDescription("midnight", ({
        " with a closed sign in the window looking in upon an unlit shop" }));
    addSeasonDescription("winter", ({ " that has a layer of snow sitting atop it" }));
    addSeasonDescription("spring", ({ " that has new springs of ivy just beginning to climb the building" }));
    addSeasonDescription("summer", ({ " that has ivy climbing high up its walls" }));
    addSeasonDescription("autumn", ({ " with ivy whose leaves are turning a deep red color still clinging to the walls" }));

    addDescriptionTemplate("a luthier's shop in a wooden building with a large lute-shaped sign");
}