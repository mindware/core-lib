//*****************************************************************************
// Class: modifierObject
// File Name: modifierObject.c
//
// Copyright (c) 2018 - Allen Cummings, Realms MUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/items/item.c";

/////////////////////////////////////////////////////////////////////////////
public nomask mixed query(string element)
{
    return "item"::query(element);
}

/////////////////////////////////////////////////////////////////////////////
public int registerModifierWithTargetList(object *targetList)
{
    int ret = 0;
    if(targetList && pointerp(targetList) && sizeof(targetList) &&
       !member(itemData, "registration list"))
    {
        itemData["registration list"] = ({ });
        
        foreach(object target : targetList)
        {                     
            if(target && function_exists("registerObjectAsInventory", target))
            {
                itemData["registration list"] += ({ target });
                target->registerObjectAsInventory(this_object());
            }
        }
        ret = sizeof(itemData["registration list"]);
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public int unregisterModifierFromTargetList()
{
    int ret = 0;
    if(member(itemData, "registration list") && 
       pointerp(itemData["registration list"]) && 
       sizeof(itemData["registration list"]))
    {
        object *targetList = itemData["registration list"];
        foreach(object target : targetList)
        {                     
            if(target && function_exists("unregisterObjectAsInventory", target))
            {
                target->unregisterObjectAsInventory(this_object());
            }
        }
        m_delete(itemData, "registration list");
        ret = 1;
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask varargs int set(string element, mixed data)
{
    int ret = 0;
    if(element && stringp(element))
    {
        ret = 1;
        
        switch(element)
        {
            case "fully qualified name":
            {
                if(data && stringp(data))
                {
                    itemData[element] = data;
                    ret = 1;                  
                }
                else
                {
                    ret = 0;
                    raise_error("modifierObject: The passed 'fully qualified "
                        "name' must be a string.\n");
                }
                break;
            }
            case "registration list":
            {
                unregisterModifierFromTargetList();
                ret = registerModifierWithTargetList(data);
                if(!ret)
                {
                    raise_error("modifierObject: The passed 'registration list' "
                        "must be an object array.\n"); 
                }
                break;
            }
            default:
            {
                string bonusToCheck = 0;
                if (sscanf(element, "penalty to %s", bonusToCheck))
                {
                    ret = isValidBonus(bonusToCheck, data);
                    if (ret)
                    {
                        itemData[sprintf("bonus %s", bonusToCheck)] = -data;
                    }
                }
                ret = "item"::set(element, data);
            }
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public varargs int drop(int silently)
{
    // By default, these aren't dropable.
    return 1; 
}

/////////////////////////////////////////////////////////////////////////////
public nomask string fullyQualifiedName()
{
    string ret = query("fully qualified name");
    if(!ret)
    {
        ret = program_name(this_object());
    }
    return ret;
}


