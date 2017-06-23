//*****************************************************************************
// Copyright (c) 2017 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************

private nosave mapping weaponBlueprints = ([
    "long sword": ([
        "type": "one-handed weapon",
        "damage type": "slash",
        "skill to craft": 10,
        "skill to use": "long sword",
        "default wc": 10,
        "default dc": 2,
        "default attack": 5,
        "default encumberance": 5,
        "default material": "iron"
    ]),
    "broad sword": ([
        "type": "one-handed weapon",
        "damage type": "slash",
        "skill to craft": 15,
        "skill to use": "long sword",
        "default wc": 10,
        "default dc": 4,
        "default attack": 4,
        "default encumberance": 6,
        "default material": "iron"
    ]),
    "rapier": ([
        "type": "one-handed weapon",
        "damage type": "thrust",
        "skill to craft": 15,
        "skill to use": "long sword",
        "default wc": 6,
        "default dc": 2,
        "default attack": 8,
        "default encumberance": 3,
        "default material": "steel"
    ]),
    "katana": ([
        "type": "one-handed weapon",
        "damage type": "slash",
        "skill to craft": 25,
        "skill to use": "hand and a half sword",
        "default wc": 10,
        "default dc": 3,
        "default attack": 10,
        "default encumberance": 4,
        "default material": "steel"
    ]),
    "scimitar": ([
        "type": "one-handed weapon",
        "damage type": "slash",
        "skill to craft": 10,
        "skill to use": "long sword",
        "default wc": 8,
        "default dc": 2,
        "default attack": 5,
        "default encumberance": 4,
        "default material": "iron"
    ]),
    "cutlass": ([
        "type": "one-handed weapon",
        "damage type": "slash",
        "skill to craft": 12,
        "skill to use": "long sword",
        "default wc": 8,
        "default dc": 3,
        "default attack": 5,
        "default encumberance": 4,
        "default material": "iron"
    ]),
    "sabre": ([
        "type": "one-handed weapon",
        "damage type": "slash",
        "skill to craft": 15,
        "skill to use": "long sword",
        "default wc": 8,
        "default dc": 4,
        "default attack": 5,
        "default encumberance": 5,
        "default material": "iron"
    ]),
    "spatha": ([
        "type": "one-handed weapon",
        "damage type": "slash",
        "skill to craft": 15,
        "skill to use": "long sword",
        "default wc": 10,
        "default dc": 2,
        "default attack": 5,
        "default encumberance": 5,
        "default material": "iron"
    ]),
    "gladius": ([
        "type": "one-handed weapon",
        "damage type": "thrust",
        "skill to craft": 10,
        "skill to use": "short sword",
        "default wc": 6,
        "default dc": 4,
        "default attack": 4,
        "default encumberance": 3,
        "default material": "iron"
    ]),
    "harpe": ([
        "type": "one-handed weapon",
        "damage type": "slash",
        "skill to craft": 15,
        "skill to use": "short sword",
        "default wc": 6,
        "default dc": 5,
        "default attack": 5,
        "default encumberance": 3,
        "default material": "iron"
    ]),
    "wakisashi": ([
        "type": "one-handed weapon",
        "damage type": "thrust",
        "skill to craft": 20,
        "skill to use": "short sword",
        "default wc": 6,
        "default dc": 6,
        "default attack": 6,
        "default encumberance": 3,
        "default material": "steel"
    ]),
    "machete": ([
        "type": "one-handed weapon",
        "damage type": "slash",
        "skill to craft": 5,
        "skill to use": "short sword",
        "default wc": 5,
        "default dc": 2,
        "default attack": 4,
        "default encumberance": 2,
        "default material": "iron"
    ]),
    "dagger": ([
        "type": "one-handed weapon",
        "damage type": "thrust",
        "skill to craft": 5,
        "skill to use": "dagger",
        "default wc": 4,
        "default dc": 2,
        "default attack": 5,
        "default encumberance": 1,
        "default material": "iron"
    ]),
    "dirk": ([
        "type": "one-handed weapon",
        "damage type": "thrust",
        "skill to craft": 10,
        "skill to use": "dagger",
        "default wc": 4,
        "default dc": 2,
        "default attack": 6,
        "default encumberance": 1,
        "default material": "iron"
    ]),
    "stiletto": ([
        "type": "one-handed weapon",
        "damage type": "thrust",
        "skill to craft": 10,
        "skill to use": "dagger",
        "default wc": 5,
        "default dc": 0,
        "default attack": 6,
        "default encumberance": 1,
        "default material": "iron"
    ]),
    "claymore": ([
        "type": "two-handed weapon",
        "damage type": "slash",
        "skill to craft": 25,
        "skill to use": "two-handed sword",
        "default wc": 16,
        "default dc": 4,
        "default attack": 5,
        "default encumberance": 12,
        "default material": "iron"
    ]),
    "great sword": ([
        "type": "two-handed weapon",
        "damage type": "slash",
        "skill to craft": 20,
        "skill to use": "two-handed sword",
        "default wc": 15,
        "default dc": 4,
        "default attack": 5,
        "default encumberance": 10,
        "default material": "iron"
    ]),
    "odachi": ([
        "type": "two-handed weapon",
        "damage type": "slash",
        "skill to craft": 35,
        "skill to use": "two-handed sword",
        "default wc": 18,
        "default dc": 4,
        "default attack": 6,
        "default encumberance": 10,
        "default material": "iron"
    ]),
    "bastard sword": ([
        "type": "one-handed weapon",
        "damage type": "slash",
        "skill to craft": 20,
        "skill to use": "hand and a half sword",
        "default wc": 12,
        "default dc": 3,
        "default attack": 5,
        "default encumberance": 7,
        "default material": "iron"
    ]),
    "sword staff": ([
        "type": "two-handed weapon",
        "damage type": "slash",
        "skill to craft": 25,
        "skill to use": "pole arm",
        "default wc": 15,
        "default dc": 4,
        "default attack": 5,
        "default encumberance": 15,
        "default material": "iron"
    ]),
    "staff": ([
        "type": "two-handed weapon",
        "damage type": "bludgeon",
        "skill to craft": 1,
        "skill to use": "staff",
        "default wc": 4,
        "default dc": 2,
        "default attack": 4,
        "default encumberance": 2,
        "default material": "pine"
    ]),
    "shield staff": ([
        "type": "two-handed weapon",
        "damage type": "bludgeon",
        "skill to craft": 8,
        "skill to use": "staff",
        "default wc": 4,
        "default dc": 6,
        "default attack": 2,
        "default encumberance": 5,
        "default material": "pine"
    ]),
    "shield": ([
        "type": "one-handed weapon",
        "damage type": "bludgeon",
        "skill to craft": 5,
        "skill to use": "shield",
        "default wc": 0,
        "default dc": 5,
        "default attack": 0,
        "default encumberance": 5,
        "default material": "pine"
    ]),
]);
