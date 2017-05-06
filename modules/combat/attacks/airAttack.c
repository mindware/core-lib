inherit "/lib/modules/combat/attacks/baseAttack.c";

public void init()
{
    ::init();
    setDamageType("air");
    addHitDictionary(({
        "blast", "whip", "slice", "concuss", "flatten", "crush", "slam",
        "crash", "buffet" }));
        
    addSimileDictionary(({
        "against ##TargetPossessive## ##BodyPart##", "with a whip-like force",
        "with an ear-piercing whistle" }));
        
    addMissMessage("A pleasant breeze wafts in from ##AttackerPossessive::Name## "
            "direction.");
    
    addHitMessage("##AttackerName## ##HitDictionary## ##TargetName## "
            "##SimileDictionary## that leaves a scent of ozone in the air.",
            "1-50");
    addHitMessage("##AttackerName## ##Infinitive::slam## ##TargetName## "
            "backwards with a violent blast of wind.",
            "51-90");
}



