//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
#include "/lib/include/itemFormatters.h"

/////////////////////////////////////////////////////////////////////////////
public nomask string decorate(string text, string textClass, string type, string configuration)
{
    string ret = 0;
    if (member(decorators, type) && member(decorators[type], textClass) &&
        member(decorators[type][textClass], configuration))
    {
        ret = decorators[type][textClass][configuration];
    }

    ret = ret ? (ret + text + "\x1b[0m") : text;
    return ret;
}
