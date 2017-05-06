//*****************************************************************************
// Class: biological
// File Name: biological.c
//
// Copyright (c) 2011 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//
// Description: This object encapsulates all functionality surrounding the
//              biological aspects of living creatures - specifically
//              how much they have consumed and the toxicity of said 
//              consumables.
//
//*****************************************************************************
virtual inherit "/lib/core/thing.c";

private int intoxicated;
private int stuffed;
private int drugged;
private int soaked;
private int headache;

private nosave int maxHeadache = 30;

//-----------------------------------------------------------------------------
// Method: validBiological
// Description: The valid* methods are admittedly a bit of a misnomer. The real
//              intent is to list all of the calculated bonuses used in combat
//              that are controlled by this object. It is only accessible
//              within the inheritance tree.
//
// Returns: the list of bonus methods controlled by this object
//-----------------------------------------------------------------------------
static nomask string *validBiological()
{
    return ({ "bonus to intoxicated", "bonus to stuffed", "bonus to drugged",
              "bonus to soaked", "bonus headache" });
}

//-----------------------------------------------------------------------------
// Method: biologicalNotification
// Description: This method is used to broadcast all biological-related events
//              as they occur. See events.c for details.
//
// Parameters: event - the event that has occured. 
//-----------------------------------------------------------------------------
private nomask void biologicalNotification(string event)
{
    object eventObj = getService("events");
    
    if(event && stringp(event) && eventObj && objectp(eventObj))
    {
        eventObj->notify(event);
    }
}

//-----------------------------------------------------------------------------
// Method: Intoxicated
// Description: This property will allow other entities to get/set the
//              intoxicated level. if intoxLevel is passed, the intoxicated
//              value is altered to be that value.
//
// Parameters: intoxLevel - the optional value to apply
//
// Returns: the level of intoxication
//-----------------------------------------------------------------------------   
public varargs int Intoxicated(int intoxLevel)
{
    if(intoxLevel && intp(intoxLevel) && (intoxLevel > 0))
    {
        intoxicated = intoxLevel;
        biologicalNotification("onIntoxicationChanged");
    }
    return intoxicated;
}

//-----------------------------------------------------------------------------
// Method: calculateBiologicalModifier
// Description: This internal method will apply valueToAdd to the passed-in 
//              originalValue. If the passed valueToAdd is negative, the added
//              value is normalized based on the old lib's functionality.
//
// Parameters: originalValue - the value of the bio type that will be modified
//             valueToAdd - the value to apply to originalValue
//
// Returns: the updated value of the bio stat
//-----------------------------------------------------------------------------
private nomask int calculateBiologicalModifier(int originalValue, int valueToAdd)
{
    int ret = intp(originalValue) ? originalValue : 0;
    if(valueToAdd && intp(valueToAdd))
    {
        ret += valueToAdd;
        
        if(ret < 0)
        {
            ret = 0;
        }
    }
    return ret;
}

//-----------------------------------------------------------------------------
// Method: addIntoxication
// Description: This method will apply intoxToAdd to the current intoxicated
//              value.
//
// Parameters: intoxToAdd - the value to apply to intoxicated
//
// Returns: the updated value of the bio stat
//-----------------------------------------------------------------------------
public nomask int addIntoxication(int intoxToAdd)
{
    int ret = 0;

    if(intoxToAdd && intp(intoxToAdd))
    {
        ret = 1;
        intoxicated = calculateBiologicalModifier(intoxicated, intoxToAdd);
        biologicalNotification("onIntoxicationChanged");
    }
    return ret;
}

//-----------------------------------------------------------------------------
// Method: Stuffed
// Description: This property will allow other entities to get/set the
//              stuffed level. if stuffedLevel is passed, the stuffed
//              value is altered to be that value.
//
// Parameters: stuffedLevel - the optional value to apply
//
// Returns: the level of stuffed
//-----------------------------------------------------------------------------   
public varargs int Stuffed(int stuffedLevel)
{
    if(stuffedLevel && intp(stuffedLevel) && (stuffedLevel > 0))
    {
        stuffed = stuffedLevel;
        biologicalNotification("onStuffedChanged");
    }
    return stuffed;
}

//-----------------------------------------------------------------------------
// Method: addStuffed
// Description: This method will apply stuffedLevel to the current stuffed
//              value.
//
// Parameters: stuffedLevel - the value to apply to stuffed
//
// Returns: the updated value of the bio stat
//-----------------------------------------------------------------------------
public nomask int addStuffed(int stuffedLevel)
{
    int ret = 0;
    if(stuffedLevel && intp(stuffedLevel))
    {
        ret = 1;
        stuffed = calculateBiologicalModifier(stuffed, stuffedLevel);
        biologicalNotification("onStuffedChanged");
    }
    return ret;
}

//-----------------------------------------------------------------------------
// Method: Drugged
// Description: This property will allow other entities to get/set the
//              drugged level. if druggedLevel is passed, the drugged
//              value is altered to be that value.
//
// Parameters: druggedLevel - the optional value to apply
//
// Returns: the level of drugged
//-----------------------------------------------------------------------------   
public varargs int Drugged(int druggedLevel)
{
    if(druggedLevel && intp(druggedLevel) && (druggedLevel > 0))
    {
        drugged = druggedLevel;
        biologicalNotification("onDruggedChanged");
    }
    return drugged;
}

//-----------------------------------------------------------------------------
// Method: addDrugged
// Description: This method will apply druggedLevel to the current drugged
//              value.
//
// Parameters: druggedLevel - the value to apply to drugged
//
// Returns: the updated value of the bio stat
//-----------------------------------------------------------------------------
public nomask int addDrugged(int druggedLevel)
{
    int ret = 0;
    if(druggedLevel && intp(druggedLevel))
    {
        ret = 1;
        drugged = calculateBiologicalModifier(drugged, druggedLevel);
        biologicalNotification("onDruggedChanged");
    }
    return ret;
}

//-----------------------------------------------------------------------------
// Method: Soaked
// Description: This property will allow other entities to get/set the
//              soaked level. if soakedLevel is passed, the soaked
//              value is altered to be that value.
//
// Parameters: soakedLevel - the optional value to apply
//
// Returns: the level of soaked
//-----------------------------------------------------------------------------   
public varargs int Soaked(int soakedLevel)
{
    if(soakedLevel && intp(soakedLevel) && (soakedLevel > 0))
    {
        soaked = soakedLevel;
        biologicalNotification("onSoakedChanged");
    }
    return soaked;
}

//-----------------------------------------------------------------------------
// Method: addSoaked
// Description: This method will apply soakedLevel to the current soaked
//              value.
//
// Parameters: soakedLevel - the value to apply to soaked
//
// Returns: the updated value of the bio stat
//-----------------------------------------------------------------------------
public nomask int addSoaked(int soakedLevel)
{
    int ret = 0;
    if(soakedLevel && intp(soakedLevel))
    {
        ret = 1;
        soaked = calculateBiologicalModifier(soaked, soakedLevel);
        biologicalNotification("onSoakedChanged");
    }
    return ret;
}

// TODO: Refactor these next four methods - tons of commonality

//-----------------------------------------------------------------------------
// Method: drinkAlcohol
// Description: This method should be executed by external entities every time
//              that a living attempts to consume an alcoholic beverage. When 
//              this occurs, it will determine whether or not the item can
//              be consumed based on attribute and equipment bonuses. It will
//              also handle the resolution of headache for intox/drug usage.
//
// Parameters: strengthOfDrink - the strength of the consumed item.
//
// Returns: true if the item can be consumed.
//-----------------------------------------------------------------------------
public nomask int drinkAlcohol(int strengthOfDrink)
{
    int ret = 0;
    int maxIntox = 0;

    foreach(string service : ({ "guilds", "races", "traits" }))
    {
        object serviceObject = getService(service);
        if(serviceObject && function_exists("biologicalModifier"))
        {
            maxIntox += serviceObject->biologicalModifier("intoxication");
        }
    }
    
    object attributes = getService("attributes");
    if(attributes)
    {
        maxIntox += attributes->Con() * 2;
    }
    
    object inventory = getService("inventory");
    if(inventory)
    {
        maxIntox += inventory->inventoryGetModifier("biological", 
            "bonus to intoxicated");
    }
    
    if((strengthOfDrink + Intoxicated()) > maxIntox)
    {
        notify_fail("You fail to reach the drink with your mouth.\n");
        biologicalNotification("onDrunk");
    }
    else
    {
        ret = 1;
        intoxicated += strengthOfDrink;
        if(intoxicated <= 0)
        {
            intoxicated = 0;
            printf("You are completely sober.\n");
            biologicalNotification("onSober");
        }
        else if(headache)
        {
            headache = 0;
            printf("Your headache disappears.\n");
            biologicalNotification("onDetoxified");
        }
    }    
    return ret;
}

//-----------------------------------------------------------------------------
// Method: consumeDrug
// Description: This method should be executed by external entities every time
//              that a living attempts to consume a 'drug' item. When 
//              this occurs, it will determine whether or not the item can
//              be consumed based on attribute and equipment bonuses. It will
//              also handle the resolution of headache for intox/drug usage.
//
// Parameters: strengthOfDrug - the strength of the consumed item.
//
// Returns: true if the item can be consumed.
//-----------------------------------------------------------------------------
public nomask int consumeDrug(int strengthOfDrug)
{
    int ret = 0;
    int maxDrugged = 0;

    foreach(string service : ({ "guilds", "races", "traits" }))
    {
        object serviceObject = getService(service);
        if(serviceObject && function_exists("biologicalModifier"))
        {
            maxDrugged += serviceObject->biologicalModifier("drugged");
        }
    }
    
    object attributes = getService("attributes");
    if(attributes)
    {
        maxDrugged += attributes->Con() * 2;
    }
    
    object inventory = getService("inventory");
    if(inventory)
    {
        maxDrugged += inventory->inventoryGetModifier("biological", 
            "bonus to drugged");
    }
    
    if((strengthOfDrug + Drugged()) > maxDrugged)
    {
        notify_fail("You fail to reach your mouth.\n");
        biologicalNotification("onWastedOnDrugs");
    }
    else
    {
        ret = 1;
        drugged += strengthOfDrug;
        if(drugged <= 0)
        {
            drugged = 0;
            printf("You are completely free of drugs.\n");
            biologicalNotification("onNoLongerDrugged");
        }
        else if(headache)
        {
            headache = 0;
            printf("Your headache disappears.\n");
            biologicalNotification("onDetoxified");
        }
    }    
    return ret;
}

//-----------------------------------------------------------------------------
// Method: drink
// Description: This method should be executed by external entities every time
//              that a living attempts to consume a non-alcoholic beverage.
//              When this occurs, it will determine whether or not the item can
//              be consumed based on attribute and equipment bonuses. 
//
// Parameters: strengthOfDrink - the strength of the consumed item.
//
// Returns: true if the item can be consumed.
//-----------------------------------------------------------------------------
public nomask int drink(int strengthOfDrink)
{
    int ret = 0;
    int maxSoak = 0;

    foreach(string service : ({ "guilds", "races", "traits" }))
    {
        object serviceObject = getService(service);
        if(serviceObject && function_exists("biologicalModifier"))
        {
            maxSoak += serviceObject->biologicalModifier("soaked");
        }
    }
    
    object attributes = getService("attributes");
    if(attributes)
    {
        maxSoak += attributes->Con() * 4;
    }
    
    object inventory = getService("inventory");
    if(inventory)
    {
        maxSoak += inventory->inventoryGetModifier("biological", 
            "bonus to soaked");
    }
    
    if((strengthOfDrink + Soaked()) > maxSoak)
    {
        notify_fail("You can't possibly drink that much right now!\n"
            "You feel crosslegged enough as it is.");
        biologicalNotification("onSoaked");
    }
    else
    {
        ret = 1;
        soaked += strengthOfDrink;
        if(soaked <= 0)
        {
            soaked = 0;
            printf("You feel a bit dry in the mouth.\n");
            biologicalNotification("onNoLongerSoaked");
        }
    }    
    return ret;
}

//-----------------------------------------------------------------------------
// Method: eat
// Description: This method should be executed by external entities every time
//              that a living attempts to consume a non-drug 'food'.
//              When this occurs, it will determine whether or not the item can
//              be consumed based on attribute and equipment bonuses. 
//
// Parameters: strengthOfFood - the strength of the consumed item.
//
// Returns: true if the item can be consumed.
//-----------------------------------------------------------------------------
public nomask int eat(int strengthOfFood)
{
    int ret = 0;
    int maxStuffed = 0;

    foreach(string service : ({ "guilds", "races", "traits" }))
    {
        object serviceObject = getService(service);
        if(serviceObject && function_exists("biologicalModifier"))
        {
            maxStuffed += serviceObject->biologicalModifier("stuffed");
        }
    }
    
    object attributes = getService("attributes");
    if(attributes)
    {
        maxStuffed += attributes->Con() * 4;
    }
    
    object inventory = getService("inventory");
    if(inventory)
    {
        maxStuffed += inventory->inventoryGetModifier("biological", 
            "bonus to stuffed");
    }
    
    if((strengthOfFood + Stuffed()) > maxStuffed)
    {
        notify_fail("This is much too rich for you right now! "
            "Perhaps something lighter?\n");
        biologicalNotification("onCannotEatMore");
    }
    else
    {
        ret = 1;
        stuffed += strengthOfFood;
        if(stuffed <= 0)
        {
            stuffed = 0;
            printf("Your stomach makes a rumbling sound.\n");
            biologicalNotification("onHungry");
        }
    }    
    return ret;
}

//-----------------------------------------------------------------------------
// Method: displayBiologicalMessage
// Description: This method parses and displays a message for use by 
//              drunk/drugged heartbeat processing.
//
// Parameters: message - the message to parse and display
//-----------------------------------------------------------------------------
private nomask void displayBiologicalMessage(string message)
{
    object parser = getMessageParser();
    if(parser)
    {
        int isSecondPerson = 1;
        string userMessage = parser->parseTargetInfo(message, "User", 
            this_object(), isSecondPerson);
        userMessage = parser->parseVerbs(userMessage, isSecondPerson);
        userMessage = parser->capitalizeSentences(userMessage);
        write(sprintf("%s\n", userMessage));
        
        isSecondPerson = 0;
        string everoneElseMessage = parser->parseTargetInfo(message, 
            "User", this_object(), isSecondPerson);
        everoneElseMessage = 
            parser->parseVerbs(everoneElseMessage, isSecondPerson);
        everoneElseMessage = 
            parser->capitalizeSentences(everoneElseMessage);
        say(sprintf("%s\n", everoneElseMessage));
    }
}

//-----------------------------------------------------------------------------
// Method: determineIfIntoxicationCausesAction
// Description: This method determines whether or not to display a message 
//              while this object bumbles around in a drunken stupor. It has a
//              chance to generate a message and pass it to the parser. 
//-----------------------------------------------------------------------------
private nomask void determineIfIntoxicationCausesAction()
{
    if(intoxicated && !random(50))
    {
        string *actions = ({ "hiccup", "stumble", "stagger", "lurch", "dither",
                             "falter", "pitch", "teeter", "sway", "wobble", 
                             "waver", "burp", "totter" });
        string message = sprintf("##UserName## ##Infinitive:%s## drunkenly.", 
            actions[random(sizeof(actions))]);
        
        displayBiologicalMessage(message);
    }
}

//-----------------------------------------------------------------------------
// Method: determineIfDruggedCausesAction
// Description: This method determines whether or not to display a message 
//              while this object bumbles around in a drugged haze. It has a
//              chance to generate a message and pass it to the parser. 
//-----------------------------------------------------------------------------
private nomask void determineIfDruggedCausesAction()
{
    if(intoxicated && !random(50))
    {
        string *actions = ({ "stumble", "stagger", "lurch", "dither",
                             "falter", "pitch", "teeter", "sway", "wobble", 
                             "waver", "totter" });
        string message = 
            sprintf("##UserName## ##Infinitive:%s## as though drugged.",
            actions[random(sizeof(actions))]);
        
        displayBiologicalMessage(message);
    }
}

//-----------------------------------------------------------------------------
// Method: haveHeadache
// Description: This method returns whether or not the object currently has a
//              headache.
//
// Returns: true if the object has a headache.
//-----------------------------------------------------------------------------
public nomask int haveHeadache()
{
    return headache > 0;
}

//-----------------------------------------------------------------------------
// Method: biologicalHeartBeat
// Description: (no, not a real biological heart beat in any sense of the term)
//              This method is executed every two seconds via heart beat and
//              handles the erosion of the various biological attributes.
//              Currently, headache does nothing other than spit out a few
//              messages. We may wish to give it tangible negative effects.
//              This can be detrmined by a call to the haveHeadache method.
//-----------------------------------------------------------------------------
static nomask void biologicalHeartBeat()
{
    if(intoxicated > 0)
    {
        intoxicated--;        
        determineIfIntoxicationCausesAction();
        if(!intoxicated)
        {
            write("You suddenly without reason get a bad headache.\n");
            headache = maxHeadache;
            biologicalNotification("onBeginDetox");
        }
    }
    else
    {
        intoxicated = 0;
    }

    if(drugged > 0)
    {
        drugged--;        
        determineIfDruggedCausesAction();
        if(!drugged)
        {
            write("You suddenly without reason get a bad headache.\n");
            headache = maxHeadache;
            biologicalNotification("onBeginDetox");
        }        
    }
    else
    {
        drugged = 0;
    }

    if(soaked > 0)
    {
        soaked--;        
    }
    else
    {
        soaked = 0;
    }

    if(stuffed > 0)
    {
        stuffed--;        
    }
    else
    {
        stuffed = 0;
    }

    if(headache > 0)
    {
        headache--;  
        if(!headache)
        {
            write("Your headache disappears.\n");
            biologicalNotification("onDetoxified");
        }
    }
    else
    {
        headache = 0;
    }        
}

//-----------------------------------------------------------------------------
// Method: biologicalBonusTo
// Description: This method applies bonuses or penalties to game-affecting 
//              attributes such as hit points and various combat-related 
//              elements as the living object's biological factors might alter
//              them.
//
// Parameters: bonus - the bonus type to apply
//
// Returns: the value of the bonus/penalty
//-----------------------------------------------------------------------------
public nomask int biologicalBonusTo(string bonus)
{
    int ret = 0;

    object biologicalDictionary = getDictionary("biological");
    if(biologicalDictionary)
    {
        if(function_exists(bonus, biologicalDictionary))
        {
            ret = call_other(biologicalDictionary, bonus, this_object());
        }
        else if(function_exists("BonusSkillModifier", biologicalDictionary))
        {
            ret = call_other(biologicalDictionary, 
                "BonusSkillModifier", bonus, this_object());
        }
    }
    return ret;
}


