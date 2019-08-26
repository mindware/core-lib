//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
#ifndef itemFormatters_h
#define itemFormatters_h

/////////////////////////////////////////////////////////////////////////////
private nosave mapping decorators = ([
    "dividers":([
        "any": ([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;124m",
            "24-bit": "\x1b[0;38;2;160;10;0m"
        ]),
    ]),
    "player guilds":([
        "any":([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
    ]),
    "wizard levels":([
        "apprentice":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;133m",
            "24-bit": "\x1b[0;38;2;100;200;100m"
        ]),
        "wizard":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;144m",
            "24-bit": "\x1b[0;38;2;200;200;200m"
        ]),
        "creator":([
            "3-bit": "\x1b[0;32;1m",
            "8-bit": "\x1b[0;38;5;212m",
            "24-bit": "\x1b[0;38;2;100;200;10m"
        ]),
        "highwizard":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;202m",
            "24-bit": "\x1b[0;38;2;10;200;100m"
        ]),
        "senior":([
            "3-bit": "\x1b[0;33;1m",
            "8-bit": "\x1b[0;38;5;199m",
            "24-bit": "\x1b[0;38;2;100;20;100m"
        ]),
        "admin":([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;178m",
            "24-bit": "\x1b[0;38;2;200;20;100m"
        ]),
        "elder":([
            "3-bit": "\x1b[0;36;1m",
            "8-bit": "\x1b[0;38;5;220m",
            "24-bit": "\x1b[0;38;2;100;20;200m"
        ]),
        "sage":([
            "3-bit": "\x1b[0;35;1m",
            "8-bit": "\x1b[0;38;5;140m",
            "24-bit": "\x1b[0;38;2;100;20;10m"
        ]),
        "archwizard":([
            "3-bit": "\x1b[0;34m",
            "8-bit": "\x1b[0;38;5;240m",
            "24-bit": "\x1b[0;38;2;10;20;100m"
        ]),
        "demigod":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;90m",
            "24-bit": "\x1b[0;38;2;80;80;80m"
        ]),
        "god":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;111m",
            "24-bit": "\x1b[0;38;2;130;130;130m"
        ]),
        "owner":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;20m",
            "24-bit": "\x1b[0;38;2;50;50;150m"
        ]),
    ]),
    "wizard commands":([
        "message":([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;178m",
            "24-bit": "\x1b[0;38;2;200;20;100m"
        ]),
        "error message":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
        "error details":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
        "environment changed":([
            "3-bit": "\x1b[0;32;1m",
            "8-bit": "\x1b[0;38;5;212;1m",
            "24-bit": "\x1b[0;38;2;100;200;10;1m"
        ]),
        "no access":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
        "compiled":([
            "3-bit": "\x1b[0;33;1m",
            "8-bit": "\x1b[0;38;5;190;1m",
            "24-bit": "\x1b[0;38;2;200;200;0;1m"
        ]),
        "normal":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "directory":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;20;1m",
            "24-bit": "\x1b[0;38;2;0;0;220;1m"
        ]),
        "roles":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
        "permissions":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;212m",
            "24-bit": "\x1b[0;38;2;100;200;10m"
        ]),
        "file size":([
            "3-bit": "\x1b[0;37m",
            "8-bit": "\x1b[0;38;5;15m",
            "24-bit": "\x1b[0;38;2;255;255;255m"
        ]),
    ]),
    "show":([
        "environment":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;2m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
        "text":([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;92m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "own objects":([
            "3-bit": "\x1b[0;32;1m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
        "guild objects":([
            "3-bit": "\x1b[0;35;1m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
        "other objects":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
    ]),
    "people":([
        "ip address":([
            "3-bit": "\x1b[0;30;1m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
        "name":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;2m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
        "level":([
            "3-bit": "\x1b[0;32;1m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
        "status":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
        "location":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
    ]),
    "channel":([
        "header":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;112m",
            "24-bit": "\x1b[0;38;2;190;90;190m"
        ]),
        "body":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;200;230;10m"
        ]),
    ]),
    "tell":([
        "message":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;112m",
            "24-bit": "\x1b[0;38;2;190;90;190m"
        ]),
        "block":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;20m",
            "24-bit": "\x1b[0;38;2;50;50;150m"
        ]),
        "busy":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;20m",
            "24-bit": "\x1b[0;38;2;50;50;150m"
        ]),
    ]),
    "soul":([
        "message":([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;92m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "block":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;20m",
            "24-bit": "\x1b[0;38;2;50;50;150m"
        ]),
    ]),
    "help":([
        "text":([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "url":([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;93m",
            "24-bit": "\x1b[0;38;2;180;180;220m"
        ]),
        "heading":([
            "3-bit": "\x1b[0;36;1m",
            "8-bit": "\x1b[0;38;5;15;1m",
            "24-bit": "\x1b[0;38;2;255;255;255;1m"
        ]),
        "parameter":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;202m",
            "24-bit": "\x1b[0;38;2;10;200;100m"
        ]),
        "page":([
            "3-bit": "\x1b[0;35;1m",
            "8-bit": "\x1b[0;38;5;31;1m",
            "24-bit": "\x1b[0;38;2;80;155;175;1m"
        ]), 
        "wildcard":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;20m",
            "24-bit": "\x1b[0;38;2;50;50;150m"
        ]),
        "issue":([
            "3-bit": "\x1b[0;32;1m",
            "8-bit": "\x1b[0;38;5;149;1m",
            "24-bit": "\x1b[0;38;2;210;220;40;1m"  
        ]), 
    ]),
    "shout":([
        "message":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;112m",
            "24-bit": "\x1b[0;38;2;190;90;190m"
        ]),
        "help display":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;2m",
            "24-bit": "\x1b[0;38;2;170;180;110m"
        ]),
        "system message":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;250;0;0;1m"
        ]),
    ]),
    "say":([
        "message":([
            "3-bit": "\x1b[0;37m",
            "8-bit": "\x1b[0;38;5;15m",
            "24-bit": "\x1b[0;38;2;255;255;255m"
        ]),
        "help display":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;2m",
            "24-bit": "\x1b[0;38;2;170;180;110m"
        ]),
    ]),
    "tutorial": ([
        "rune wall":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;20m",
            "24-bit": "\x1b[0;38;2;0;5;170m"
        ]),
    ]),
    "selector":([
        "number":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;220;40;0;1m"
        ]),
        "title":([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "menu name":([
            "3-bit": "\x1b[0;37;1m",
            "8-bit": "\x1b[0;38;5;15;1m",
            "24-bit": "\x1b[0;38;2;255;255;255;1m"
        ]),
        "choice enabled":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;2m",
            "24-bit": "\x1b[0;38;2;170;180;110m"
        ]),
        "choice disabled":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
        "prerequisites":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;20m",
            "24-bit": "\x1b[0;38;2;0;5;170m"
        ]),
        "instructions":([
            "3-bit": "\x1b[0;32;1m",
            "8-bit": "\x1b[0;38;5;2;1m",
            "24-bit": "\x1b[0;38;2;160;220;60;1m"
        ]),
        "details":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;144m",
            "24-bit": "\x1b[0;38;2;100;180;150m"  
        ]),
        "data" : ([
            "3-bit":"\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;144m",
            "24-bit": "\x1b[0;38;2;180;180;100m"
        ]),
        "description":([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;116m",
            "24-bit": "\x1b[0;38;2;140;180;190m"
        ]),
        "action":([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;117m",
            "24-bit": "\x1b[0;38;2;140;180;190m"
        ]),
        "selected":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;20;1m",
            "24-bit": "\x1b[0;38;2;0;0;220;1m"
        ]),
        "blocked":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;220;40;0;1m"
        ]),
        "information":([
            "3-bit": "\x1b[0;35;1m",
            "8-bit": "\x1b[0;38;5;20;1m",
            "24-bit": "\x1b[0;38;2;0;5;170;1m"
        ]),
        "failure":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;124m",
            "24-bit": "\x1b[0;38;2;140;0;0m"
        ]),
        "note":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;31m",
            "24-bit": "\x1b[0;38;2;80;155;175m"
        ]),
        "warning":([
            "3-bit": "\x1b[0;30;1m",
            "8-bit": "\x1b[0;38;5;238;1m",
            "24-bit": "\x1b[0;38;2;70;60;60;1m"
        ]),
        "decorator":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
    ]),
    "equipment":([
        "normal quality":([
            "3-bit": "\x1b[0;37;1m",
            "8-bit": "\x1b[0;38;5;231;1m",
            "24-bit": "\x1b[0;38;2;255;255;255;1m"
        ]),
        "well-crafted":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;144m",
            "24-bit": "\x1b[0;38;2;60;180;160m"  
        ]),   
        "masterwork":([
            "3-bit": "\x1b[0;32;1m",
            "8-bit": "\x1b[0;38;5;149;1m",
            "24-bit": "\x1b[0;38;2;210;220;40;1m"  
        ]),   
        "enchanted":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;31m",
            "24-bit": "\x1b[0;38;2;50;75;195m"
        ]),   
        "powerful enchantment":([
            "3-bit": "\x1b[0;35;1m",
            "8-bit": "\x1b[0;38;5;32;1m",
            "24-bit": "\x1b[0;38;2;60;75;215;1m"
        ]), 
        "unidentified": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "field": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "value": ([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "nothing":([
            "3-bit": "\x1b[0;30;1m",
            "8-bit": "\x1b[0;38;5;238;1m",
            "24-bit": "\x1b[0;38;2;70;60;60;1m"
        ]),
        "cursed":([
            "3-bit": "\x1b[0;30;1m",
            "8-bit": "\x1b[0;38;5;238;1m",
            "24-bit": "\x1b[0;38;2;70;60;60;1m"
        ]),
        "bonus":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
    ]),
    "shop":([
        "unidentified":([
            "3-bit": "\x1b[0;30;1m",
            "8-bit": "\x1b[0;38;5;238;1m",
            "24-bit": "\x1b[0;38;2;70;60;60;1m"
        ]),
        "message":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;144m",
            "24-bit": "\x1b[0;38;2;100;180;150m"  
        ]),  
        "sell all":([
            "3-bit": "\x1b[0;30;1m",
            "8-bit": "\x1b[0;38;5;238;1m",
            "24-bit": "\x1b[0;38;2;70;60;60;1m"
        ]),
        "accounting":([
            "3-bit": "\x1b[0;37m",
            "8-bit": "\x1b[0;38;5;231m",
            "24-bit": "\x1b[0;38;2;255;255;255m"
        ]),
        "field": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "value": ([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
         "cost":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;2m",
            "24-bit": "\x1b[0;38;2;170;180;110m"
        ]),
    ]),
    "environment":([
        "action":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;144m",
            "24-bit": "\x1b[0;38;2;100;180;150m"  
        ]),
        "description":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;186m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "exits":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;238;1m",
            "24-bit": "\x1b[0;38;2;60;60;70;1m"
        ]),
        "too dark":([
            "3-bit": "\x1b[0;30;1m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
        "inventory": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "infravision": ([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;166m",
            "24-bit": "\x1b[0;38;2;215;95;0m"
        ]),
        "dawn": ([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;166m",
            "24-bit": "\x1b[0;38;2;215;95;0m"
        ]),
        "dusk": ([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;166m",
            "24-bit": "\x1b[0;38;2;215;105;0m"
        ]),
        "morning": ([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;184m",
            "24-bit": "\x1b[0;38;2;230;215;0m"
        ]),
        "noon": ([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;226m",
            "24-bit": "\x1b[0;38;2;255;255;0m"
        ]),
        "afternoon": ([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;230;255;0m"
        ]),
        "evening": ([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;184m",
            "24-bit": "\x1b[0;38;2;230;215;0m"
        ]),
        "midnight": ([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;56m",
            "24-bit": "\x1b[0;38;2;85;0;215m"
        ]),
        "night": ([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;57m",
            "24-bit": "\x1b[0;38;2;95;0;255m"
        ]),
        "late night": ([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;57m",
            "24-bit": "\x1b[0;38;2;95;0;255m"
        ]),
    ]),
    "score":([
        "character":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;144m",
            "24-bit": "\x1b[0;38;2;100;180;150m"  
        ]),
        "value":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;2m",
            "24-bit": "\x1b[0;38;2;170;180;110m"
        ]),
        "content": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "weapon":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "information":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "bar":([
            "3-bit": "\x1b[0;35;1m",
            "8-bit": "\x1b[0;38;5;238;1m",
            "24-bit": "\x1b[0;38;2;60;60;70;1m"
        ]),
        "empty bar":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
        "level up":([
            "3-bit": "\x1b[0;33;1m",
            "8-bit": "\x1b[0;38;5;190;1m",
            "24-bit": "\x1b[0;38;2;200;200;0;1m"
        ]),
        "attribute":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;2m",
            "24-bit": "\x1b[0;38;2;170;180;110m"
        ]),
        "attribute bonus":([
            "3-bit": "\x1b[0;33;1m",
            "8-bit": "\x1b[0;38;5;190;1m",
            "24-bit": "\x1b[0;38;2;200;200;0;1m"
        ]),
        "attribute penalty":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
        "positive modifier":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;20;1m",
            "24-bit": "\x1b[0;38;2;0;0;220;1m"
        ]),
        "negative modifier":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
        "statistics level":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;238m",
            "24-bit": "\x1b[0;38;2;60;60;70m"
        ]),
         "statistics info":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
   ]),
    "long description":([
        "name":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "gender":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;238m",
            "24-bit": "\x1b[0;38;2;90;60;160m"
        ]),
        "race":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;2m",
            "24-bit": "\x1b[0;38;2;170;180;110m"
        ]),
        "description": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "carry header": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "health":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
    ]),
    "research":([
        "bonus text":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "bonus modifier":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;20;1m",
            "24-bit": "\x1b[0;38;2;10;20;100;1m"
        ]),
        "penalty modifier":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
        "apply modifier":([
            "3-bit": "\x1b[0;35;1m",
            "8-bit": "\x1b[0;38;5;31;1m",
            "24-bit": "\x1b[0;38;2;80;155;175;1m"
        ]), 
        "time left":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
        "missing prerequisites":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
        "prerequisite":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;31m",
            "24-bit": "\x1b[0;38;2;80;125;185m"
        ]), 
        "known":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;20;1m",
            "24-bit": "\x1b[0;38;2;0;0;220;1m"
        ]),
        "in progress":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;31m",
            "24-bit": "\x1b[0;38;2;80;155;175m"
        ]), 
        "available tree":([
            "3-bit": "\x1b[0;32;1m",
            "8-bit": "\x1b[0;38;5;149;1m",
            "24-bit": "\x1b[0;38;2;100;220;150;1m"  
        ]),  
        "field header": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "field data":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "tree indentation":([
            "3-bit": "\x1b[0;30;1m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
        "command": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "target": ([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "formula":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;20;1m",
            "24-bit": "\x1b[0;38;2;10;20;100;1m"
        ]),
        "formula type":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
    ]),
    "races":([
        "information":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;2m",
            "24-bit": "\x1b[0;38;2;170;180;110m"
        ]),
        "bonus modifier":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;20;1m",
            "24-bit": "\x1b[0;38;2;10;20;100;1m"
        ]),
        "penalty modifier":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
    ]),
    "skills":([
        "information":([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;2m",
            "24-bit": "\x1b[0;38;2;170;180;110m"
        ]),
        "modifier":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;20;1m",
            "24-bit": "\x1b[0;38;2;10;20;100;1m"
        ]),
        "penalty":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
        "skill header": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "skill value": ([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "points remaining":([
            "3-bit": "\x1b[0;30;1m",
            "8-bit": "\x1b[0;38;5;12m",
            "24-bit": "\x1b[0;38;2;150;230;190m"
        ]),
    ]),
    "traits":([
        "field header": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "field data":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "negative trait":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
        "bonus modifier":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;20;1m",
            "24-bit": "\x1b[0;38;2;10;20;100;1m"
        ]),
        "penalty modifier":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
        "persisted trait":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;25;1m",
            "24-bit": "\x1b[0;38;2;10;80;160;1m"
        ]),
        "sustained trait":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;31m",
            "24-bit": "\x1b[0;38;2;80;155;175m"
        ]), 
        "has research":([
            "3-bit": "\x1b[0;32;1m",
            "8-bit": "\x1b[0;38;5;212m",
            "24-bit": "\x1b[0;38;2;100;200;10m"
        ]),
        "enhancement":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "personality trait":([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]), 
    ]),
    "quests":([
        "description": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "failure":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
        "success":([
            "3-bit": "\x1b[0;32;1m",
            "8-bit": "\x1b[0;38;5;212m",
            "24-bit": "\x1b[0;38;2;100;200;10m"
        ]),
        "heading" : ([
            "3-bit":"\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;144m",
            "24-bit": "\x1b[0;38;2;180;180;100m"
        ]),
        "data" : ([
            "3-bit":"\x1b[0;33;1m",
            "8-bit": "\x1b[0;38;5;144;1m",
            "24-bit": "\x1b[0;38;2;180;180;100;1m"
        ]),
        "active quest":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;20m",
            "24-bit": "\x1b[0;38;2;0;5;170m"
        ]),
    ]),
    "conversation":([
        "description": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "speech":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "condition":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;20;1m",
            "24-bit": "\x1b[0;38;2;60;20;190;1m"
        ]),
        "action":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
        "highlight":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;31m",
            "24-bit": "\x1b[0;38;2;80;155;175m"
        ]), 
        "disabled": ([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;124m",
            "24-bit": "\x1b[0;38;2;100;10;0m"
        ]),
    ]),
    "grid":([
        "display":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
    ]),
    "combat":([
        "death":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
        "flee":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "damage":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;240;0;0m"
        ]),
        "light hit": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;26m",
            "24-bit": "\x1b[0;38;2;150;150;200m"
        ]),
        "hit": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;25m",
            "24-bit": "\x1b[0;38;2;140;140;170m"
        ]),
        "heavy hit": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;24m",
            "24-bit": "\x1b[0;38;2;120;120;160m"
        ]),
        "extreme hit": ([
            "3-bit": "\x1b[0;36;1m",
            "8-bit": "\x1b[0;38;5;31;1m",
            "24-bit": "\x1b[0;38;2;130;130;170;1m"
        ]),
        "miss":([
            "3-bit": "\x1b[0;37m",
            "8-bit": "\x1b[0;38;5;180m",
            "24-bit": "\x1b[0;38;2;140;170;140m"
        ]),
    ]),
    "party":([
        "active member":([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "creator":([
            "3-bit": "\x1b[0;33;1m",
            "8-bit": "\x1b[0;38;5;190;1m",
            "24-bit": "\x1b[0;38;2;200;200;0;1m"
        ]),
        "heading":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),    
        "former member":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),  
        "data": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
    ]),
    "tactical combat":([
        "extra message":([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
        "attacker": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;25m",
            "24-bit": "\x1b[0;38;2;140;140;170m"
        ]),
        "defender":([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;180m",
            "24-bit": "\x1b[0;38;2;140;170;140m"
        ]),
        "summary": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
    ]),
    "map": ([
        "corridor": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "exit": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "room": ([
            "3-bit": "\x1b[0;33;1m",
            "8-bit": "\x1b[0;38;5;190;1m",
            "24-bit": "\x1b[0;38;2;200;200;0;1m"
        ]),
        "error": ([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
    ]),
    "player domains":([
        "heading": ([
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;80m",
            "24-bit": "\x1b[0;38;2;180;180;190m"
        ]),
        "worker": ([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "low end worker": ([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
        "average worker": ([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "elite worker": ([
            "3-bit": "\x1b[0;33;1m",
            "8-bit": "\x1b[0;38;5;190;1m",
            "24-bit": "\x1b[0;38;2;200;200;0;1m"
        ]),
        "total": ([
            "3-bit": "\x1b[0;32m",
            "8-bit": "\x1b[0;38;5;212m",
            "24-bit": "\x1b[0;38;2;100;200;10m"
        ]),
        "incomplete": ([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;0;0;1m"
        ]),
        "value": ([
            "3-bit": "\x1b[0;33m",
            "8-bit": "\x1b[0;38;5;190m",
            "24-bit": "\x1b[0;38;2;200;200;0m"
        ]),
        "selection needed": ([
            "3-bit": "\x1b[0;35m",
            "8-bit": "\x1b[0;38;5;24m",
            "24-bit": "\x1b[0;38;2;140;140;180m"
        ]),
        "not selected yet": ([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
        "selected":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;25;1m",
            "24-bit": "\x1b[0;38;2;10;80;160;1m"
        ]),
        "busy":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
        "is remote": ([
            "3-bit": "\x1b[0;31;1m",
            "8-bit": "\x1b[0;38;5;9;1m",
            "24-bit": "\x1b[0;38;2;200;60;0;1m"
        ]),
        "positive value":([
            "3-bit": "\x1b[0;34;1m",
            "8-bit": "\x1b[0;38;5;25;1m",
            "24-bit": "\x1b[0;38;2;10;80;160;1m"
        ]),
        "negative value":([
            "3-bit": "\x1b[0;31m",
            "8-bit": "\x1b[0;38;5;9m",
            "24-bit": "\x1b[0;38;2;200;0;0m"
        ]),
    ]),
]);

#endif
