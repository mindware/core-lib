//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
#ifndef ruinedInteriorIcons_h
#define ruinedInteriorIcons_h

private mapping RuinedInteriorIcons = ([
    // Hallways
    "ruined interior east-west hallway": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "=", "=", "=", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "=", "=", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior east-west hallway north entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "=", "=", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\xa9", "#door#\xe2\x96\x94", "\xe2\x95\xa9" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior east-west hallway south entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "=", "=", "=", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "+", "#door#\\", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\xa6", "#door#\xe2\x96\x81", "\xe2\x95\xa6" }) })
    ]),
    "ruined interior east-west hallway north-south entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "+", "#door#\\", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa9", "#door#\xe2\x96\x94", "\xe2\x95\xa9" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\xa6", "#door#\xe2\x96\x81", "\xe2\x95\xa6" }) })
    ]),
    "ruined interior north-south hallway": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "|", }),
            ({ "|", "#floor# ", "|", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior north-south hallway east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "+", }),
            ({ "|", "#floor# ", "#door#/", }),
            ({ "|", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }) })
    ]),
    "ruined interior north-south hallway west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "|", }),
            ({ "#door#/", "#floor# ", "|", }),
            ({ "+", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior north-south hallway east-west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "+", }),
            ({ "#door#/", "#floor# ", "#door#/", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }) })
    ]),
    "ruined interior 4-way hallway": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "+", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x9d", "#floor#\xe2\x96\x91", "\xe2\x95\x9a" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x97", "#floor#\xe2\x96\x91", "\xe2\x95\x94" }) })
    ]),
    "ruined interior south alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "|", }),
            ({ "|", "#floor# ", "|", }),
            ({ "+", "=", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x9a", "\xe2\x95\x90", "\xe2\x95\x9d" }) })
    ]),
    "ruined interior north alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "+", "=", "+", }),
            ({ "|", "#floor# ", "|", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\x94", "\xe2\x95\x90", "\xe2\x95\x97" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior west alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "+", "=", "=", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "+", "=", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\x94", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x9a", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior east alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "=", "=", "+", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "=", "=", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x97" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x9d" }) })
    ]),
    "ruined interior west T-intersection": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "+", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\x9d", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x97", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior west T-intersection east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "+", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x9d", "#floor#\xe2\x96\x91", "\xe2\x95\x9a" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x97", "#floor#\xe2\x96\x91", "\xe2\x95\x94" }) })
    ]),
    "ruined interior east T-intersection": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "+", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "|", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x9a" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x94" }) })
    ]),
    "ruined interior east T-intersection west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "+", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x9d", "#floor#\xe2\x96\x91", "\xe2\x95\x9a" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x97", "#floor#\xe2\x96\x91", "\xe2\x95\x94" }) })
    ]),
    "ruined interior south T-intersection": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "=", "=", "=", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x97", "#floor#\xe2\x96\x91", "\xe2\x95\x94" }) })
    ]),
    "ruined interior south T-intersection north entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#/", "+", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x9d", "#door#\xe2\x96\x94", "\xe2\x95\x9a" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x97", "#floor#\xe2\x96\x91", "\xe2\x95\x94" }) })
    ]),
    "ruined interior north T-intersection": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "+", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "=", "=", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\x9d", "#floor#\xe2\x96\x91", "\xe2\x95\x9a" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior north T-intersection south entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "+", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x9d", "#floor#\xe2\x96\x91", "\xe2\x95\x9a" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x97", "#floor#\xe2\x96\x91", "\xe2\x95\x94" }) })
    ]),
    "ruined interior north entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "|", "#floor# ", "|", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#door#\xe2\x96\x94", "\xe2\x95\xac" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior north-east entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "|", "#floor# ", "#door#/", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#door#\xe2\x96\x94", "\xe2\x95\xac" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }) })
    ]),
    "ruined interior north-west entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "#door#/", "#floor# ", "|", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#door#\xe2\x96\x94", "\xe2\x95\xac" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior north-east-west entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "#door#/", "#floor# ", "#door#/", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#door#\xe2\x96\x94", "\xe2\x95\xac" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }) })
    ]),
    "ruined interior north alcove west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "+", "+", }),
            ({ "#door#/", "#floor# ", "|", }),
            ({ "+", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "\xe2\x95\x90", "\xe2\x95\x97" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\xac", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior north alcove east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "+", "+", }),
            ({ "|", "#floor# ", "#door#/", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\x94", "\xe2\x95\x90", "\xe2\x95\xac" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xac" }) })
    ]),
    "ruined interior north alcove east-west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "+", "+", }),
            ({ "#door#/", "#floor# ", "#door#/", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "\xe2\x95\x90", "\xe2\x95\xac" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\xac", "#floor#\xe2\x96\x91", "\xe2\x95\xac" }) })
    ]),
    "ruined interior south entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "|", }),
            ({ "|", "#floor# ", "|", }),
            ({ "+", "#door#/", "+", }), }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\xac", "#door#\xe2\x96\x81", "\xe2\x95\xac" }), })
    ]),
    "ruined interior south-east entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "|", }),
            ({ "|", "#floor# ", "#door#/", }),
            ({ "+", "#door#/", "+", }), }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\xac", "#door#\xe2\x96\x81", "\xe2\x95\xac" }), })
    ]),
    "ruined interior south-west entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "|", }),
            ({ "#door#/", "#floor# ", "|", }),
            ({ "+", "#door#/", "+", }), }),
        "unicode": ({ ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\xac", "#door#\xe2\x96\x81", "\xe2\x95\xac" }), })
    ]),
    "ruined interior south-east-west entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "|", }),
            ({ "#door#/", "#floor# ", "#door#/", }),
            ({ "+", "#door#/", "+", }), }),
        "unicode": ({ ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\xac", "#door#\xe2\x96\x81", "\xe2\x95\xac" }), })
    ]),
    "ruined interior south alcove west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "|", }),
            ({ "#door#/", "#floor# ", "|", }),
            ({ "+", "-", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\xac", "\xe2\x95\x90", "\xe2\x95\x9d" }) })
    ]),
    "ruined interior south alcove east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "|", }),
            ({ "|", "#floor# ", "#door#/", }),
            ({ "+", "-", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xac" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\x9a", "\xe2\x95\x90", "\xe2\x95\xac" }) })
    ]),
    "ruined interior south alcove east-west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "|", }),
            ({ "#door#/", "#floor# ", "#door#/", }),
            ({ "+", "=", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#floor#\xe2\x96\x91", "\xe2\x95\xac" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\xac", "\xe2\x95\x90", "\xe2\x95\xac" }) })
    ]),
    "ruined interior west entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "=", "=", }),
            ({ "#door#/", "#floor# ", "#floor# ", }),
            ({ "+", "=", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\xac", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior west-north entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "=", }),
            ({ "#door#/", "#floor# ", "#floor# ", }),
            ({ "+", "=", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#door#\xe2\x96\x94", "\xe2\x95\xa9" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\xac", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior west-south entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "=", "=", }),
            ({ "#door#/", "#floor# ", "#floor# ", }),
            ({ "+", "#door#\\", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\xac", "#door#\xe2\x96\x81", "\xe2\x95\xa6" }) })
    ]),
    "ruined interior west-south-north entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "=", }),
            ({ "#door#/", "#floor# ", "#floor# ", }),
            ({ "+", "#door#\\", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#door#\xe2\x96\x94", "\xe2\x95\xa9" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\xac", "#door#\xe2\x96\x81", "\xe2\x95\xa6" }) })
    ]),
    "ruined interior west alcove north entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#/", "+", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "+", "=", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#door#\xe2\x96\x94", "\xe2\x95\xa9" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x9a", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior west alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "=", "=", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "+", "#door#/", "+" }) }),
        "unicode": ({ ({ "\xe2\x95\x94", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\xac", "#door#\xe2\x96\x81", "\xe2\x95\xa6" }) })
    ]),
    "ruined interior west alcove north-south entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
            "ascii": ({ ({ "+", "#door#/", "+" }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "+", "#door#/", "+" }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#door#\xe2\x96\x94", "\xe2\x95\xa9" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x9a", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior east entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "=", "=", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "+", "=", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\xac", }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83", }),
            ({ "\xe2\x95\x90", "\xe2\x95\x90","\xe2\x95\xac", }) })
    ]),
    "ruined interior east-south entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "=", "=", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "+", "#door#\\", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\xac", }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83", }),
            ({ "\xe2\x95\xa6", "#door#\xe2\x96\x81","\xe2\x95\xac", }) })
    ]),
    "ruined interior east-north entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "=", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "+", "=", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\xa9", "#door#\xe2\x96\x94", "\xe2\x95\xac", }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83", }),
            ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\xac", }) })
    ]),
    "ruined interior east-south-north entry alcove": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "+", "#door#\\", "=", }) }),
        "unicode": ({ ({ "\xe2\x95\xa9", "#door#\xe2\x96\x94", "\xe2\x95\xac", }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83", }),
            ({ "\xe2\x95\xa6", "#door#\xe2\x96\x81","\xe2\x95\xac", }) })
    ]),
    "ruined interior east alcove north entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+" }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "=", "=", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa9", "#door#\xe2\x96\x94", "\xe2\x95\xac" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\xa6", "#door#\xe2\x96\x81","\xe2\x95\xac" }) })
    ]),
    "ruined interior east alcove south entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "=", "=", "+", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "+", "#door#\\", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x97" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\xa6", "#door#\xe2\x96\x81","\xe2\x95\xac" }) })
    ]),
    "ruined interior east alcove north-south entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "+", "#door#\\", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa9", "#door#\xe2\x96\x94", "\xe2\x95\xac" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\xa6", "#door#\xe2\x96\x81","\xe2\x95\xac" }) })
    ]),
    "ruined interior north-west corner hallway": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "-", "-", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x9d", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x9d" }) })
    ]),
    "ruined interior north-west corner hallway south entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "-", "#door#/", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x9d", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x97", "#door#\xe2\x96\x81", "\xe2\x95\xa3" }) })
    ]),
    "ruined interior north-west corner hallway east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "-", "-", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x9d", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\xa9" }) })
    ]),
    "ruined interior north-west corner hallway south-east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "-", "#door#/", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x9d", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\x97", "#door#\xe2\x96\x81", "\xe2\x95\xac" }) })
    ]),
    "ruined interior south-west corner hallway": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "-", "-", "+", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "+", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x97" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x97", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior south-west corner hallway north entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#/", "+", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa9", "#door#\xe2\x96\x94","\xe2\x95\xa3" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x97", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior south-west corner hallway east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "-", "-", "+" }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "+", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90","\xe2\x95\xa6" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\x97", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }) })
    ]),
    "ruined interior south-west corner hallway north-east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#/", "+", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa9", "#door#\xe2\x96\x94","\xe2\x95\xac" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\x97", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }) })
    ]),
    "ruined interior north-east corner hallway": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "+", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "-", "-", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x9a" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\x9a", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior north-east corner hallway west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "+", }),
            ({ "#door#\\", "#floor# ", "#floor# ", }),
            ({ "-", "-", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\x9a" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\xa9", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior north-east corner hallway south entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "+", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "-", "#door#/", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x9a" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\xa0", "#door#\xe2\x96\x81", "\xe2\x95\xa6" }) })
    ]),
    "ruined interior north-east corner hallway south-west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "+", }),
            ({ "#door#\\", "#floor# ", "#floor# ", }),
            ({ "+", "#door#/", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\x9a" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\xac", "#door#\xe2\x96\x81", "\xe2\x95\xa6" }) })
    ]),
    "ruined interior south-east corner hallway": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "+", "-", "-", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "|", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x94", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x94" }) })
    ]),
    "ruined interior south-east corner hallway west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "-", "-", }),
            ({ "#door#\\", "#floor# ", "#floor# ", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa6", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\x94" }) })
    ]),
    "ruined interior south-east corner hallway north entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "|", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa0", "#door#\xe2\x96\x94","\xe2\x95\xa9" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x94" }) })
    ]),
    "ruined interior south-east corner hallway north-west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "#door#\\", "#floor# ", "#floor# ", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#door#\xe2\x96\x94", "\xe2\x95\xa9" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "\xe2\x95\x94" }) })
    ]),

    // Large Rooms
    "ruined interior southeast corner": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "#floor# ", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "-", "-", "+", }) }),
        "unicode": ({ ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x9d" }) })
    ]),
    "ruined interior southeast corner south entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "#floor# ", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "-", "#door#/", "+", }) }),
        "unicode": ({ ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\x97", "#door#\xe2\x96\x81", "\xe2\x95\xa3" }) })
    ]),
    "ruined interior southeast corner east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "#floor# ", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "-", "-", "+", }) }),
        "unicode": ({ ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\xa9" }) })
    ]),
    "ruined interior southeast corner south-east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "#floor# ", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "-", "#door#/", "+", }) }),
        "unicode": ({ ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "\xe2\x95\x97", "#door#\xe2\x96\x81", "\xe2\x95\xac" }) })
    ]),
    "ruined interior northeast corner": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "-", "-", "+", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x97" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior northeast corner north entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#/", "+", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa9", "#door#\xe2\x96\x94","\xe2\x95\xa3" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior northeast corner east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "-", "-", "+", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "#floor# ", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90","\xe2\x95\xa6" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }) })
    ]),
    "ruined interior northeast corner north-east entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#/", "+", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "#floor# ", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa9", "#door#\xe2\x96\x94","\xe2\x95\xac" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }) })
    ]),
    "ruined interior southwest corner": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "#floor# ", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "-", "-", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\x9a", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior southwest corner west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "#floor# ", }),
            ({ "#door#\\", "#floor# ", "#floor# ", }),
            ({ "-", "-", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\xa9", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior southwest corner south entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "#floor# ", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "-", "#door#/", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\xa0", "#door#\xe2\x96\x81", "\xe2\x95\xa6" }) })
    ]),
    "ruined interior southwest corner south-west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "#floor# ", }),
            ({ "#door#\\", "#floor# ", "#floor# ", }),
            ({ "+", "#door#/", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\xac", "#door#\xe2\x96\x81", "\xe2\x95\xa6" }) })
    ]),
    "ruined interior northwest corner": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "+", "-", "-", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "|", "#floor# ", "#floor# ", }) }),
        "unicode": ({ ({ "\xe2\x95\x94", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }) })
    ]),
    "ruined interior northwest corner west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "-", "-", }),
            ({ "#door#\\", "#floor# ", "#floor# ", }),
            ({ "+", "#floor# ", "#floor# ", }) }),
        "unicode": ({ ({ "\xe2\x95\xa6", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }) })
    ]),
    "ruined interior northwest corner north entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "|", "#floor# ", "#floor# ", }) }),
        "unicode": ({ ({ "\xe2\x95\xa0", "#door#\xe2\x96\x94","\xe2\x95\xa9" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }) })
    ]),
    "ruined interior northwest corner north-west entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "#door#\\", "#floor# ", "#floor# ", }),
            ({ "+", "#floor# ", "#floor# ", }) }),
        "unicode": ({ ({ "\xe2\x95\xac", "#door#\xe2\x96\x94", "\xe2\x95\xa9" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", }),
            ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }) })
    ]),
    "ruined interior west wall": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "#floor# ", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "|", "#floor# ", "#floor# ", }) }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }) })
    ]),
    "ruined interior west wall entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#floor# ", "#floor# " }),
            ({ "#door#/", "#floor# ", "#floor# " }),
            ({ "+", "#floor# ", "#floor# " }) }),
        "unicode": ({ ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "#door#\xe2\x94\x83", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\xa3", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }) })
    ]),
    "ruined interior east wall": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "#floor# ", "#floor# ", "|" }),
            ({ "#floor# ", "#floor# ", "|" }),
            ({ "#floor# ", "#floor# ", "|" }) }),
        "unicode": ({ ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior east wall entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "#floor# ", "#floor# ", "+", }),
            ({ "#floor# ", "#floor# ", "#door#/", }),
            ({ "#floor# ", "#floor# ", "+", }) }),
        "unicode": ({ ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#door#\xe2\x94\x83" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa0" }) })
    ]),
    "ruined interior north wall": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "=", "=", "=", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }) })
    ]),
    "ruined interior north wall entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "+", "#door#\\", "+", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }) }),
        "unicode": ({ ({ "\xe2\x95\xa9", "#door#\xe2\x96\x94", "\xe2\x95\xa9" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }) })
    ]),
    "ruined interior south wall": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "=", "=", "=", }) }),
        "unicode": ({ ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x90" }) })
    ]),
    "ruined interior south wall entry": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "+", "#door#\\", "+", }) }),
        "unicode": ({ ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\xa6", "#door#\xe2\x96\x81", "\xe2\x95\xa6" }) })
    ]),
   "ruined interior floor": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ])
            ])
        ]),
        "ascii": ({ ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }) }),
        "unicode": ({ ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }) })
    ]),
   "ruined interior courtyard": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "grass":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;236m",
                    "3-bit": "\x1b[0;32m",
                    "8-bit": "\x1b[0;38;5;22m",
                    "24-bit": "\x1b[0;38;2;30;50;20m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "#grass# ", "#grass# ", "#grass# ", }),
            ({ "#grass# ", "#grass# ", "#grass# ", }),
            ({ "#grass# ", "#grass# ", "#grass# ", }) }),
        "unicode": ({ ({ "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91" }),
            ({ "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91" }),
            ({ "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91" }) })
    ]),
   "ruined interior courtyard with path": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none":"",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit" : "\x1b[0;31m",
                    "8-bit" : "\x1b[0;38;5;234m",
                    "24-bit" : "\x1b[0;38;2;28;36;28m",
                ]),
                "grass":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;236m",
                    "3-bit": "\x1b[0;32m",
                    "8-bit": "\x1b[0;38;5;22m",
                    "24-bit": "\x1b[0;38;2;30;50;20m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "#grass# ", "#floor# ", "#grass# ", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "#grass# ", "#floor# ", "#grass# ", }) }),
        "unicode": ({ ({ "#grass#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#grass#\xe2\x96\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "#grass#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#grass#\xe2\x96\x91" }) })
    ]),

    "ruined interior courtyard with pillar": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "grass":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;236m",
                    "3-bit": "\x1b[0;32m",
                    "8-bit": "\x1b[0;38;5;22m",
                    "24-bit": "\x1b[0;38;2;30;50;20m",
                ]),
                "pillar":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;243;1m",
                    "3-bit": "\x1b[0;36;1m",
                    "8-bit": "\x1b[0;38;5;243;1m",
                    "24-bit": "\x1b[0;38;2;118;118;128;1m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "#grass# ", "#grass# ", "#grass# ", }),
            ({ "#grass# ", "#pillar#+", "#grass# ", }),
            ({ "#grass# ", "#grass# ", "#grass# ", }) }),
        "unicode": ({ ({ "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91" }),
            ({ "#grass#\xe2\x96\x91", "#pillar#\xe2\x97\x8e", "#grass#\xe2\x96\x91" }),
            ({ "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91" }) })
    ]),
    "ruined interior-to-exterior north-south hallway west exit": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "|", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa8" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa5" }) })
    ]),
    "ruined interior-to-exterior north-south hallway east exit": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "|", "#floor# ", "|", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\xa8", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\xa5", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),
    "ruined interior-to-exterior east-west hallway south exit": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "=", "=", "=", }),
            ({ "#floor# ", "#floor# ", "#floor# ", }),
            ({ "+", "#floor# ", "+", }) }),
        "unicode": ({ ({ "\xe2\x95\x90", "\xe2\x95\x90", "\xe2\x95\x90" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\xa1", "#floor#\xe2\x96\x91", "\xe2\x95\x9e" }) })
    ]),
    "ruined interior-to-exterior north-corner hallway east exit": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "+", "=", "=", }),
            ({ "|", "#floor# ", "#floor# ", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\x94", "\xe2\x95\x90", "\xe2\x95\xa6" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91" }),
            ({ "\xe2\x95\x91", "#floor#\xe2\x96\x91", "\xe2\x95\xa5" }) })
    ]),
    "ruined interior-to-exterior north-corner hallway west exit": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;28;36;28m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "=", "=", "+", }),
            ({ "#floor# ", "#floor# ", "|", }),
            ({ "|", "#floor# ", "|", }) }),
        "unicode": ({ ({ "\xe2\x95\xa6", "\xe2\x95\x90", "\xe2\x95\x97" }),
            ({ "#floor#\xe2\x96\x91", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }),
            ({ "\xe2\x95\xa5", "#floor#\xe2\x96\x91", "\xe2\x95\x91" }) })
    ]),

    // Other locations
    "ruined interior south gatehouse": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "pillar":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;243;1m",
                    "3-bit": "\x1b[0;36;1m",
                    "8-bit": "\x1b[0;38;5;243;1m",
                    "24-bit": "\x1b[0;38;2;118;118;128;1m",
                ]),
                "portcullis":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;238m",
                    "3-bit": "\x1b[0;31;1m",
                    "8-bit": "\x1b[0;38;5;238m",
                    "24-bit": "\x1b[0;38;2;72;38;38m",
                ]),
                "door":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;251m",
                    "3-bit": "\x1b[0;33m",
                    "8-bit": "\x1b[0;38;5;100m",
                    "24-bit": "\x1b[0;38;2;102;102;38m",
                ])
            ])
        ]),
        "ascii": ({ ({ "#pillar#+", " ", "#pillar#+", }),
            ({ "+", "#portcullis#-", "+", }),
            ({ "+", "#door#-", "+", }) }),
        "unicode": ({ ({ "#pillar#\xe2\x97\x8e", " ", "#pillar#\xe2\x97\x8e" }),
            ({ "\xe2\x95\x94", "#portcullis#\xe2\x95\x8c", "\xe2\x95\x97" }),
            ({ "\xe2\x95\xac", "#door#\xe2\x96\x81", "\xe2\x95\xac" }) })
    ]),
    "ruined interior large staired entrance right": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "pillar":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;243;1m",
                    "3-bit": "\x1b[0;36;1m",
                    "8-bit": "\x1b[0;38;5;243;1m",
                    "24-bit": "\x1b[0;38;2;118;118;128;1m",
                ]),
                "stairs":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;237m",
                    "3-bit": "\x1b[0;31;1m",
                    "8-bit": "\x1b[0;38;5;237m",
                    "24-bit": "\x1b[0;38;2;40;42;45m",
                ]),
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;8;10;12m",
                ]),
                "floor2":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;240m",
                    "3-bit": "\x1b[0;30;1m",
                    "8-bit": "\x1b[0;38;5;23m",
                    "24-bit": "\x1b[0;38;2;8;12;8m",
                ]),
                "grass":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;236m",
                    "3-bit": "\x1b[0;32m",
                    "8-bit": "\x1b[0;38;5;22m",
                    "24-bit": "\x1b[0;38;2;30;50;20m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "#grass# ", "#grass# ", "#grass# ", }),
            ({ "#floor# ", "#floor2# ", "#floor# ", }),
            ({ "#stairs#-", "#stairs#-", "#pillar#+", }) }),
        "unicode": ({ ({ "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91" }),
            ({ "#floor#\xe2\x96\x85", "#floor2#\xe2\x96\x85", "#floor#\xe2\x96\x85" }),
            ({ "#stairs#\xe2\x8c\xb8", "#stairs#\xe2\x8c\xb8", "#pillar#\xe2\x8e\x8a" }) })
    ]),
    "ruined interior large staired entrance left": ([
        "colors": ([
            "none": "",
            "grayscale": "\x1b[0;38;5;235m",
            "3-bit": "\x1b[0;36m",
            "8-bit": "\x1b[0;38;5;235m",
            "24-bit": "\x1b[0;38;2;56;62;56m",
            "icons": ([
                "stairs":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;237m",
                    "3-bit": "\x1b[0;31;1m",
                    "8-bit": "\x1b[0;38;5;237m",
                    "24-bit": "\x1b[0;38;2;40;42;45m",
                ]),
                "floor":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;234m",
                    "3-bit": "\x1b[0;31m",
                    "8-bit": "\x1b[0;38;5;234m",
                    "24-bit": "\x1b[0;38;2;8;10;12m",
                ]),
                "floor2":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;240m",
                    "3-bit": "\x1b[0;30;1m",
                    "8-bit": "\x1b[0;38;5;23m",
                    "24-bit": "\x1b[0;38;2;8;12;8m",
                ]),
                "grass":([
                    "none": "",
                    "grayscale": "\x1b[0;38;5;236m",
                    "3-bit": "\x1b[0;32m",
                    "8-bit": "\x1b[0;38;5;22m",
                    "24-bit": "\x1b[0;38;2;30;50;20m",
                ]),
            ])
        ]),
        "ascii": ({ ({ "#grass# ", "#grass# ", "#grass# ", }),
            ({ "#floor# ", "#floor2# ", "#floor# ", }),
            ({ "#stairs#-", "#stairs#-", "#stairs#-", }) }),
        "unicode": ({ ({ "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91", "#grass#\xe2\x96\x91" }),
            ({ "#floor2#\xe2\x96\x85", "#floor#\xe2\x96\x85", "#floor2#\xe2\x96\x85" }),
            ({ "#stairs#\xe2\x8c\xb8", "#stairs#\xe2\x8c\xb8", "#stairs#\xe2\x8c\xb8" }) })
    ]),
]);

#endif
