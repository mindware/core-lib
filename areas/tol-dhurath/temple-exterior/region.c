//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/region.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setRegionName("Tol-Dhurath Temple Entrance");
    setRegionType("forest");
    setDimensions(25, 10);

    setCoordinate(0, 4,
        "/areas/tol-dhurath/temple-exterior/0x4.c", "room");
    setCoordinate(0, 5,
        "/areas/tol-dhurath/temple-exterior/0x5.c", "path");
    setCoordinate(0, 8,
        "/areas/tol-dhurath/temple-exterior/0x8.c", "path");
    setCoordinate(0, 9,
        "/areas/tol-dhurath/temple-exterior/0x9.c", "room");
    setCoordinate(10, 4,
        "/areas/tol-dhurath/temple-exterior/10x4.c", "path");
    setCoordinate(10, 5,
        "/areas/tol-dhurath/temple-exterior/10x5.c", "path");
    setCoordinate(11, 2,
        "/areas/tol-dhurath/temple-exterior/11x2.c", "room");
    setCoordinate(11, 3,
        "/areas/tol-dhurath/temple-exterior/11x3.c", "path");
    setCoordinate(11, 4,
        "/areas/tol-dhurath/temple-exterior/11x4.c", "path");
    setCoordinate(11, 5,
        "/areas/tol-dhurath/temple-exterior/11x5.c", "room");
    setCoordinate(12, 0,
        "/areas/tol-dhurath/temple-exterior/12x0.c", "room");
    setCoordinate(12, 1,
        "/areas/tol-dhurath/temple-exterior/12x1.c", "path");
    setCoordinate(12, 4,
        "/areas/tol-dhurath/temple-exterior/12x4.c", "path");
    setCoordinate(12, 5,
        "/areas/tol-dhurath/temple-exterior/12x5.c", "room");
    setCoordinate(13, 0,
        "/areas/tol-dhurath/temple-exterior/13x0.c", "path");
    setCoordinate(13, 1,
        "/areas/tol-dhurath/temple-exterior/13x1.c", "path");
    setCoordinate(13, 2,
        "/areas/tol-dhurath/temple-exterior/13x2.c", "room");
    setCoordinate(13, 3,
        "/areas/tol-dhurath/temple-exterior/13x3.c", "path");
    setCoordinate(13, 4,
        "/areas/tol-dhurath/temple-exterior/13x4.c", "room");
    setCoordinate(13, 5,
        "/areas/tol-dhurath/temple-exterior/13x5.c", "path");
    setCoordinate(13, 6,
        "/areas/tol-dhurath/temple-exterior/13x6.c", "path");
    setCoordinate(13, 8,
        "/areas/tol-dhurath/temple-exterior/13x8.c", "room");
    setCoordinate(13, 9,
        "/areas/tol-dhurath/temple-exterior/13x9.c", "path");
    setCoordinate(14, 0,
        "/areas/tol-dhurath/temple-exterior/14x0.c", "path");
    setCoordinate(14, 2,
        "/areas/tol-dhurath/temple-exterior/14x2.c", "path");
    setCoordinate(14, 3,
        "/areas/tol-dhurath/temple-exterior/14x3.c", "room");
    setCoordinate(14, 4,
        "/areas/tol-dhurath/temple-exterior/14x4.c", "room");
    setCoordinate(14, 6,
        "/areas/tol-dhurath/temple-exterior/14x6.c", "path");
    setCoordinate(14, 7,
        "/areas/tol-dhurath/temple-exterior/14x7.c", "path");
    setCoordinate(14, 8,
        "/areas/tol-dhurath/temple-exterior/14x8.c", "path");
    setCoordinate(14, 9,
        "/areas/tol-dhurath/temple-exterior/14x9.c", "path");
    setCoordinate(15, 0,
        "/areas/tol-dhurath/temple-exterior/15x0.c", "path");
    setCoordinate(15, 2,
        "/areas/tol-dhurath/temple-exterior/15x2.c", "path");
    setCoordinate(15, 4,
        "/areas/tol-dhurath/temple-exterior/15x4.c", "path");
    setCoordinate(15, 5,
        "/areas/tol-dhurath/temple-exterior/15x5.c", "room");
    setCoordinate(15, 6,
        "/areas/tol-dhurath/temple-exterior/15x6.c", "path");
    setCoordinate(16, 0,
        "/areas/tol-dhurath/temple-exterior/16x0.c", "path");
    setCoordinate(16, 1,
        "/areas/tol-dhurath/temple-exterior/16x1.c", "path");
    setCoordinate(16, 2,
        "/areas/tol-dhurath/temple-exterior/16x2.c", "path");
    setCoordinate(16, 4,
        "/areas/tol-dhurath/temple-exterior/16x4.c", "path");
    setCoordinate(16, 6,
        "/areas/tol-dhurath/temple-exterior/16x6.c", "path");
    setCoordinate(16, 7,
        "/areas/tol-dhurath/temple-exterior/16x7.c", "room");
    setCoordinate(16, 8,
        "/areas/tol-dhurath/temple-exterior/16x8.c", "path");
    setCoordinate(17, 0,
        "/areas/tol-dhurath/temple-exterior/17x0.c", "room");
    setCoordinate(17, 1,
        "/areas/tol-dhurath/temple-exterior/17x1.c", "path");
    setCoordinate(17, 2,
        "/areas/tol-dhurath/temple-exterior/17x2.c", "path");
    setCoordinate(17, 3,
        "/areas/tol-dhurath/temple-exterior/17x3.c", "path");
    setCoordinate(17, 4,
        "/areas/tol-dhurath/temple-exterior/17x4.c", "path");
    setCoordinate(17, 6,
        "/areas/tol-dhurath/temple-exterior/17x6.c", "room");
    setCoordinate(17, 7,
        "/areas/tol-dhurath/temple-exterior/17x7.c", "room");
    setCoordinate(17, 8,
        "/areas/tol-dhurath/temple-exterior/17x8.c", "path");
    setCoordinate(17, 9,
        "/areas/tol-dhurath/temple-exterior/17x9.c", "room");
    setCoordinate(18, 1,
        "/areas/tol-dhurath/temple-exterior/18x1.c", "path");
    setCoordinate(18, 2,
        "/areas/tol-dhurath/temple-exterior/18x2.c", "path");
    setCoordinate(18, 6,
        "/areas/tol-dhurath/temple-exterior/18x6.c", "path");
    setCoordinate(18, 7,
        "/areas/tol-dhurath/temple-exterior/18x7.c", "path");
    setCoordinate(18, 8,
        "/areas/tol-dhurath/temple-exterior/18x8.c", "path");
    setCoordinate(18, 9,
        "/areas/tol-dhurath/temple-exterior/18x9.c", "path");
    setCoordinate(19, 2,
        "/areas/tol-dhurath/temple-exterior/19x2.c", "path");
    setCoordinate(19, 6,
        "/areas/tol-dhurath/temple-exterior/19x6.c", "path");
    setCoordinate(19, 7,
        "/areas/tol-dhurath/temple-exterior/19x7.c", "path");
    setCoordinate(19, 8,
        "/areas/tol-dhurath/temple-exterior/19x8.c", "path");
    setCoordinate(1, 1,
        "/areas/tol-dhurath/temple-exterior/1x1.c", "room");
    setCoordinate(1, 2,
        "/areas/tol-dhurath/temple-exterior/1x2.c", "path");
    setCoordinate(1, 3,
        "/areas/tol-dhurath/temple-exterior/1x3.c", "path");
    setCoordinate(1, 4,
        "/areas/tol-dhurath/temple-exterior/1x4.c", "path");
    setCoordinate(1, 5,
        "/areas/tol-dhurath/temple-exterior/1x5.c", "path");
    setCoordinate(1, 6,
        "/areas/tol-dhurath/temple-exterior/1x6.c", "path");
    setCoordinate(1, 7,
        "/areas/tol-dhurath/temple-exterior/1x7.c", "path");
    setCoordinate(1, 8,
        "/areas/tol-dhurath/temple-exterior/1x8.c", "path");
    setCoordinate(20, 2,
        "/areas/tol-dhurath/temple-exterior/20x2.c", "path");
    setCoordinate(20, 3,
        "/areas/tol-dhurath/temple-exterior/20x3.c", "path");
    setCoordinate(20, 6,
        "/areas/tol-dhurath/temple-exterior/20x6.c", "path");
    setCoordinate(20, 7,
        "/areas/tol-dhurath/temple-exterior/20x7.c", "path");
    setCoordinate(20, 8,
        "/areas/tol-dhurath/temple-exterior/20x8.c", "room");
    setCoordinate(21, 3,
        "/areas/tol-dhurath/temple-exterior/21x3.c", "room");
    setCoordinate(21, 4,
        "/areas/tol-dhurath/temple-exterior/21x4.c", "path");
    setCoordinate(21, 5,
        "/areas/tol-dhurath/temple-exterior/21x5.c", "room");
    setCoordinate(21, 6,
        "/areas/tol-dhurath/temple-exterior/21x6.c", "path");
    setCoordinate(21, 7,
        "/areas/tol-dhurath/temple-exterior/21x7.c", "path");
    setCoordinate(21, 8,
        "/areas/tol-dhurath/temple-exterior/21x8.c", "path");
    setCoordinate(21, 9,
        "/areas/tol-dhurath/temple-exterior/21x9.c", "room");
    setCoordinate(22, 6,
        "/areas/tol-dhurath/temple-exterior/22x6.c", "path");
    setCoordinate(22, 7,
        "/areas/tol-dhurath/temple-exterior/22x7.c", "path");
    setCoordinate(22, 8,
        "/areas/tol-dhurath/temple-exterior/22x8.c", "room");
    setCoordinate(23, 0,
        "/areas/tol-dhurath/temple-exterior/23x0.c", "room");
    setCoordinate(23, 6,
        "/areas/tol-dhurath/temple-exterior/23x6.c", "path");
    setCoordinate(23, 7,
        "/areas/tol-dhurath/temple-exterior/23x7.c", "room");
    setCoordinate(23, 8,
        "/areas/tol-dhurath/temple-exterior/23x8.c", "path");
    setCoordinate(24, 0,
        "/areas/tol-dhurath/temple-exterior/24x0.c", "path");
    setCoordinate(24, 1,
        "/areas/tol-dhurath/temple-exterior/24x1.c", "path");
    setCoordinate(24, 2,
        "/areas/tol-dhurath/temple-exterior/24x2.c", "path");
    setCoordinate(24, 3,
        "/areas/tol-dhurath/temple-exterior/24x3.c", "path");
    setCoordinate(24, 4,
        "/areas/tol-dhurath/temple-exterior/24x4.c", "path");
    setCoordinate(24, 5,
        "/areas/tol-dhurath/temple-exterior/24x5.c", "path");
    setCoordinate(24, 6,
        "/areas/tol-dhurath/temple-exterior/24x6.c", "path");
    setCoordinate(24, 7,
        "/areas/tol-dhurath/temple-exterior/24x7.c", "path");
    setCoordinate(24, 8,
        "/areas/tol-dhurath/temple-exterior/24x8.c", "exit");
    setCoordinate(2, 3,
        "/areas/tol-dhurath/temple-exterior/2x3.c", "room");
    setCoordinate(2, 4,
        "/areas/tol-dhurath/temple-exterior/2x4.c", "path");
    setCoordinate(3, 0,
        "/areas/tol-dhurath/temple-exterior/3x0.c", "path");
    setCoordinate(3, 1,
        "/areas/tol-dhurath/temple-exterior/3x1.c", "path");
    setCoordinate(3, 3,
        "/areas/tol-dhurath/temple-exterior/3x3.c", "path");
    setCoordinate(3, 4,
        "/areas/tol-dhurath/temple-exterior/3x4.c", "path");
    setCoordinate(4, 0,
        "/areas/tol-dhurath/temple-exterior/4x0.c", "path");
    setCoordinate(4, 1,
        "/areas/tol-dhurath/temple-exterior/4x1.c", "path");
    setCoordinate(4, 2,
        "/areas/tol-dhurath/temple-exterior/4x2.c", "path");
    setCoordinate(4, 3,
        "/areas/tol-dhurath/temple-exterior/4x3.c", "path");
    setCoordinate(4, 4,
        "/areas/tol-dhurath/temple-exterior/4x4.c", "path");
    setCoordinate(4, 5,
        "/areas/tol-dhurath/temple-exterior/4x5.c", "room");
    setCoordinate(4, 7,
        "/areas/tol-dhurath/temple-exterior/4x7.c", "none");
    setCoordinate(4, 8,
        "/areas/tol-dhurath/temple-exterior/4x8.c", "none");
    setCoordinate(4, 9,
        "/areas/tol-dhurath/temple-exterior/4x9.c", "none");
    setCoordinate(5, 0,
        "/areas/tol-dhurath/temple-exterior/5x0.c", "room");
    setCoordinate(5, 3,
        "/areas/tol-dhurath/temple-exterior/5x3.c", "path");
    setCoordinate(5, 4,
        "/areas/tol-dhurath/temple-exterior/5x4.c", "path");
    setCoordinate(5, 7,
        "/areas/tol-dhurath/temple-exterior/5x7.c", "none");
    setCoordinate(5, 8,
        "/areas/tol-dhurath/temple-exterior/5x8.c", "none");
    setCoordinate(5, 9,
        "/areas/tol-dhurath/temple-exterior/5x9.c", "none");
    setCoordinate(6, 3,
        "/areas/tol-dhurath/temple-exterior/6x3.c", "path");
    setCoordinate(6, 4,
        "/areas/tol-dhurath/temple-exterior/6x4.c", "path");
    setCoordinate(6, 5,
        "/areas/tol-dhurath/temple-exterior/6x5.c", "path");
    setCoordinate(6, 6,
        "/areas/tol-dhurath/temple-exterior/6x6.c", "path");
    setCoordinate(6, 7,
        "/areas/tol-dhurath/temple-exterior/6x7.c", "path");
    setCoordinate(6, 8,
        "/areas/tol-dhurath/temple-exterior/6x8.c", "none");
    setCoordinate(6, 9,
        "/areas/tol-dhurath/temple-exterior/6x9.c", "none");
    setCoordinate(7, 3,
        "/areas/tol-dhurath/temple-exterior/7x3.c", "path");
    setCoordinate(7, 4,
        "/areas/tol-dhurath/temple-exterior/7x4.c", "path");
    setCoordinate(7, 7,
        "/areas/tol-dhurath/temple-exterior/7x7.c", "none");
    setCoordinate(7, 8,
        "/areas/tol-dhurath/temple-exterior/7x8.c", "none");
    setCoordinate(7, 9,
        "/areas/tol-dhurath/temple-exterior/7x9.c", "none");
    setCoordinate(8, 3,
        "/areas/tol-dhurath/temple-exterior/8x3.c", "path");
    setCoordinate(8, 4,
        "/areas/tol-dhurath/temple-exterior/8x4.c", "path");
    setCoordinate(8, 5,
        "/areas/tol-dhurath/temple-exterior/8x5.c", "path");
    setCoordinate(8, 7,
        "/areas/tol-dhurath/temple-exterior/8x7.c", "none");
    setCoordinate(8, 8,
        "/areas/tol-dhurath/temple-exterior/8x8.c", "none");
    setCoordinate(8, 9,
        "/areas/tol-dhurath/temple-exterior/8x9.c", "none");
    setCoordinate(9, 3,
        "/areas/tol-dhurath/temple-exterior/9x3.c", "path");
    setCoordinate(9, 4,
        "/areas/tol-dhurath/temple-exterior/9x4.c", "room");
    setCoordinate(9, 5,
        "/areas/tol-dhurath/temple-exterior/9x5.c", "path");
    setCoordinate(9, 7,
        "/areas/tol-dhurath/temple-exterior/9x7.c", "none");
    setCoordinate(9, 8,
        "/areas/tol-dhurath/temple-exterior/9x8.c", "none");
    setCoordinate(9, 9,
        "/areas/tol-dhurath/temple-exterior/9x9.c", "none");
    // MapIcons
}
