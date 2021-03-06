//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/realizations/monster.c";
virtual inherit "/lib/modules/conversations.c";
virtual inherit "/lib/modules/crafting.c";

private object leader;

/////////////////////////////////////////////////////////////////////////////
public nomask int isRealizationOfNpc()
{
    return 1;
}

/////////////////////////////////////////////////////////////////////////////
public nomask void setLeader(object player)
{
    if (objectp(player))
    {
        leader = player;

        object partyDictionary = getDictionary("party");
        if (!leader->getParty())
        {
            partyDictionary->createParty(
                sprintf("%s's Party", capitalize(leader->RealName())), leader);
        }

        object partyObj = leader->getParty();
        if (partyObj)
        {
            partyObj->addNPC(this_object());
        }
    }
}

/////////////////////////////////////////////////////////////////////////////
public nomask string partyName()
{
    string ret = 0;
    if (leader)
    {
        ret = leader->partyName() ? leader->partyName() : leader->RealName();
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask object getParty()
{
    object ret = this_object();
    if (leader && leader->getParty())
    {
        ret = leader->getParty();
    }
    return ret;
}
