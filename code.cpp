#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
#include <math.h>

union REGS in, out;

struct move
{
    char *name;
    int type;
    int power;
    int acc;
    int pp;
};

struct pokemon
{
    char *name;
    int dex;
    int type1;
    int type2;
    int atk;
    int def;
    int speed;
    int hp;
    int level;
    move move1;
    move move2;
    move move3;
    move move4;
};

// Functions for Printing Type
char *printtype1(pokemon x)
{
    char *p;
    if (x.type1 == 1)
        p = "NORMAL";
    else if (x.type1 == 2)
        p = "FIRE";
    else if (x.type1 == 3)
        p = "WATER";
    else if (x.type1 == 4)
        p = "GRASS";
    else if (x.type1 == 5)
        p = "ELECTR";
    else if (x.type1 == 6)
        p = "FLYING";
    else if (x.type1 == 7)
        p = "DARK";
    else if (x.type1 == 8)
        p = "PSYCHC";
    else if (x.type1 == 9)
        p = "GHOST";
    else if (x.type1 == 10)
        p = "POISON";
    else if (x.type1 == 11)
        p = "GROUND";
    else if (x.type1 == 12)
        p = "ROCK";
    else if (x.type1 == 13)
        p = "BUG";
    else if (x.type1 == 14)
        p = "STEEL";
    else if (x.type1 == 15)
        p = "FIGHT";
    else if (x.type1 == 16)
        p = "ICE";
    else if (x.type1 == 17)
        p = "DRAGON";

    return p;
}

char *printtype2(pokemon x)
{
    char *p;
    if (x.type2 == 1)
        p = "NORMAL";
    else if (x.type2 == 2)
        p = "FIRE";
    else if (x.type2 == 3)
        p = "WATER";
    else if (x.type2 == 4)
        p = "GRASS";
    else if (x.type2 == 5)
        p = "ELECTR";
    else if (x.type2 == 6)
        p = "FLYING";
    else if (x.type2 == 7)
        p = "DARK";
    else if (x.type2 == 8)
        p = "PSYCHC";
    else if (x.type2 == 9)
        p = "GHOST";
    else if (x.type2 == 10)
        p = "POISON";
    else if (x.type2 == 11)
        p = "GROUND";
    else if (x.type2 == 12)
        p = "ROCK";
    else if (x.type2 == 13)
        p = "BUG";
    else if (x.type2 == 14)
        p = "STEEL";
    else if (x.type2 == 15)
        p = "FIGHT";
    else if (x.type2 == 16)
        p = "ICE";
    else if (x.type2 == 17)
        p = "DRAGON";
    else
        p = "NO TYPE";

    return p;
}

int typecolor1(pokemon x)
{
    int p;
    if (x.type1 == 1)
        p = 7;
    else if (x.type1 == 2)
        p = 12;
    else if (x.type1 == 3)
        p = 1;
    else if (x.type1 == 4)
        p = 2;
    else if (x.type1 == 5)
        p = 14;
    else if (x.type1 == 6)
        p = 9;
    else if (x.type1 == 7)
        p = 0;
    else if (x.type1 == 8)
        p = 13;
    else if (x.type1 == 9)
        p = 1;
    else if (x.type1 == 10)
        p = 5;
    else if (x.type1 == 11)
        p = 6;
    else if (x.type1 == 12)
        p = 6;
    else if (x.type1 == 13)
        p = 10;
    else if (x.type1 == 14)
        p = 8;
    else if (x.type1 == 15)
        p = 4;
    else if (x.type1 == 16)
        p = 3;
    else if (x.type1 == 17)
        p = 5;

    return p;
}

int typecolor2(pokemon x)
{
    int p;
    if (x.type2 == 1)
        p = 7;
    else if (x.type2 == 2)
        p = 12;
    else if (x.type2 == 3)
        p = 1;
    else if (x.type2 == 4)
        p = 2;
    else if (x.type2 == 5)
        p = 14;
    else if (x.type2 == 6)
        p = 9;
    else if (x.type2 == 7)
        p = 0;
    else if (x.type2 == 8)
        p = 13;
    else if (x.type2 == 9)
        p = 1;
    else if (x.type2 == 10)
        p = 5;
    else if (x.type2 == 11)
        p = 6;
    else if (x.type2 == 12)
        p = 6;
    else if (x.type2 == 13)
        p = 10;
    else if (x.type2 == 14)
        p = 8;
    else if (x.type2 == 15)
        p = 4;
    else if (x.type2 == 16)
        p = 3;
    else if (x.type2 == 17)
        p = 5;
    else
        p = 15;

    return p;
}

int typestyle1(pokemon x)
{
    int p;
    if (x.type1 == 1)
        p = 1;
    else if (x.type1 == 2)
        p = 1;
    else if (x.type1 == 3)
        p = 1;
    else if (x.type1 == 4)
        p = 1;
    else if (x.type1 == 5)
        p = 1;
    else if (x.type1 == 6)
        p = 1;
    else if (x.type1 == 7)
        p = 1;
    else if (x.type1 == 8)
        p = 1;
    else if (x.type1 == 9)
        p = 2;
    else if (x.type1 == 10)
        p = 1;
    else if (x.type1 == 11)
        p = 1;
    else if (x.type1 == 12)
        p = 2;
    else if (x.type1 == 13)
        p = 1;
    else if (x.type1 == 14)
        p = 1;
    else if (x.type1 == 15)
        p = 1;
    else if (x.type1 == 16)
        p = 1;
    else if (x.type1 == 17)
        p = 2;
    else
        p = 0;

    return p;
}

int typestyle2(pokemon x)
{
    int p;
    if (x.type2 == 1)
        p = 1;
    else if (x.type2 == 2)
        p = 1;
    else if (x.type2 == 3)
        p = 1;
    else if (x.type2 == 4)
        p = 1;
    else if (x.type2 == 5)
        p = 1;
    else if (x.type2 == 6)
        p = 1;
    else if (x.type2 == 7)
        p = 1;
    else if (x.type2 == 8)
        p = 1;
    else if (x.type2 == 9)
        p = 2;
    else if (x.type2 == 10)
        p = 1;
    else if (x.type2 == 11)
        p = 1;
    else if (x.type2 == 12)
        p = 2;
    else if (x.type2 == 13)
        p = 1;
    else if (x.type2 == 14)
        p = 1;
    else if (x.type2 == 15)
        p = 1;
    else if (x.type2 == 16)
        p = 1;
    else if (x.type2 == 17)
        p = 2;
    else
        p = 0;

    return p;
}

int movetypecolor(move x)
{
    int p;
    if (x.type == 1)
        p = 7;
    else if (x.type == 2)
        p = 12;
    else if (x.type == 3)
        p = 1;
    else if (x.type == 4)
        p = 2;
    else if (x.type == 5)
        p = 14;
    else if (x.type == 6)
        p = 9;
    else if (x.type == 7)
        p = 0;
    else if (x.type == 8)
        p = 13;
    else if (x.type == 9)
        p = 1;
    else if (x.type == 10)
        p = 5;
    else if (x.type == 11)
        p = 6;
    else if (x.type == 12)
        p = 6;
    else if (x.type == 13)
        p = 10;
    else if (x.type == 14)
        p = 8;
    else if (x.type == 15)
        p = 4;
    else if (x.type == 16)
        p = 3;
    else if (x.type == 17)
        p = 5;

    return p;
}

int movetypestyle(move x)
{
    int p;
    if (x.type == 1)
        p = 1;
    else if (x.type == 2)
        p = 1;
    else if (x.type == 3)
        p = 1;
    else if (x.type == 4)
        p = 1;
    else if (x.type == 5)
        p = 1;
    else if (x.type == 6)
        p = 1;
    else if (x.type == 7)
        p = 1;
    else if (x.type == 8)
        p = 1;
    else if (x.type == 9)
        p = 2;
    else if (x.type == 10)
        p = 1;
    else if (x.type == 11)
        p = 1;
    else if (x.type == 12)
        p = 2;
    else if (x.type == 13)
        p = 1;
    else if (x.type == 14)
        p = 1;
    else if (x.type == 15)
        p = 1;
    else if (x.type == 16)
        p = 1;
    else if (x.type == 17)
        p = 2;
    else
        p = 0;

    return p;
}

// Global Variables
int gd = DETECT, gm;
int midx = 638 / 2;
int midy = 478 / 2;
pokemon red[6];
pokemon redbattle;
pokemon bluebattle;
move redmove;
move bluemove;
pokemon store[6];

// Display Functions
void printpokemon(pokemon a, pokemon b, pokemon c, pokemon d, pokemon e, pokemon f, pokemon g, pokemon h, pokemon i)
{
    rectangle(midx - 300, 120, midx - 150, 170);
    outtextxy(midx - 225, 135, a.name);
    if (a.type2 != 0)
    {
        rectangle(midx - 290, 145, midx - 230, 165);
        setfillstyle(typestyle1(a), typecolor1(a));
        floodfill(midx - 289, 146, 15);
        outtextxy(midx - 260, 155, printtype1(a));
        rectangle(midx - 220, 145, midx - 160, 165);
        setfillstyle(typestyle2(a), typecolor2(a));
        floodfill(midx - 219, 146, 15);
        outtextxy(midx - 190, 155, printtype2(a));
    }

    else
    {
        rectangle(midx - 255, 145, midx - 195, 165);
        setfillstyle(typestyle1(a), typecolor1(a));
        floodfill(midx - 254, 146, 15);
        outtextxy(midx - 225, 155, printtype1(a));
    }

    rectangle(midx - 75, 120, midx + 75, 170);
    outtextxy(midx, 135, b.name);
    rectangle(midx - 65, 145, midx - 5, 165);
    setfillstyle(typestyle1(b), typecolor1(b));
    floodfill(midx - 64, 146, 15);
    outtextxy(midx - 35, 155, printtype1(b));
    rectangle(midx + 5, 145, midx + 65, 165);
    setfillstyle(typestyle2(b), typecolor2(b));
    floodfill(midx + 6, 146, 15);
    outtextxy(midx + 35, 155, printtype2(b));
    // This position has no dual types

    rectangle(midx + 150, 120, midx + 300, 170);
    outtextxy(midx + 225, 135, c.name);
    rectangle(midx + 195, 145, midx + 255, 165);
    setfillstyle(typestyle1(c), typecolor1(c));
    floodfill(midx + 196, 146, 15);
    outtextxy(midx + 225, 155, printtype1(c));
    // This position has no dual types

    rectangle(midx - 300, 220, midx - 150, 270);
    outtextxy(midx - 225, 235, d.name);
    if (d.type2 != 0)
    {
        rectangle(midx - 290, 245, midx - 230, 265);
        setfillstyle(typestyle1(d), typecolor1(d));
        floodfill(midx - 289, 246, 15);
        outtextxy(midx - 260, 255, printtype1(d));
        rectangle(midx - 220, 245, midx - 160, 265);
        setfillstyle(typestyle2(d), typecolor2(d));
        floodfill(midx - 219, 246, 15);
        outtextxy(midx - 190, 255, printtype2(d));
    }

    else
    {
        rectangle(midx - 255, 245, midx - 195, 265);
        setfillstyle(typestyle1(d), typecolor1(d));
        floodfill(midx - 254, 246, 15);
        outtextxy(midx - 225, 255, printtype1(d));
    }

    rectangle(midx - 75, 220, midx + 75, 270);
    outtextxy(midx, 235, e.name);
    if (e.type2 != 0)
    {
        rectangle(midx - 65, 245, midx - 5, 265);
        setfillstyle(typestyle1(e), typecolor1(e));
        floodfill(midx - 64, 246, 15);
        outtextxy(midx - 35, 255, printtype1(e));
        rectangle(midx + 5, 245, midx + 65, 265);
        setfillstyle(typestyle2(e), typecolor2(e));
        floodfill(midx + 6, 246, 15);
        outtextxy(midx + 35, 255, printtype2(e));
    }

    else
    {
        rectangle(midx - 30, 245, midx + 30, 265);
        setfillstyle(typestyle1(e), typecolor1(e));
        floodfill(midx - 29, 246, 15);
        outtextxy(midx, 255, printtype1(e));
    }

    rectangle(midx + 150, 220, midx + 300, 270);
    outtextxy(midx + 225, 235, f.name);
    if (f.type2 != 0)
    {
        rectangle(midx + 160, 245, midx + 220, 265);
        setfillstyle(typestyle1(f), typecolor1(f));
        floodfill(midx + 161, 246, 15);
        outtextxy(midx + 190, 255, printtype1(f));
        rectangle(midx + 230, 245, midx + 290, 265);
        setfillstyle(typestyle2(f), typecolor2(f));
        floodfill(midx + 231, 246, 15);
        outtextxy(midx + 260, 255, printtype2(f));
    }

    else
    {
        rectangle(midx + 195, 245, midx + 255, 265);
        setfillstyle(typestyle1(f), typecolor1(f));
        floodfill(midx + 196, 246, 15);
        outtextxy(midx + 225, 255, printtype1(f));
    }

    rectangle(midx - 300, 320, midx - 150, 370);
    outtextxy(midx - 225, 335, g.name);
    rectangle(midx - 290, 345, midx - 230, 365);
    setfillstyle(typestyle1(g), typecolor1(g));
    floodfill(midx - 289, 346, 15);
    outtextxy(midx - 260, 355, printtype1(g));
    rectangle(midx - 220, 345, midx - 160, 365);
    setfillstyle(typestyle2(g), typecolor2(g));
    floodfill(midx - 219, 346, 15);
    outtextxy(midx - 190, 355, printtype2(g));
    // This position has no single types

    rectangle(midx - 75, 320, midx + 75, 370);
    outtextxy(midx, 335, h.name);
    if (h.type2 != 0)
    {
        rectangle(midx - 65, 345, midx - 5, 365);
        setfillstyle(typestyle1(h), typecolor1(h));
        floodfill(midx - 64, 346, 15);
        outtextxy(midx - 35, 355, printtype1(h));
        rectangle(midx + 5, 345, midx + 65, 365);
        setfillstyle(typestyle2(h), typecolor2(h));
        floodfill(midx + 6, 346, 15);
        outtextxy(midx + 35, 355, printtype2(h));
    }

    else
    {
        rectangle(midx - 30, 345, midx + 30, 365);
        setfillstyle(typestyle1(h), typecolor1(h));
        floodfill(midx - 29, 346, 15);
        outtextxy(midx, 355, printtype1(h));
    }

    rectangle(midx + 150, 320, midx + 300, 370);
    outtextxy(midx + 225, 335, i.name);
    rectangle(midx + 195, 345, midx + 255, 365);
    setfillstyle(typestyle1(i), typecolor1(i));
    floodfill(midx + 196, 346, 15);
    outtextxy(midx + 225, 355, printtype1(i));
    // This position has no dual types
}

void displayteam(pokemon a, pokemon b, pokemon c, pokemon d, pokemon e, pokemon f)
{

    // Group 1
    rectangle(midx - 300, 100, midx - 150, 200);
    outtextxy(midx - 225, 120, a.name);
    if (a.type2 == 0)
    {
        rectangle(midx - 255, 165, midx - 195, 185);
        setfillstyle(typestyle1(a), typecolor1(a));
        floodfill(midx - 254, 166, 15);
        outtextxy(midx - 225, 175, printtype1(a));
    }

    else
    {
        rectangle(midx - 290, 165, midx - 230, 185);
        setfillstyle(typestyle1(a), typecolor1(a));
        floodfill(midx - 289, 166, 15);
        outtextxy(midx - 260, 175, printtype1(a));
        rectangle(midx - 220, 165, midx - 160, 185);
        setfillstyle(typestyle2(a), typecolor2(a));
        floodfill(midx - 219, 166, 15);
        outtextxy(midx - 190, 175, printtype2(a));
    }

    // Group 2
    rectangle(midx - 75, 100, midx + 75, 200);
    outtextxy(midx, 120, b.name);
    if (b.type2 == 0)
    {
        rectangle(midx - 30, 165, midx + 30, 185);
        setfillstyle(typestyle1(b), typecolor1(b));
        floodfill(midx - 29, 166, 15);
        outtextxy(midx, 175, printtype1(b));
    }

    else
    {
        rectangle(midx - 65, 165, midx - 5, 185);
        setfillstyle(typestyle1(b), typecolor1(b));
        floodfill(midx - 64, 166, 15);
        outtextxy(midx - 35, 175, printtype1(b));
        rectangle(midx + 5, 165, midx + 65, 185);
        setfillstyle(typestyle2(b), typecolor2(b));
        floodfill(midx + 6, 166, 15);
        outtextxy(midx + 35, 175, printtype2(b));
    }

    // Group 3
    rectangle(midx + 150, 100, midx + 300, 200);
    outtextxy(midx + 225, 120, c.name);
    if (c.type2 == 0)
    {
        rectangle(midx + 195, 165, midx + 255, 185);
        setfillstyle(typestyle1(c), typecolor1(c));
        floodfill(midx + 196, 166, 15);
        outtextxy(midx + 225, 175, printtype1(c));
    }

    else
    {
        rectangle(midx + 160, 165, midx + 220, 185);
        setfillstyle(typestyle1(c), typecolor1(c));
        floodfill(midx + 161, 166, 15);
        outtextxy(midx + 190, 175, printtype1(c));
        rectangle(midx + 230, 165, midx + 290, 185);
        setfillstyle(typestyle2(c), typecolor2(c));
        floodfill(midx + 231, 166, 15);
        outtextxy(midx + 260, 175, printtype2(c));
    }

    // Group 4
    rectangle(midx - 300, 300, midx - 150, 400);
    outtextxy(midx - 225, 320, d.name);
    if (d.type2 == 0)
    {
        rectangle(midx - 255, 365, midx - 195, 385);
        setfillstyle(typestyle1(d), typecolor1(d));
        floodfill(midx - 254, 366, 15);
        outtextxy(midx - 225, 375, printtype1(d));
    }

    else
    {
        rectangle(midx - 290, 365, midx - 230, 385);
        setfillstyle(typestyle1(d), typecolor1(d));
        floodfill(midx - 289, 366, 15);
        outtextxy(midx - 260, 375, printtype1(d));
        rectangle(midx - 220, 365, midx - 160, 385);
        setfillstyle(typestyle2(d), typecolor2(d));
        floodfill(midx - 219, 366, 15);
        outtextxy(midx - 190, 375, printtype2(d));
    }

    // Group 5
    rectangle(midx - 75, 300, midx + 75, 400);
    outtextxy(midx, 320, e.name);
    if (e.type2 == 0)
    {
        rectangle(midx - 30, 365, midx + 30, 385);
        setfillstyle(typestyle1(e), typecolor1(e));
        floodfill(midx - 29, 366, 15);
        outtextxy(midx, 375, printtype1(e));
    }

    else
    {
        rectangle(midx - 65, 365, midx - 5, 385);
        setfillstyle(typestyle1(e), typecolor1(e));
        floodfill(midx - 64, 366, 15);
        outtextxy(midx - 35, 375, printtype1(e));
        rectangle(midx + 5, 365, midx + 65, 385);
        setfillstyle(typestyle2(e), typecolor2(e));
        floodfill(midx + 6, 366, 15);
        outtextxy(midx + 35, 375, printtype2(e));
    }

    // Group 6
    rectangle(midx + 150, 300, midx + 300, 400);
    outtextxy(midx + 225, 320, f.name);
    if (f.type2 == 0)
    {
        rectangle(midx + 195, 365, midx + 255, 385);
        setfillstyle(typestyle1(f), typecolor1(f));
        floodfill(midx + 196, 366, 15);
        outtextxy(midx + 225, 375, printtype1(f));
    }

    else
    {
        rectangle(midx + 160, 365, midx + 220, 385);
        setfillstyle(typestyle1(f), typecolor1(f));
        floodfill(midx + 161, 366, 15);
        outtextxy(midx + 190, 375, printtype1(f));
        rectangle(midx + 230, 365, midx + 290, 385);
        setfillstyle(typestyle2(f), typecolor2(f));
        floodfill(midx + 231, 366, 15);
        outtextxy(midx + 260, 375, printtype2(f));
    }
}
// Sound Functions
void clicksound()
{
    sound(2000);
    delay(90);
    nosound();
}

void startsound()
{
    sound(659.25);
    delay(120);
    nosound();
    delay(75);
    sound(659.25);
    delay(120);
    nosound();
    delay(150);
    sound(659.25);
    delay(120);
    nosound();
    delay(150);
    sound(523.25);
    delay(120);
    nosound();
    delay(100);
    sound(659.25);
    delay(120);
    nosound();
    delay(150);
    sound(783.99);
    delay(120);
    nosound();
    delay(450);
    sound(392.00);
    delay(120);
    nosound();
}

void losesound()
{
    sound(783.99);
    sound(987.77);
    delay(120);
    nosound();
    delay(75);
    sound(1174.66);
    sound(1396.91);
    delay(120);
    nosound();
    delay(75);
    sound(1174.66);
    sound(1396.91);
    delay(120);
    nosound();
    delay(75);
    sound(1174.66);
    sound(1396.91);
    delay(120);
    nosound();
    delay(75);
    sound(1046.50);
    sound(1318.51);
    delay(120);
    nosound();
    delay(75);
    sound(987.77);
    sound(1174.66);
    delay(120);
    nosound();
    delay(75);
    sound(783.99);
    sound(1046.50);
    delay(120);
    nosound();
    delay(75);
    sound(659.25);
    delay(120);
    nosound();
    delay(75);
    sound(659.25);
    delay(120);
    nosound();
    delay(75);
    sound(523.25);
    delay(120);
    nosound();
}

void winsound()
{
    sound(880.00);
    delay(120);
    nosound();
    delay(75);
    sound(880.00);
    delay(120);
    nosound();
    delay(75);
    sound(880.00);
    delay(120);
    nosound();
    delay(75);
    sound(880.00);
    delay(120);
    nosound();
    delay(75);
    sound(987.77);
    delay(120);
    nosound();
    delay(75);
    sound(1108.73);
    delay(120);
    nosound();
    delay(75);
    sound(1174.66);
    delay(120);
    nosound();
}

// Game Functions
void playblue(pokemon &a)
{
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    rectangle(382, 151, 579, 251);
    setviewport(383, 152, 578, 250, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    setcolor(15);
    int xmb = (382 + 579) / 2;
    outtextxy(xmb, 171, a.name);
    outtextxy(xmb - 10, 191, "HP = ");
    char hps[17];
    outtextxy(xmb + 15, 191, itoa(a.hp, hps, 10));
    if (a.type2 == 0)
    {
        rectangle(xmb - 30, 221, xmb + 30, 241);
        setfillstyle(typestyle1(a), typecolor1(a));
        floodfill(xmb - 29, 222, 15);
        outtextxy(xmb, 231, printtype1(a));
    }
    else
    {
        rectangle(xmb - 65, 221, xmb - 5, 241);
        setfillstyle(typestyle1(a), typecolor1(a));
        floodfill(xmb - 64, 222, 15);
        setcolor(15);
        outtextxy(xmb - 35, 231, printtype1(a));
        rectangle(xmb + 5, 221, xmb + 65, 241);
        setfillstyle(typestyle2(a), typecolor2(a));
        floodfill(xmb + 6, 222, 15);
        outtextxy(xmb + 35, 231, printtype2(a));
    }
}

void playred(pokemon &a)
{
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    setviewport(62, 130, 259, 328, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    rectangle(61, 229, 258, 329);
    setcolor(15);
    int xmr = (61 + 258) / 2;
    outtextxy(xmr, 249, a.name);
    outtextxy(xmr - 10, 269, "HP = ");
    char hps[17];
    outtextxy(xmr + 15, 269, itoa(a.hp, hps, 10));
    if (a.type2 == 0)
    {
        rectangle(xmr - 30, 299, xmr + 30, 319);
        setfillstyle(typestyle1(a), typecolor1(a));
        floodfill(xmr - 29, 300, 15);
        setcolor(15);
        outtextxy(xmr, 309, printtype1(a));
    }
    else
    {
        setcolor(15);
        rectangle(xmr - 65, 299, xmr - 5, 319);
        setfillstyle(typestyle1(a), typecolor1(a));
        floodfill(xmr - 64, 300, 15);
        setcolor(15);
        outtextxy(xmr - 35, 309, printtype1(a));
        rectangle(xmr + 5, 299, xmr + 65, 319);
        setfillstyle(typestyle2(a), typecolor2(a));
        floodfill(xmr + 6, 300, 15);
        outtextxy(xmr + 35, 309, printtype2(a));
    }
}

int xmc = 320;
int ymc = 429;

// Bottom Screen
void playchoice()
{
    setcolor(15);
    setfillstyle(1, 4);
    rectangle(xmc - 250, ymc - 40, xmc - 150, ymc + 40);
    floodfill(xmc - 249, ymc - 39, 15);
    outtextxy(xmc - 200, ymc, "RUN");
    rectangle(xmc - 100, ymc - 40, xmc + 100, ymc + 40);
    floodfill(xmc - 99, ymc - 39, 15);
    outtextxy(xmc, ymc, "FIGHT");
    rectangle(xmc + 150, ymc - 40, xmc + 250, ymc + 40);
    floodfill(xmc + 151, ymc - 39, 15);
    outtextxy(xmc + 200, ymc, "SWITCH");
}

// Display Moves
void playmove(pokemon &a)
{
    setviewport(2, 380, 638, 478, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    rectangle(1, 379, 639, 479);
    setcolor(15);
    settextjustify(CENTER_TEXT, CENTER_TEXT);

    rectangle(xmc - 180, ymc - 40, xmc - 20, ymc - 10);
    setfillstyle(movetypestyle(a.move1), movetypecolor(a.move1));
    floodfill(xmc - 179, ymc - 39, 15);
    setcolor(15);
    outtextxy(xmc - 120, ymc - 25, a.move1.name);
    char pps1[10];
    outtextxy(xmc - 40, ymc - 25, itoa(a.move1.pp, pps1, 10));

    rectangle(xmc + 20, ymc - 40, xmc + 180, ymc - 10);
    setfillstyle(movetypestyle(a.move2), movetypecolor(a.move2));
    floodfill(xmc + 21, ymc - 39, 15);
    setcolor(15);
    outtextxy(xmc + 80, ymc - 25, a.move2.name);
    char pps2[10];
    outtextxy(xmc + 160, ymc - 25, itoa(a.move2.pp, pps2, 10));

    rectangle(xmc - 180, ymc + 10, xmc - 20, ymc + 40);
    setfillstyle(movetypestyle(a.move3), movetypecolor(a.move3));
    floodfill(xmc - 179, ymc + 11, 15);
    setcolor(15);
    outtextxy(xmc - 120, ymc + 25, a.move3.name);
    char pps3[10];
    outtextxy(xmc - 40, ymc + 25, itoa(a.move3.pp, pps3, 10));

    rectangle(xmc + 20, ymc + 10, xmc + 180, ymc + 40);
    setfillstyle(movetypestyle(a.move4), movetypecolor(a.move4));
    floodfill(xmc + 22, ymc + 11, 15);
    setcolor(15);
    outtextxy(xmc + 80, ymc + 25, a.move4.name);
    char pps4[10];
    outtextxy(xmc + 160, ymc + 25, itoa(a.move4.pp, pps4, 10));
}

// Random Mouse Functions
void mouseposi(int &xpos, int &ypos, int &click)
{
    in.x.ax = 3;
    int86(51, &in, &out);
    click = out.x.bx;
    xpos = out.x.cx;
    ypos = out.x.dx;
}

int callmouse()
{
    in.x.ax = 1;
    int86(51, &in, &out);
    return 1;
}

void setposi(int &xpos, int &ypos)
{
    in.x.ax = 4;
    in.x.cx = xpos;
    in.x.dx = ypos;
    int86(51, &in, &out);
}

// Which Pokemon First
void decidefirst(pokemon &a, pokemon &b, pokemon &c, pokemon &d, pokemon &e, pokemon &f)
{
    int constant = 0;
    int xposi, yposi, cl;
    int r = getmaxx(), s = midy;
    setposi(r, s);
    callmouse();
    do
    {
        mouseposi(xposi, yposi, cl);
        if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 100) && (yposi < 200)) || ((yposi > 300) && (yposi < 400))))
        {
            clicksound();
            break;
        }
    } while (constant == 0);
    if ((xposi > midx - 300) && (xposi < midx - 150) && (yposi > 100) && (yposi < 200))
    {
        red[0] = a;
        red[1] = b;
        red[2] = c;
        red[3] = d;
        red[4] = e;
        red[5] = f;
    }
    else if ((xposi > midx - 75) && (xposi < midx + 75) && (yposi > 100) && (yposi < 200))
    {
        red[0] = b;
        red[1] = a;
        red[2] = c;
        red[3] = d;
        red[4] = e;
        red[5] = f;
    }
    else if ((xposi > midx + 150) && (xposi < midx + 300) && (yposi > 100) && (yposi < 200))
    {
        red[0] = c;
        red[1] = a;
        red[2] = b;
        red[3] = d;
        red[4] = e;
        red[5] = f;
    }
    else if ((xposi > midx - 300) && (xposi < midx - 150) && (yposi > 300) && (yposi < 400))
    {
        red[0] = d;
        red[1] = a;
        red[2] = b;
        red[3] = c;
        red[4] = e;
        red[5] = f;
    }
    else if ((xposi > midx - 75) && (xposi < midx + 75) && (yposi > 300) && (yposi < 400))
    {
        red[0] = e;
        red[1] = a;
        red[2] = b;
        red[3] = c;
        red[4] = d;
        red[5] = f;
    }
    else if ((xposi > midx + 150) && (xposi < midx + 300) && (yposi > 300) && (yposi < 400))
    {
        red[0] = f;
        red[1] = a;
        red[2] = b;
        red[3] = c;
        red[4] = d;
        red[5] = e;
    }

    for (int i = 0; i < 6; i++)
        store[i] = red[i];
}

// When Switching
void decideswitch(pokemon &a, pokemon &b, pokemon &c, pokemon &d, pokemon &e, pokemon &f)
{
    clrscr();
    closegraph();
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(midx, 50, "Which Pokemon would you like to send out?");
    displayteam(a, b, c, d, e, f);
    int constant = 0, xposi, yposi, cl;
    int r = getmaxx(), s = midy;
    setposi(r, s);
    callmouse();
    int zerohp;
    do
    {
        do
        {
            mouseposi(xposi, yposi, cl);
            if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 100) && (yposi < 200)) || ((yposi > 300) && (yposi < 400))))
            {
                clicksound();
                break;
            }
        } while (constant == 0);
        zerohp = 0;
        if ((xposi > midx - 300) && (xposi < midx - 150) && (yposi > 100) && (yposi < 200))
            redbattle = a;
        else if ((xposi > midx - 75) && (xposi < midx + 75) && (yposi > 100) && (yposi < 200))
            redbattle = b;
        else if ((xposi > midx + 150) && (xposi < midx + 300) && (yposi > 100) && (yposi < 200))
            redbattle = c;
        else if ((xposi > midx - 300) && (xposi < midx - 150) && (yposi > 300) && (yposi < 400))
            redbattle = d;
        else if ((xposi > midx - 75) && (xposi < midx + 75) && (yposi > 300) && (yposi < 400))
            redbattle = e;
        else if ((xposi > midx + 150) && (xposi < midx + 300) && (yposi > 300) && (yposi < 400))
            redbattle = f;
        if (redbattle.hp == 0)
        {
            zerohp = 1;
            outtextxy(midx, 70, "Pokemon has fainted...");
        }
    } while (zerohp == 1);
}

// Start of Battle
void battleopen(pokemon &b, pokemon &r)
{
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    setcolor(15);
    settextjustify(LEFT_TEXT, LEFT_TEXT);
    rectangle(1, 1, 639, 101);
    setfillstyle(1, 0);
    floodfill(2, 2, 15);
    setcolor(15);
    outtextxy(100, 51, "You are challenged by Champion Blue!");
    getch();
    clicksound();

    clearviewport();
    setcolor(15);
    rectangle(1, 1, 639, 101);
    floodfill(2, 2, 15);
    setcolor(15);
    settextjustify(LEFT_TEXT, LEFT_TEXT);
    outtextxy(100, 51, "Champion Blue sent out");
    outtextxy(280, 51, b.name);
    getch();
    clicksound();

    setcolor(15);
    setviewport(0, 0, 639, 479, 1);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    playblue(b);
    setfillstyle(1, 0);
    getch();
    clicksound();

    setviewport(2, 2, 638, 100, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    setcolor(15);
    floodfill(2, 2, 15);
    rectangle(1, 1, 639, 101);
    floodfill(2, 2, 15);
    setcolor(15);
    outtextxy(100, 51, "Go!");
    outtextxy(160, 51, r.name);
    getch();
    clicksound();

    setcolor(15);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    playred(r);
    setfillstyle(1, 0);
    getch();
    clicksound();
}

// Move Effectiveness Functions
float checksuper(pokemon x, move a)
{
    int sfire[5] = {4, 13, 14, 16, 18};
    int swater[5] = {2, 11, 12, 18, 18};
    int sgrass[5] = {3, 11, 12, 18, 18};
    int selectr[5] = {3, 6, 18, 18, 18};
    int sflying[5] = {4, 13, 15, 18, 18};
    int sdark[5] = {8, 9, 18, 18, 18};
    int spsychc[5] = {10, 15, 18, 18, 18};
    int sghost[5] = {8, 9, 18, 18, 18};
    int spoison[5] = {4, 13, 18, 18, 18};
    int sground[5] = {2, 5, 12, 14, 18};
    int srock[5] = {2, 13, 16, 18, 18};
    int sbug[5] = {4, 7, 8, 18, 18};
    int ssteel[5] = {6, 18, 18, 18, 18};
    int sfight[5] = {1, 7, 12, 14, 16};
    int sice[5] = {4, 6, 11, 17, 18};
    int sdragon[5] = {17, 18, 18, 18, 18};
    float checksuper = 1;

    for (int i = 0; i < 4; i++)
    {
        if (a.type == 2 && (x.type1 == sfire[i] || x.type2 == sfire[i]))
            checksuper *= 2;
        else if (a.type == 3 && (x.type1 == swater[i] || x.type2 == swater[i]))
            checksuper *= 2;
        else if (a.type == 4 && (x.type1 == sgrass[i] || x.type2 == sgrass[i]))
            checksuper *= 2;
        else if (a.type == 5 && (x.type1 == selectr[i] || x.type2 == selectr[i]))
            checksuper *= 2;
        else if (a.type == 6 && (x.type1 == sflying[i] || x.type2 == sflying[i]))
            checksuper *= 2;
        else if (a.type == 7 && (x.type1 == sdark[i] || x.type2 == sdark[i]))
            checksuper *= 2;
        else if (a.type == 8 && (x.type1 == spsychc[i] || x.type2 == spsychc[i]))
            checksuper *= 2;
        else if (a.type == 9 && (x.type1 == sghost[i] || x.type2 == sghost[i]))
            checksuper *= 2;
        else if (a.type == 10 && (x.type1 == spoison[i] || x.type2 == spoison[i]))
            checksuper *= 2;
        else if (a.type == 11 && (x.type1 == sground[i] || x.type2 == sground[i]))
            checksuper *= 2;
        else if (a.type == 12 && (x.type1 == srock[i] || x.type2 == srock[i]))
            checksuper *= 2;
        else if (a.type == 13 && (x.type1 == sbug[i] || x.type2 == sbug[i]))
            checksuper *= 2;
        else if (a.type == 14 && (x.type1 == ssteel[i] || x.type2 == ssteel[i]))
            checksuper *= 2;
        else if (a.type == 15 && (x.type1 == sfight[i] || x.type2 == sfight[i]))
            checksuper *= 2;
        else if (a.type == 16 && (x.type1 == sice[i] || x.type2 == sice[i]))
            checksuper *= 2;
        else if (a.type == 17 && (x.type1 == sdragon[i] || x.type2 == sdragon[i]))
            checksuper *= 2;
        else
            checksuper *= 1;
    }
    return checksuper;
}

float checknot(pokemon x, move a)
{
    int nnormal[7] = {12, 14, 18, 18, 18, 18, 18};
    int nfire[7] = {2, 3, 11, 12, 17, 18, 18};
    int nwater[7] = {3, 4, 17, 18, 18, 18, 18};
    int ngrass[7] = {2, 4, 6, 10, 13, 16, 17};
    int nelectr[7] = {4, 5, 17, 18, 18, 18, 18};
    int nflying[7] = {5, 12, 14, 18, 18, 18, 18};
    int ndark[7] = {7, 15, 18, 18, 18, 18, 18};
    int npsychc[7] = {8, 14, 18, 18, 18, 18, 18};
    int nghost[7] = {7, 18, 18, 18, 18, 18, 18};
    int npoison[7] = {9, 10, 11, 12, 18, 18, 18};
    int nground[7] = {4, 13, 18, 18, 18, 18, 18};
    int nrock[7] = {11, 14, 15, 18, 18, 18, 18};
    int nbug[7] = {2, 6, 9, 10, 14, 15, 18};
    int nsteel[7] = {2, 3, 5, 14, 18, 18, 18};
    int nfight[7] = {6, 8, 10, 13, 18, 18, 18};
    int nice[7] = {2, 3, 14, 16, 18, 18, 18};
    int ndragon[7] = {14, 18, 18, 18, 18, 18, 18};
    float checknot = 1;

    for (int i = 0; i < 6; i++)
    {
        if (a.type == 1 && (x.type1 == nnormal[i] || x.type2 == nnormal[i]))
            checknot *= 0.5;
        else if (a.type == 2 && (x.type1 == nfire[i] || x.type2 == nfire[i]))
            checknot *= 0.5;
        else if (a.type == 3 && (x.type1 == nwater[i] || x.type2 == nwater[i]))
            checknot *= 0.5;
        else if (a.type == 4 && (x.type1 == ngrass[i] || x.type2 == ngrass[i]))
            checknot *= 0.5;
        else if (a.type == 5 && (x.type1 == nelectr[i] || x.type2 == nelectr[i]))
            checknot *= 0.5;
        else if (a.type == 6 && (x.type1 == nflying[i] || x.type2 == nflying[i]))
            checknot *= 0.5;
        else if (a.type == 7 && (x.type1 == ndark[i] || x.type2 == ndark[i]))
            checknot *= 0.5;
        else if (a.type == 8 && (x.type1 == npsychc[i] || x.type2 == npsychc[i]))
            checknot *= 0.5;
        else if (a.type == 9 && (x.type1 == nghost[i] || x.type2 == nghost[i]))
            checknot *= 0.5;
        else if (a.type == 10 && (x.type1 == npoison[i] || x.type2 == npoison[i]))
            checknot *= 0.5;
        else if (a.type == 11 && (x.type1 == nground[i] || x.type2 == nground[i]))
            checknot *= 0.5;
        else if (a.type == 12 && (x.type1 == nrock[i] || x.type2 == nrock[i]))
            checknot *= 0.5;
        else if (a.type == 13 && (x.type1 == nbug[i] || x.type2 == nbug[i]))
            checknot *= 0.5;
        else if (a.type == 14 && (x.type1 == nsteel[i] || x.type2 == nsteel[i]))
            checknot *= 0.5;
        else if (a.type == 15 && (x.type1 == nfight[i] || x.type2 == nfight[i]))
            checknot *= 0.5;
        else if (a.type == 16 && (x.type1 == nice[i] || x.type2 == nice[i]))
            checknot *= 0.5;
        else if (a.type == 17 && (x.type1 == ndragon[i] || x.type2 == ndragon[i]))
            checknot *= 0.5;
        else
            checknot *= 1;
    }
    return checknot;
}

float checknull(pokemon x, move a)
{
    int xelectr[1] = {11};
    int xnormal[1] = {9};
    int xghost[1] = {1};
    int xground[1] = {6};
    int xfight[1] = {9};
    int xpoison[1] = {14};
    int xpsychc[1] = {7};
    float checknull = 1;

    for (int i = 0; i < 1; i++)
    {
        if (a.type == 5 && (x.type1 == xelectr[i] || x.type2 == xelectr[i]))
            checknull = 0;
        else if (a.type == 1 && (x.type1 == xnormal[i] || x.type2 == xnormal[i]))
            checknull = 0;
        else if (a.type == 9 && (x.type1 == xghost[i] || x.type2 == xghost[i]))
            checknull = 0;
        else if (a.type == 11 && (x.type1 == xground[i] || x.type2 == xground[i]))
            checknull = 0;
        else if (a.type == 15 && (x.type1 == xfight[i] || x.type2 == xfight[i]))
            checknull = 0;
        else if (a.type == 10 && (x.type1 == xpoison[i] || x.type2 == xpoison[i]))
            checknull = 0;
        else if (a.type == 8 && (x.type1 == xpsychc[i] || x.type2 == xpsychc[i]))
            checknull = 0;
        else
            checknull = 1;
    }
    return checknull;
}

int accuracy(move &a)
{
    randomize();
    int ac, rand;
    rand = random(100) + 1;
    if (rand <= a.acc)
        ac = 1;
    else
        ac = 0;
    return ac;
}

int usemove(move &a, pokemon &atk, pokemon &def)
{
    int damage, x;
    damage = floor(((32 * a.power * (atk.atk * 1.0 / def.def) / 50) + 2) * checksuper(def, a) * checknot(def, a) * checknull(def, a));
    if (accuracy(a) == 0)
    {
        damage = 0;
        x = 0;
    }
    else
        x = 1;
    def.hp -= (damage);
    if (def.hp < 0)
        def.hp = 0;
    a.pp--;
    return x;
}

void turn(pokemon &b, pokemon &r)
{
    playblue(b);
    int rm, bm;
    setviewport(1, 1, 639, 101, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    setcolor(15);
    rectangle(1, 1, 639, 101);
    setcolor(15);
    settextjustify(LEFT_TEXT, LEFT_TEXT);
    outtextxy(100, 51, "What will Red do?");

    setcolor(15);
    rectangle(1, 379, 639, 479);
    setcolor(15);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    playchoice();

    int u = getmaxx(), v = midy;
    setposi(u, v);
    callmouse();
    int constant = 0;
    int xposi, yposi, cl;

    do
    {
        mouseposi(xposi, yposi, cl);
        if ((out.x.bx == 1) && (((xposi > xmc - 250) && (xposi < xmc - 150)) || ((xposi > xmc - 100) && (xposi < xmc + 100)) || ((xposi > xmc + 150) && (xposi < xmc + 250))) && ((yposi > ymc - 40) && (yposi < ymc + 40)))
        {
            clicksound();
            break;
        }
    } while (constant == 0);

    int flag = 0;

    if ((xposi > xmc - 100) && (xposi < xmc + 100))
    {
        flag = 1;
        move movearr[4];
        movearr[0] = b.move1;
        movearr[1] = b.move2;
        movearr[2] = b.move3;
        movearr[3] = b.move4;
        move bluemove = movearr[random(4)];
        setposi(u, v);
        callmouse();
        playmove(r);
        do
        {
            mouseposi(xposi, yposi, cl);
            if (out.x.bx == 1)
            {
                if (((xposi > xmc - 180) && (xposi < xmc - 20)) && ((yposi > ymc - 40) && (yposi < ymc - 10)))
                {
                    redmove = r.move1;
                    if (b.speed >= r.speed)
                    {
                        do
                        {
                            if (r.move1.pp > 0)
                            {
                                bm = usemove(bluemove, b, r);
                                if (r.hp > 0)
                                    rm = usemove(r.move1, r, b);
                                break;
                            }
                            else if (r.move1.pp == 0)
                                ;
                            {
                                setviewport(2, 2, 638, 100, 1);
                                clearviewport();
                                outtextxy(100, 51, "Not enough PP!");
                                setviewport(2, 380, 638, 478, 1);
                                clearviewport();
                                getch();
                                clicksound();
                                break;
                            }
                        } while (constant == 0);
                    }

                    else if (r.speed > b.speed)
                    {
                        do
                        {
                            if (r.move1.pp > 0)
                            {
                                rm = usemove(r.move1, r, b);
                                break;
                            }
                            else if (r.move1.pp == 0)
                                ;
                            {
                                setviewport(2, 2, 638, 100, 1);
                                clearviewport();
                                outtextxy(100, 51, "Not enough PP!");
                                setviewport(2, 380, 638, 478, 1);
                                clearviewport();
                                getch();
                                clicksound();
                                break;
                            }
                        } while (constant == 0);
                        if (b.hp > 0)
                            bm = usemove(bluemove, b, r);
                    }
                    break;
                }

                else if (((xposi > xmc + 20) && (xposi < xmc + 180)) && ((yposi > ymc - 40) && (yposi < ymc - 10)))
                {
                    redmove = r.move2;
                    if (b.speed >= r.speed)
                    {
                        do
                        {
                            if (r.move2.pp > 0)
                            {
                                bm = usemove(bluemove, b, r);
                                if (r.hp > 0)
                                    rm = usemove(r.move2, r, b);
                                break;
                            }
                            else if (r.move2.pp == 0)
                                ;
                            {
                                setviewport(2, 2, 638, 100, 1);
                                clearviewport();
                                outtextxy(100, 51, "Not enough PP!");
                                setviewport(2, 380, 638, 478, 1);
                                clearviewport();
                                getch();
                                clicksound();
                                break;
                            }
                        } while (constant == 0);
                    }

                    else if (r.speed > b.speed)
                    {
                        do
                        {
                            if (r.move2.pp > 0)
                            {
                                rm = usemove(r.move2, r, b);
                                break;
                            }
                            else if (r.move2.pp == 0)
                                ;
                            {
                                setviewport(2, 2, 638, 100, 1);
                                clearviewport();
                                outtextxy(100, 51, "Not enough PP!");
                                setviewport(2, 380, 638, 478, 1);
                                clearviewport();
                                getch();
                                clicksound();
                                break;
                            }
                        } while (constant == 0);
                        if (b.hp > 0)
                            bm = usemove(bluemove, b, r);
                    }
                    break;
                }

                else if (((xposi > xmc - 180) && (xposi < xmc - 20)) && ((yposi > ymc + 10) && (yposi < ymc + 40)))
                {
                    redmove = r.move3;
                    if (b.speed >= r.speed)
                    {
                        do
                        {
                            if (r.move3.pp > 0)
                            {
                                bm = usemove(bluemove, b, r);
                                if (r.hp > 0)
                                    rm = usemove(r.move3, r, b);
                                break;
                            }
                            else if (r.move3.pp == 0)
                                ;
                            {
                                setviewport(2, 2, 638, 100, 1);
                                clearviewport();
                                outtextxy(100, 51, "Not enough PP!");
                                setviewport(2, 380, 638, 478, 1);
                                clearviewport();
                                getch();
                                clicksound();
                                break;
                            }
                        } while (constant == 0);
                    }

                    else if (r.speed > b.speed)
                    {
                        do
                        {
                            if (r.move3.pp > 0)
                            {
                                rm = usemove(r.move3, r, b);
                                break;
                            }
                            else if (r.move3.pp == 0)
                                ;
                            {
                                setviewport(2, 2, 638, 100, 1);
                                clearviewport();
                                outtextxy(100, 51, "Not enough PP!");
                                setviewport(2, 380, 638, 478, 1);
                                clearviewport();
                                getch();
                                clicksound();
                                break;
                            }
                        } while (constant == 0);
                        if (b.hp > 0)
                            bm = usemove(bluemove, b, r);
                    }
                    break;
                }

                else if (((xposi > xmc + 20) && (xposi < xmc + 180)) && ((yposi > ymc + 10) && (yposi < ymc + 40)))
                {
                    redmove = r.move4;
                    if (b.speed >= r.speed)
                    {
                        do
                        {
                            if ((r.hp > 0) && (r.move4.pp > 0))
                            {
                                bm = usemove(bluemove, b, r);
                                if (r.hp > 0)
                                    rm = usemove(r.move4, r, b);
                                break;
                            }
                            else if (r.move4.pp == 0)
                                ;
                            {
                                setviewport(2, 2, 638, 100, 1);
                                clearviewport();
                                outtextxy(100, 51, "Not enough PP!");
                                setviewport(2, 380, 638, 478, 1);
                                clearviewport();
                                getch();
                                clicksound();
                                break;
                            }
                        } while (constant == 0);
                    }

                    else if (r.speed > b.speed)
                    {
                        do
                        {
                            if (r.move4.pp > 0)
                            {
                                rm = usemove(r.move4, r, b);
                                break;
                            }
                            else if (r.move4.pp == 0)
                                ;
                            {
                                setviewport(2, 2, 638, 100, 1);
                                clearviewport();
                                outtextxy(100, 51, "Not enough PP!");
                                setviewport(2, 380, 638, 478, 1);
                                clearviewport();
                                getch();
                                clicksound();
                                break;
                            }
                        } while (constant == 0);
                        if (b.hp > 0)
                            bm = usemove(bluemove, b, r);
                    }
                    break;
                }
            }
        } while (constant == 0);

        delay(500);
        float effect = checknull(b, redmove) * checksuper(b, redmove) * checknot(b, redmove);
        if (r.speed > b.speed)
        {
            setviewport(2, 380, 638, 478, 1);
            clearviewport();
            setviewport(1, 1, 639, 101, 1);
            clearviewport();
            setviewport(0, 0, 639, 479, 1);
            setcolor(15);
            rectangle(1, 1, 639, 101);
            settextjustify(LEFT_TEXT, LEFT_TEXT);

            if (redmove.pp > 0)
            {
                outtextxy(100, 51, "Your Pokemon used");
                outtextxy(250, 51, redmove.name);
                getch();
                clicksound();
                setviewport(1, 1, 639, 101, 1);
                clearviewport();
                setviewport(0, 0, 639, 479, 1);
                setcolor(15);
                rectangle(1, 1, 639, 101);
                setcolor(15);
                settextjustify(LEFT_TEXT, LEFT_TEXT);

                if (rm == 0)
                {
                    outtextxy(100, 51, "But it missed...");
                    getch();
                    clicksound();
                }
                else if (effect == 0)
                {
                    outtextxy(100, 51, "But it had no effect...");
                    getch();
                    clicksound();
                }
                else if (effect > 1.0)
                {
                    outtextxy(100, 51, "It's super effective!");
                    getch();
                    clicksound();
                }
                else if (effect < 1.0)
                {
                    outtextxy(100, 51, "It's not very effective...");
                    getch();
                    clicksound();
                }
                settextjustify(CENTER_TEXT, CENTER_TEXT);
                delay(500);
                playblue(b);
                delay(500);
            }

            if (b.hp > 0)
            {
                setviewport(1, 1, 639, 101, 1);
                clearviewport();
                setviewport(0, 0, 639, 479, 1);
                setcolor(15);
                rectangle(1, 1, 639, 101);
                setcolor(15);
                settextjustify(LEFT_TEXT, LEFT_TEXT);
                outtextxy(100, 51, "Opponent used");
                outtextxy(225, 51, bluemove.name);
                getch();
                clicksound();
                setviewport(1, 1, 639, 101, 1);
                clearviewport();
                setviewport(0, 0, 639, 479, 1);
                setcolor(15);
                rectangle(1, 1, 639, 101);
                setcolor(15);
                settextjustify(LEFT_TEXT, LEFT_TEXT);
                effect = checknull(r, bluemove) * checksuper(r, bluemove) * checknot(r, bluemove);

                if (bm == 0)
                {
                    outtextxy(100, 51, "But it missed...");
                    getch();
                    clicksound();
                }
                else if (effect == 0)
                {
                    outtextxy(100, 51, "But it had no effect...");
                    getch();
                    clicksound();
                }
                else if (effect > 1.0)
                {
                    outtextxy(100, 51, "It's super effective!");
                    getch();
                    clicksound();
                }
                else if (effect < 1.0)
                {
                    outtextxy(100, 51, "It's not very effective...");
                    getch();
                    clicksound();
                }
                playred(r);
            }
            setcolor(15);
            setviewport(0, 0, 639, 479, 1);
            setcolor(15);
            settextjustify(CENTER_TEXT, CENTER_TEXT);
            setfillstyle(1, 0);
            playred(r);
            setfillstyle(1, 0);
            getch();
            clicksound();
            setposi(u, v);
            callmouse();
        }

        if (b.speed >= r.speed)
        {
            setviewport(2, 380, 638, 478, 1);
            clearviewport();
            setviewport(1, 1, 639, 101, 1);
            clearviewport();
            setviewport(0, 0, 639, 479, 1);
            setcolor(15);
            rectangle(1, 1, 639, 101);
            settextjustify(LEFT_TEXT, LEFT_TEXT);
            outtextxy(100, 51, "Opponent used");
            outtextxy(225, 51, bluemove.name);
            getch();
            clicksound();
            setviewport(1, 1, 639, 101, 1);
            clearviewport();
            setviewport(0, 0, 639, 479, 1);
            setcolor(15);
            rectangle(1, 1, 639, 101);
            setcolor(15);
            settextjustify(LEFT_TEXT, LEFT_TEXT);

            float effect = checknull(r, bluemove) * checksuper(r, bluemove) * checknot(r, bluemove);
            if (bm == 0)
            {
                outtextxy(100, 51, "But it missed...");
                getch();
                clicksound();
            }
            else if (effect == 0)
            {
                outtextxy(100, 51, "But it had no effect...");
                getch();
                clicksound();
            }
            else if (effect > 1.0)
            {
                outtextxy(100, 51, "It's super effective!");
                getch();
                clicksound();
            }
            else if (effect < 1.0)
            {
                outtextxy(100, 51, "It's not very effective...");
                getch();
                clicksound();
            }

            settextjustify(CENTER_TEXT, CENTER_TEXT);
            delay(500);
            playred(r);
            delay(500);
            setcolor(15);
            setviewport(0, 0, 639, 479, 1);
            setcolor(15);
            settextjustify(CENTER_TEXT, CENTER_TEXT);
            setfillstyle(1, 0);
            playred(r);
            setfillstyle(1, 0);
            setposi(u, v);
            callmouse();

            if (r.hp > 0)
            {
                setviewport(2, 380, 638, 478, 1);
                clearviewport();
                setviewport(1, 1, 639, 101, 1);
                clearviewport();
                setviewport(0, 0, 639, 479, 1);
                setcolor(15);
                rectangle(1, 1, 639, 101);
                settextjustify(LEFT_TEXT, LEFT_TEXT);

                if (redmove.pp > 0)
                {
                    outtextxy(100, 51, "Your Pokemon used");
                    outtextxy(250, 51, redmove.name);
                    getch();
                    clicksound();
                    setviewport(1, 1, 639, 101, 1);
                    clearviewport();
                    setviewport(0, 0, 639, 479, 1);
                    setcolor(15);
                    rectangle(1, 1, 639, 101);
                    setcolor(15);
                    settextjustify(LEFT_TEXT, LEFT_TEXT);

                    float effect = checknull(b, redmove) * checksuper(b, redmove) * checknot(b, redmove);
                    if (rm == 0)
                    {
                        outtextxy(100, 51, "But it missed...");
                        getch();
                        clicksound();
                    }
                    else if (effect == 0)
                    {
                        outtextxy(100, 51, "But it had no effect...");
                        getch();
                        clicksound();
                    }
                    else if (effect > 1.0)
                    {
                        outtextxy(100, 51, "It's super effective!");
                        getch();
                        clicksound();
                    }
                    else if (effect < 1.0)
                    {
                        outtextxy(100, 51, "It's not very effective...");
                        getch();
                        clicksound();
                    }
                    settextjustify(CENTER_TEXT, CENTER_TEXT);
                    delay(500);
                    playblue(b);
                    delay(500);
                }
            }
        }
    }

    else if ((xposi > xmc + 150) && (xposi < xmc + 250) && (flag == 0))
    {
        move movearr[4];
        movearr[0] = b.move1;
        movearr[1] = b.move2;
        movearr[2] = b.move3;
        movearr[3] = b.move4;
        move bluemove = movearr[random(4)];
        pokemon z = r;
        for (int i = 0; i < 6; i++)
        {
            if (store[i].dex == r.dex)
                store[i] = r;
        }
        decideswitch(store[0], store[1], store[2], store[3], store[4], store[5]);
        clrscr();
        closegraph();
        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        settextjustify(CENTER_TEXT, CENTER_TEXT);

        setfillstyle(1, 0);
        setcolor(15);
        setviewport(0, 0, 639, 479, 1);
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        playblue(b);
        setfillstyle(1, 0);

        setcolor(15);
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        playred(z);
        setfillstyle(1, 0);

        setviewport(0, 0, 639, 479, 1);
        setcolor(15);
        rectangle(1, 1, 639, 101);
        floodfill(2, 2, 15);
        setcolor(15);
        outtextxy(100, 51, "Come back!");
        outtextxy(180, 51, z.name);
        getch();
        clicksound();
        setviewport(2, 2, 638, 100, 1);
        clearviewport();
        setviewport(0, 0, 639, 479, 1);
        floodfill(2, 2, 15);
        outtextxy(100, 51, "Go!");
        outtextxy(150, 51, r.name);
        getch();
        clicksound();

        setviewport(2, 380, 629, 478, 1);
        clearviewport();
        setviewport(0, 0, 639, 479, 1);
        setcolor(15);
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        playred(r);
        setfillstyle(1, 0);
        setviewport(1, 1, 639, 101, 1);
        clearviewport();
        setviewport(0, 0, 639, 479, 1);
        setcolor(15);
        rectangle(1, 1, 639, 101);
        setcolor(15);
        settextjustify(LEFT_TEXT, LEFT_TEXT);
        bm = usemove(bluemove, b, r);
        outtextxy(100, 51, "Opponent used");
        outtextxy(220, 51, bluemove.name);
        getch();
        clicksound();
        setviewport(1, 1, 639, 101, 1);
        clearviewport();
        setviewport(0, 0, 639, 479, 1);
        setcolor(15);
        rectangle(1, 1, 639, 101);
        setcolor(15);
        settextjustify(LEFT_TEXT, LEFT_TEXT);
        if (checksuper(r, bluemove) != 1.0)
        {
            outtextxy(100, 51, "It's super effective!");
            getch();
            clicksound();
        }
        else if (checknot(r, bluemove) != 1.0)
        {
            outtextxy(100, 51, "It's not very effective...");
            getch();
            clicksound();
        }
        else if (checknull(r, bluemove) == 0)
        {
            outtextxy(100, 51, "But it had no effect...");
            getch();
            clicksound();
        }
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        playred(r);
    }

    else if ((xposi > xmc - 250) && (xposi < xmc - 150))
    {
        clrscr();
        closegraph();
        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        outtextxy(midx, midy, "You forfeited the battle.");
        losesound();
        getch();
        closegraph();
        exit(0);
    }

    setviewport(2, 380, 638, 478, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
}

void bluenext(pokemon &b, pokemon &r)
{
    bluebattle = b;
    setviewport(1, 1, 639, 101, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    setcolor(15);
    rectangle(1, 1, 639, 101);
    setcolor(15);
    settextjustify(LEFT_TEXT, LEFT_TEXT);
    outtextxy(100, 51, "Opponent's Pokemon fainted");
    getch();
    clicksound();
    setviewport(382, 151, 639, 251, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    getch();
    clicksound();
    setviewport(1, 1, 638, 100, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    setcolor(15);
    rectangle(1, 1, 639, 101);
    setcolor(15);
    settextjustify(LEFT_TEXT, LEFT_TEXT);
    outtextxy(100, 41, "Champion Blue is about to send out");
    outtextxy(100, 61, b.name);
    getch();
    clicksound();
    setviewport(1, 1, 639, 101, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    setcolor(15);
    rectangle(1, 1, 639, 101);
    setcolor(15);
    settextjustify(LEFT_TEXT, LEFT_TEXT);
    outtextxy(100, 51, "Would you like to switch your Pokemon?");
    setviewport(2, 380, 638, 478, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    setcolor(15);
    rectangle(1, 379, 639, 479);
    setcolor(15);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    setfillstyle(1, 4);
    rectangle(xmc - 150, ymc - 40, xmc - 50, ymc + 40);
    floodfill(xmc - 149, ymc - 39, 15);
    outtextxy(xmc - 100, ymc, "YES");
    rectangle(xmc + 50, ymc - 40, xmc + 150, ymc + 40);
    floodfill(xmc + 51, ymc - 39, 15);
    outtextxy(xmc + 100, ymc, "NO");
    setfillstyle(1, 0);

    int u = getmaxx(), v = midy;
    setposi(u, v);
    callmouse();
    int constant = 0;
    int xposi, yposi, cl;

    do
    {
        mouseposi(xposi, yposi, cl);
        if ((out.x.bx == 1) && (((xposi > xmc - 150) && (xposi < xmc - 50)) || ((xposi > xmc + 50) && (xposi < xmc + 150))) && ((yposi > ymc - 40) && (yposi < ymc + 40)))
        {
            clicksound();
            break;
        }
    } while (constant == 0);

    if ((xposi > xmc - 150) && (xposi < xmc - 50))
    {
        pokemon z = r;
        for (int i = 0; i < 6; i++)
        {
            if (store[i].dex == r.dex)
                store[i] = r;
        }
        decideswitch(store[0], store[1], store[2], store[3], store[4], store[5]);
        clrscr();
        closegraph();
        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        settextjustify(CENTER_TEXT, CENTER_TEXT);

        setfillstyle(1, 0);
        setcolor(15);
        setviewport(0, 0, 639, 479, 1);
        setfillstyle(1, 0);

        setcolor(15);
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        playred(z);
        setfillstyle(1, 0);
        setviewport(2, 2, 638, 100, 1);

        clearviewport();
        setviewport(0, 0, 639, 479, 1);
        setcolor(15);
        floodfill(2, 2, 15);
        rectangle(1, 1, 639, 101);
        setcolor(15);
        outtextxy(100, 51, "Come back!");
        outtextxy(180, 51, z.name);
        getch();
        clicksound();
        setviewport(2, 2, 638, 100, 1);
        clearviewport();
        setviewport(0, 0, 639, 479, 1);
        outtextxy(100, 51, "Go!");
        outtextxy(150, 51, r.name);
        getch();
        clicksound();

        setcolor(15);
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        playred(r);
        setfillstyle(1, 0);
        getch();
    }

    else
    {
        setviewport(2, 380, 638, 478, 1);
        clearviewport();
        setviewport(0, 0, 639, 479, 1);
        setfillstyle(1, 0);
        setcolor(15);
        setviewport(0, 0, 639, 479, 1);
    }

    settextjustify(CENTER_TEXT, CENTER_TEXT);
    setfillstyle(1, 0);
    setviewport(2, 2, 638, 100, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    settextjustify(LEFT_TEXT, LEFT_TEXT);
    setcolor(15);
    outtextxy(100, 51, "Champion Blue sent out");
    outtextxy(280, 51, b.name);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    getch();
    clicksound();
    playblue(b);
}

void rednext(pokemon &r)
{
    setviewport(1, 1, 639, 101, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    setcolor(15);
    rectangle(1, 1, 639, 101);
    setcolor(15);
    settextjustify(LEFT_TEXT, LEFT_TEXT);
    outtextxy(100, 51, "Your Pokemon fainted!");
    getch();
    clicksound();

    for (int i = 0; i < 6; i++)
    {
        if (store[i].dex == r.dex)
            store[i] = r;
    }

    decideswitch(store[0], store[1], store[2], store[3], store[4], store[5]);
    clrscr();
    closegraph();
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    playblue(bluebattle);
    rectangle(1, 1, 639, 101);
    outtextxy(100, 51, "Go!");
    outtextxy(150, 51, r.name);
    playred(r);
    getch();
    clicksound();
}

void instruct()
{
    rectangle(1, 1, 638, 478);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(midx, 50, "Welcome to the Pokemon League!");
    settextjustify(LEFT_TEXT, LEFT_TEXT);
    outtextxy(40, 100, "Prepare to face the world's most powerful trainer, and your rival since");
    outtextxy(40, 115, "childhood, Blue.");
    outtextxy(40, 155, "You must select a team of 6 Pokemon and battle the opponent.");
    outtextxy(40, 195, "Different typed moves have varying effect on different typed Pokemon.");
    outtextxy(40, 235, "During the battle, HP indicates the number of Health Points your Pokemon");
    outtextxy(40, 250, "has left. If the HP becomes zero, the Pokemon faints and can no longer");
    outtextxy(40, 265, "battle.");
    outtextxy(40, 305, "The number next to each move indicates the move's remaining PP or Power");
    outtextxy(40, 320, "Points. If the move has no PP remaining, the move cannot be used. Be");
    outtextxy(40, 335, "careful not to use a move with no PP remaining, as if you do, you cannot");
    outtextxy(40, 350, "use a move in that turn.");
}

// MAIN
void main()
{
    // MOVES
    move frenzy_plant = {"Frenzy Plant", 4, 150, 80, 5};
    move magical_leaf = {"Magical Leaf", 4, 60, 100, 15};
    move double_edge = {"Double Edge", 1, 120, 90, 10};
    move sludge_bomb = {"Sludge Bomb", 10, 90, 100, 10};
    move blast_burn = {"Blast Burn", 2, 150, 80, 5};
    move fire_fang = {"Fire Fang", 2, 65, 95, 15};
    move air_slash = {"Air Slash", 6, 90, 100, 10};
    move dragon_claw = {"Dragon Claw", 17, 90, 100, 10};
    move eruption = {"Eruption", 2, 150, 75, 5};
    move lava_plume = {"Lava Plume", 2, 80, 100, 10};
    move earthquake = {"Earthquake", 11, 100, 90, 10};
    move shadow_claw = {"Shadow Claw", 9, 70, 100, 15};
    move ice_fang = {"Ice Fang", 16, 65, 95, 15};
    move aqua_tail = {"Aqua Tail", 3, 90, 90, 10};
    move superpower = {"Superpower", 15, 110, 90, 5};
    move hydro_cannon = {"Hydro Cannon", 3, 150, 80, 5};
    move leaf_blade = {"Leaf Blade", 4, 90, 100, 10};
    move leaf_storm = {"Leaf Storm", 4, 130, 90, 5};
    move night_slash = {"Night Slash", 7, 85, 100, 10};
    move dragon_pulse = {"Dragon Pulse", 17, 85, 100, 10};
    move muddy_water = {"Muddy Water", 3, 90, 85, 15};
    move hammer_arm = {"Hammer Arm", 15, 100, 90, 10};
    move wood_hammer = {"Wood Hammer", 4, 120, 90, 5};
    move crunch = {"Crunch", 7, 80, 100, 15};
    move flare_blitz = {"Flare Blitz", 2, 120, 100, 5};
    move close_combat = {"Close Combat", 15, 120, 100, 5};
    move dig = {"Dig", 11, 80, 100, 10};
    move flamethrower = {"Flamethrower", 2, 90, 100, 10};
    move ice_beam = {"Ice Beam", 16, 90, 100, 10};
    move retaliate = {"Retaliate", 1, 70, 100, 15};
    move fire_blast = {"Fire Blast", 2, 110, 85, 5};
    move extreme_speed = {"Extreme Speed", 1, 100, 100, 10};
    move surf = {"Surf", 3, 90, 100, 10};
    move body_slam = {"Body Slam", 1, 85, 100, 15};
    move blizzard = {"Blizzard", 16, 120, 75, 5};
    move stone_edge = {"Stone Edge", 12, 100, 80, 10};
    move brick_break = {"Brick Break", 15, 75, 100, 10};
    move fire_punch = {"Fire Punch", 2, 75, 100, 10};
    move sky_attack = {"Sky Attack", 6, 120, 90, 5};
    move extrasensory = {"Extrasensory", 8, 80, 100, 15};
    move megahorn = {"Megahorn", 13, 120, 85, 10};
    move aerial_ace = {"Aerial Ace", 6, 70, 100, 15};
    move focus_blast = {"Focus Blast", 15, 120, 75, 5};
    move overheat = {"Overheat", 2, 130, 90, 5};
    move thunder_punch = {"Thunder Punch", 5, 75, 100, 10};
    move psychic = {"Psychic", 8, 90, 100, 10};
    move brave_bird = {"Brave Bird", 6, 120, 90, 10};
    move take_down = {"Take Down", 1, 80, 85, 15};
    move bug_buzz = {"Bug Buzz", 13, 90, 100, 10};
    move fiery_dance = {"Fiery Dance", 2, 80, 100, 15};
    move hurricane = {"Hurricane", 6, 110, 70, 10};
    move icicle_crash = {"Icicle Crash", 16, 85, 90, 10};
    move iron_tail = {"Iron Tail", 14, 100, 75, 10};
    move poison_jab = {"Poison Jab", 10, 80, 100, 15};
    move thunderbolt = {"Thunderbolt", 5, 90, 100, 10};
    move flash_cannon = {"Flash Cannon", 14, 80, 100, 15};
    move thrash = {"Thrash", 1, 120, 100, 5};
    move rock_slide = {"Rock Slide", 12, 75, 90, 15};
    move giga_impact = {"Giga Impact", 1, 150, 90, 5};
    move slash = {"Slash", 1, 70, 100, 15};
    move xscissor = {"X-Scissor", 13, 80, 100, 15};
    move iron_head = {"Iron Head", 14, 80, 100, 15};
    move foul_play = {"Foul Play", 7, 95, 100, 10};
    move power_gem = {"Power Gem", 12, 80, 100, 15};
    move hyper_beam = {"Hyper Beam", 1, 150, 90, 5};
    move discharge = {"Discharge", 5, 85, 100, 10};
    move volt_tackle = {"Volt Tackle", 5, 110, 100, 5};
    move signal_beam = {"Signal Beam", 13, 75, 100, 15};
    move thunder = {"Thunder", 5, 120, 70, 5};
    move shadow_ball = {"Shadow Ball", 9, 85, 100, 10};
    move vital_throw = {"Vital Throw", 15, 80, 100, 10};
    move night_shade = {"Night Shade", 9, 80, 100, 10};
    move outrage = {"Outrage", 17, 120, 100, 5};
    move night_daze = {"Night Daze", 7, 95, 95, 10};
    move dark_pulse = {"Dark Pulse", 7, 85, 100, 10};
    move zap_cannon = {"Zap Cannon", 5, 120, 60, 5};
    move tri_attack = {"Tri Attack", 1, 90, 100, 10};
    move energy_ball = {"Energy Ball", 4, 95, 100, 10};
    move sucker_punch = {"Sucker Punch", 7, 75, 100, 10};
    move petal_dance = {"Petal Dance", 4, 120, 100, 5};
    move zen_headbutt = {"Zen Headbutt", 8, 85, 90, 10};
    move meteor_mash = {"Meteor Mash", 14, 90, 90, 10};
    move steamroller = {"Steamroller", 13, 75, 100, 15};
    move rock_climb = {"Rock Climb", 1, 95, 85, 15};
    move heat_wave = {"Heat Wave", 2, 95, 90, 10};
    move future_sight = {"Future Sight", 8, 100, 100, 10};
    move draco_meteor = {"Draco Meteor", 17, 130, 90, 5};
    move aura_sphere = {"Aura Sphere", 15, 85, 100, 10};
    move uturn = {"U-Turn", 13, 70, 100, 15};
    move scald = {"Scald", 3, 85, 100, 10};
    move dragon_tail = {"Dragon Tail", 17, 70, 90, 15};
    move sky_uppercut = {"Sky Uppercut", 15, 85, 90, 15};

    // VENUSAUR
    pokemon venusaur;
    venusaur.name = "VENUSAUR";
    venusaur.dex = 1;
    venusaur.type1 = 4;
    venusaur.type2 = 10;
    venusaur.atk = 273;
    venusaur.def = 276;
    venusaur.speed = 240;
    venusaur.hp = 240;
    venusaur.move1 = frenzy_plant;
    venusaur.move2 = magical_leaf;
    venusaur.move3 = double_edge;
    venusaur.move4 = sludge_bomb;
    // CHARIZARD
    pokemon charizard;
    charizard.name = "CHARIZARD";
    charizard.dex = 2;
    charizard.type1 = 2;
    charizard.type2 = 6;
    charizard.atk = 291;
    charizard.def = 246;
    charizard.speed = 300;
    charizard.hp = 234;
    charizard.move1 = blast_burn;
    charizard.move2 = fire_fang;
    charizard.move3 = air_slash;
    charizard.move4 = dragon_claw;
    // TYPHLOSION
    pokemon typhlosion;
    typhlosion.name = "TYPHLOSION";
    typhlosion.dex = 3;
    typhlosion.type1 = 2;
    typhlosion.type2 = 0;
    typhlosion.atk = 291;
    typhlosion.def = 246;
    typhlosion.speed = 300;
    typhlosion.hp = 234;
    typhlosion.move1 = eruption;
    typhlosion.move2 = lava_plume;
    typhlosion.move3 = earthquake;
    typhlosion.move4 = shadow_claw;
    // FERALIGATR
    pokemon feraligatr;
    feraligatr.name = "FERALIGATR";
    feraligatr.dex = 4;
    feraligatr.type1 = 3;
    feraligatr.type2 = 0;
    feraligatr.atk = 276;
    feraligatr.def = 276;
    feraligatr.speed = 234;
    feraligatr.hp = 255;
    feraligatr.move1 = hydro_cannon;
    feraligatr.move2 = ice_fang;
    feraligatr.move3 = aqua_tail;
    feraligatr.move4 = superpower;
    // SCEPTILE
    pokemon sceptile;
    sceptile.name = "SCEPTILE";
    sceptile.dex = 5;
    sceptile.type1 = 4;
    sceptile.type2 = 0;
    sceptile.atk = 285;
    sceptile.def = 225;
    sceptile.speed = 360;
    sceptile.hp = 210;
    sceptile.move1 = leaf_blade;
    sceptile.move2 = leaf_storm;
    sceptile.move3 = night_slash;
    sceptile.move4 = dragon_pulse;
    // SWAMPERT
    pokemon swampert;
    swampert.name = "SWAMPERT";
    swampert.dex = 6;
    swampert.type1 = 3;
    swampert.type2 = 11;
    swampert.atk = 294;
    swampert.def = 270;
    swampert.speed = 180;
    swampert.hp = 300;
    swampert.move1 = hydro_cannon;
    swampert.move2 = muddy_water;
    swampert.move3 = hammer_arm;
    swampert.move4 = earthquake;
    // TORTERRA
    pokemon torterra;
    torterra.name = "TORTERRA";
    torterra.dex = 7;
    torterra.type1 = 4;
    torterra.type2 = 11;
    torterra.atk = 276;
    torterra.def = 285;
    torterra.speed = 168;
    torterra.hp = 285;
    torterra.move1 = wood_hammer;
    torterra.move2 = energy_ball;
    torterra.move3 = crunch;
    torterra.move4 = earthquake;
    // INFERNAPE
    pokemon infernape;
    infernape.name = "INFERNAPE";
    infernape.dex = 8;
    infernape.type1 = 2;
    infernape.type2 = 15;
    infernape.atk = 312;
    infernape.def = 213;
    infernape.speed = 324;
    infernape.hp = 228;
    infernape.move1 = flare_blitz;
    infernape.move2 = flamethrower;
    infernape.move3 = close_combat;
    infernape.move4 = dig;
    // SAMUROTT
    pokemon samurott;
    samurott.name = "SAMUROTT";
    samurott.dex = 9;
    samurott.type1 = 3;
    samurott.type2 = 0;
    samurott.atk = 312;
    samurott.def = 234;
    samurott.speed = 210;
    samurott.hp = 285;
    samurott.move1 = hydro_cannon;
    samurott.move2 = aqua_tail;
    samurott.move3 = retaliate;
    samurott.move4 = ice_beam;
    // ARCANINE
    pokemon arcanine;
    arcanine.name = "ARCANINE";
    arcanine.dex = 10;
    arcanine.type1 = 2;
    arcanine.type2 = 0;
    arcanine.atk = 315;
    arcanine.def = 240;
    arcanine.speed = 285;
    arcanine.hp = 270;
    arcanine.move1 = fire_blast;
    arcanine.move2 = fire_fang;
    arcanine.move3 = dragon_pulse;
    arcanine.move4 = extreme_speed;
    // LAPRAS
    pokemon lapras;
    lapras.name = "LAPRAS";
    lapras.dex = 11;
    lapras.type1 = 3;
    lapras.type2 = 16;
    lapras.atk = 255;
    lapras.def = 264;
    lapras.speed = 180;
    lapras.hp = 390;
    lapras.move1 = ice_beam;
    lapras.move2 = surf;
    lapras.move3 = body_slam;
    lapras.move4 = blizzard;
    // MACHAMP
    pokemon machamp;
    machamp.name = "MACHAMP";
    machamp.dex = 12;
    machamp.type1 = 15;
    machamp.type2 = 0;
    machamp.atk = 294;
    machamp.def = 249;
    machamp.speed = 165;
    machamp.hp = 270;
    machamp.move1 = close_combat;
    machamp.move2 = vital_throw;
    machamp.move3 = stone_edge;
    machamp.move4 = fire_punch;
    // TOGEKISS
    pokemon togekiss;
    togekiss.name = "TOGEKISS";
    togekiss.dex = 13;
    togekiss.type1 = 1;
    togekiss.type2 = 6;
    togekiss.atk = 255;
    togekiss.def = 315;
    togekiss.speed = 240;
    togekiss.hp = 255;
    togekiss.move1 = sky_attack;
    togekiss.move2 = air_slash;
    togekiss.move3 = double_edge;
    togekiss.move4 = extrasensory;
    // HERACROSS
    pokemon heracross;
    heracross.name = "HERACROSS";
    heracross.dex = 14;
    heracross.type1 = 13;
    heracross.type2 = 15;
    heracross.atk = 249;
    heracross.def = 255;
    heracross.speed = 255;
    heracross.hp = 240;
    heracross.move1 = brick_break;
    heracross.move2 = megahorn;
    heracross.move3 = close_combat;
    heracross.move4 = aerial_ace;
    // MAGMORTAR
    pokemon magmortar;
    magmortar.name = "MAGMORTAR";
    magmortar.dex = 15;
    magmortar.type1 = 2;
    magmortar.type2 = 0;
    magmortar.atk = 330;
    magmortar.def = 243;
    magmortar.speed = 249;
    magmortar.hp = 255;
    magmortar.move1 = overheat;
    magmortar.move2 = thunder_punch;
    magmortar.move3 = flamethrower;
    magmortar.move4 = psychic;
    // STARAPTOR
    pokemon staraptor;
    staraptor.name = "STARAPTOR";
    staraptor.dex = 16;
    staraptor.type1 = 1;
    staraptor.type2 = 6;
    staraptor.atk = 255;
    staraptor.def = 195;
    staraptor.speed = 300;
    staraptor.hp = 255;
    staraptor.move1 = close_combat;
    staraptor.move2 = brave_bird;
    staraptor.move3 = aerial_ace;
    staraptor.move4 = take_down;
    // VOLCARONA
    pokemon volcarona;
    volcarona.name = "VOLCARONA";
    volcarona.dex = 17;
    volcarona.type1 = 2;
    volcarona.type2 = 13;
    volcarona.atk = 294;
    volcarona.def = 255;
    volcarona.speed = 300;
    volcarona.hp = 255;
    volcarona.move1 = bug_buzz;
    volcarona.move2 = overheat;
    volcarona.move3 = fiery_dance;
    volcarona.move4 = hurricane;
    // BEARTIC
    pokemon beartic;
    beartic.name = "BEARTIC";
    beartic.dex = 18;
    beartic.type1 = 16;
    beartic.type2 = 0;
    beartic.atk = 285;
    beartic.def = 240;
    beartic.speed = 150;
    beartic.hp = 285;
    beartic.move1 = blizzard;
    beartic.move2 = icicle_crash;
    beartic.move3 = brick_break;
    beartic.move4 = surf;
    // AGGRON
    pokemon aggron;
    aggron.name = "AGGRON";
    aggron.dex = 19;
    aggron.type1 = 12;
    aggron.type2 = 14;
    aggron.atk = 255;
    aggron.def = 360;
    aggron.speed = 150;
    aggron.hp = 210;
    aggron.move1 = iron_tail;
    aggron.move2 = stone_edge;
    aggron.move3 = thunderbolt;
    aggron.move4 = flash_cannon;
    // NIDOKING
    pokemon nidoking;
    nidoking.name = "NIDOKING";
    nidoking.dex = 20;
    nidoking.type1 = 10;
    nidoking.type2 = 11;
    nidoking.atk = 282;
    nidoking.def = 228;
    nidoking.speed = 255;
    nidoking.hp = 243;
    nidoking.move1 = earthquake;
    nidoking.move2 = poison_jab;
    nidoking.move3 = thrash;
    nidoking.move4 = rock_slide;
    // SNORLAX
    pokemon snorlax;
    snorlax.name = "SNORLAX";
    snorlax.dex = 21;
    snorlax.type1 = 1;
    snorlax.type2 = 0;
    snorlax.atk = 267;
    snorlax.def = 267;
    snorlax.speed = 90;
    snorlax.hp = 480;
    snorlax.move1 = giga_impact;
    snorlax.move2 = crunch;
    snorlax.move3 = zen_headbutt;
    snorlax.move4 = brick_break;
    // URSARING
    pokemon ursaring;
    ursaring.name = "URSARING";
    ursaring.dex = 22;
    ursaring.type1 = 1;
    ursaring.type2 = 0;
    ursaring.atk = 309;
    ursaring.def = 255;
    ursaring.speed = 165;
    ursaring.hp = 270;
    ursaring.move1 = focus_blast;
    ursaring.move2 = crunch;
    ursaring.move3 = slash;
    ursaring.move4 = shadow_claw;
    // SCIZOR
    pokemon scizor;
    scizor.name = "SCIZOR";
    scizor.dex = 23;
    scizor.type1 = 13;
    scizor.type2 = 14;
    scizor.atk = 279;
    scizor.def = 270;
    scizor.speed = 195;
    scizor.hp = 210;
    scizor.move1 = xscissor;
    scizor.move2 = iron_head;
    scizor.move3 = superpower;
    scizor.move4 = bug_buzz;
    // AERODACTYL
    pokemon aerodactyl;
    aerodactyl.name = "AERODACTYL";
    aerodactyl.dex = 24;
    aerodactyl.type1 = 12;
    aerodactyl.type2 = 6;
    aerodactyl.atk = 249;
    aerodactyl.def = 210;
    aerodactyl.speed = 390;
    aerodactyl.hp = 240;
    aerodactyl.move1 = stone_edge;
    aerodactyl.move2 = sky_attack;
    aerodactyl.move3 = ice_fang;
    aerodactyl.move4 = dragon_claw;
    // GLISCOR
    pokemon gliscor;
    gliscor.name = "GLISCOR";
    gliscor.dex = 25;
    gliscor.type1 = 11;
    gliscor.type2 = 6;
    gliscor.atk = 210;
    gliscor.def = 300;
    gliscor.speed = 285;
    gliscor.hp = 225;
    gliscor.move1 = sky_uppercut;
    gliscor.move2 = xscissor;
    gliscor.move3 = earthquake;
    gliscor.move4 = fire_fang;
    // KROOKODILE
    pokemon krookodile;
    krookodile.name = "KROOKODILE";
    krookodile.dex = 26;
    krookodile.type1 = 11;
    krookodile.type2 = 7;
    krookodile.atk = 273;
    krookodile.def = 225;
    krookodile.speed = 276;
    krookodile.hp = 285;
    krookodile.move1 = foul_play;
    krookodile.move2 = earthquake;
    krookodile.move3 = dig;
    krookodile.move4 = aqua_tail;
    // GIGALITH
    pokemon gigalith;
    gigalith.name = "GIGALITH";
    gigalith.dex = 27;
    gigalith.type1 = 12;
    gigalith.type2 = 0;
    gigalith.atk = 297;
    gigalith.def = 315;
    gigalith.speed = 75;
    gigalith.hp = 255;
    gigalith.move1 = power_gem;
    gigalith.move2 = stone_edge;
    gigalith.move3 = iron_head;
    gigalith.move4 = giga_impact;
    // GYARADOS
    pokemon gyarados;
    gyarados.name = "GYARADOS";
    gyarados.dex = 28;
    gyarados.type1 = 3;
    gyarados.type2 = 6;
    gyarados.atk = 279;
    gyarados.def = 270;
    gyarados.speed = 243;
    gyarados.hp = 285;
    gyarados.move1 = outrage;
    gyarados.move2 = surf;
    gyarados.move3 = crunch;
    gyarados.move4 = ice_beam;
    // MAGNEZONE
    pokemon magnezone;
    magnezone.name = "MAGNEZONE";
    magnezone.dex = 29;
    magnezone.type1 = 5;
    magnezone.type2 = 14;
    magnezone.atk = 300;
    magnezone.def = 309;
    magnezone.speed = 180;
    magnezone.hp = 210;
    magnezone.move1 = flash_cannon;
    magnezone.move2 = discharge;
    magnezone.move3 = zap_cannon;
    magnezone.move4 = tri_attack;
    // RAICHU
    pokemon raichu;
    raichu.name = "RAICHU";
    raichu.dex = 30;
    raichu.type1 = 5;
    raichu.type2 = 0;
    raichu.atk = 270;
    raichu.def = 207;
    raichu.speed = 330;
    raichu.hp = 180;
    raichu.move1 = volt_tackle;
    raichu.move2 = thunderbolt;
    raichu.move3 = iron_tail;
    raichu.move4 = hyper_beam;
    // AMPHAROS
    pokemon ampharos;
    ampharos.name = "AMPHAROS";
    ampharos.dex = 31;
    ampharos.type1 = 5;
    ampharos.type2 = 0;
    ampharos.atk = 285;
    ampharos.def = 264;
    ampharos.speed = 165;
    ampharos.hp = 270;
    ampharos.move1 = thunder;
    ampharos.move2 = signal_beam;
    ampharos.move3 = discharge;
    ampharos.move4 = power_gem;
    // ELECTIVIRE
    pokemon electivire;
    electivire.name = "ELECTIVIRE";
    electivire.dex = 32;
    electivire.type1 = 5;
    electivire.type2 = 0;
    electivire.atk = 327;
    electivire.def = 228;
    electivire.speed = 285;
    electivire.hp = 225;
    electivire.move1 = thunder;
    electivire.move2 = earthquake;
    electivire.move3 = brick_break;
    electivire.move4 = thunder_punch;
    // TOXICROAK
    pokemon toxicroak;
    toxicroak.name = "TOXICROAK";
    toxicroak.dex = 33;
    toxicroak.type1 = 10;
    toxicroak.type2 = 15;
    toxicroak.atk = 288;
    toxicroak.def = 195;
    toxicroak.speed = 255;
    toxicroak.hp = 249;
    toxicroak.move1 = poison_jab;
    toxicroak.move2 = brick_break;
    toxicroak.move3 = hyper_beam;
    toxicroak.move4 = sucker_punch;
    // ROSERADE
    pokemon roserade;
    roserade.name = "ROSERADE";
    roserade.dex = 34;
    roserade.type1 = 4;
    roserade.type2 = 10;
    roserade.atk = 294;
    roserade.def = 255;
    roserade.speed = 270;
    roserade.hp = 180;
    roserade.move1 = magical_leaf;
    roserade.move2 = petal_dance;
    roserade.move3 = poison_jab;
    roserade.move4 = shadow_ball;
    // SCOLIPEDE
    pokemon scolipede;
    scolipede.name = "SCOLIPEDE";
    scolipede.dex = 35;
    scolipede.type1 = 13;
    scolipede.type2 = 10;
    scolipede.atk = 234;
    scolipede.def = 237;
    scolipede.speed = 336;
    scolipede.hp = 180;
    scolipede.move1 = megahorn;
    scolipede.move2 = sludge_bomb;
    scolipede.move3 = steamroller;
    scolipede.move4 = rock_climb;
    // LUXRAY
    pokemon luxray;
    luxray.name = "LUXRAY";
    luxray.dex = 36;
    luxray.type1 = 5;
    luxray.type2 = 0;
    luxray.atk = 324;
    luxray.def = 237;
    luxray.speed = 210;
    luxray.hp = 240;
    luxray.move1 = discharge;
    luxray.move2 = crunch;
    luxray.move3 = thunder;
    luxray.move4 = extreme_speed;
    // GENGAR
    pokemon gengar;
    gengar.name = "GENGAR";
    gengar.dex = 37;
    gengar.type1 = 9;
    gengar.type2 = 10;
    gengar.atk = 294;
    gengar.def = 204;
    gengar.speed = 330;
    gengar.hp = 180;
    gengar.move1 = shadow_ball;
    gengar.move2 = night_shade;
    gengar.move3 = sucker_punch;
    gengar.move4 = hyper_beam;
    // EXEGGUTOR
    pokemon exeggutor;
    exeggutor.name = "EXEGGUTOR";
    exeggutor.dex = 38;
    exeggutor.type1 = 4;
    exeggutor.type2 = 8;
    exeggutor.atk = 339;
    exeggutor.def = 240;
    exeggutor.speed = 165;
    exeggutor.hp = 285;
    exeggutor.move1 = psychic;
    exeggutor.move2 = magical_leaf;
    exeggutor.move3 = sludge_bomb;
    exeggutor.move4 = wood_hammer;
    // ALAKAZAM
    pokemon alakazam;
    alakazam.name = "ALAKAZAM";
    alakazam.dex = 39;
    alakazam.type1 = 8;
    alakazam.type2 = 0;
    alakazam.atk = 279;
    alakazam.def = 210;
    alakazam.speed = 360;
    alakazam.hp = 165;
    alakazam.move1 = future_sight;
    alakazam.move2 = psychic;
    alakazam.move3 = shadow_ball;
    alakazam.move4 = thunderbolt;
    // UMBREON
    pokemon weavile;
    weavile.name = "WEAVILE";
    weavile.dex = 40;
    weavile.type1 = 7;
    weavile.type2 = 16;
    weavile.atk = 249;
    weavile.def = 225;
    weavile.speed = 375;
    weavile.hp = 210;
    weavile.move1 = ice_beam;
    weavile.move2 = shadow_ball;
    weavile.move3 = blizzard;
    weavile.move4 = dark_pulse;
    // GOTHITELLE
    pokemon gothitelle;
    gothitelle.name = "GOTHITELLE";
    gothitelle.dex = 41;
    gothitelle.type1 = 8;
    gothitelle.type2 = 0;
    gothitelle.atk = 225;
    gothitelle.def = 309;
    gothitelle.speed = 195;
    gothitelle.hp = 210;
    gothitelle.move1 = future_sight;
    gothitelle.move2 = dark_pulse;
    gothitelle.move3 = thunderbolt;
    gothitelle.move4 = psychic;
    // FROSLASS
    pokemon froslass;
    froslass.name = "FROSLASS";
    froslass.dex = 42;
    froslass.type1 = 16;
    froslass.type2 = 9;
    froslass.atk = 240;
    froslass.def = 210;
    froslass.speed = 330;
    froslass.hp = 210;
    froslass.move1 = blizzard;
    froslass.move2 = shadow_ball;
    froslass.move3 = ice_beam;
    froslass.move4 = psychic;
    // SPIRITOMB
    pokemon spiritomb;
    spiritomb.name = "SPIRITOMB";
    spiritomb.dex = 43;
    spiritomb.type1 = 9;
    spiritomb.type2 = 7;
    spiritomb.atk = 276;
    spiritomb.def = 324;
    spiritomb.speed = 105;
    spiritomb.hp = 150;
    spiritomb.move1 = shadow_ball;
    spiritomb.move2 = dark_pulse;
    spiritomb.move3 = psychic;
    spiritomb.move4 = hyper_beam;
    // DUSKNOIR
    pokemon dusknoir;
    dusknoir.name = "DUSKNOIR";
    dusknoir.dex = 44;
    dusknoir.type1 = 9;
    dusknoir.type2 = 0;
    dusknoir.atk = 249;
    dusknoir.def = 405;
    dusknoir.speed = 135;
    dusknoir.hp = 135;
    dusknoir.move1 = dark_pulse;
    dusknoir.move2 = future_sight;
    dusknoir.move3 = shadow_ball;
    dusknoir.move4 = thunder_punch;
    // ZOROARK
    pokemon zoroark;
    zoroark.name = "ZOROARK";
    zoroark.dex = 45;
    zoroark.type1 = 7;
    zoroark.type2 = 0;
    zoroark.atk = 339;
    zoroark.def = 180;
    zoroark.speed = 315;
    zoroark.hp = 180;
    zoroark.move1 = uturn;
    zoroark.move2 = foul_play;
    zoroark.move3 = night_daze;
    zoroark.move4 = flamethrower;
    // DRAGONITE
    pokemon dragonite;
    dragonite.name = "DRAGONITE";
    dragonite.dex = 46;
    dragonite.type1 = 17;
    dragonite.type2 = 6;
    dragonite.atk = 354;
    dragonite.def = 294;
    dragonite.speed = 240;
    dragonite.hp = 273;
    dragonite.move1 = outrage;
    dragonite.move2 = fire_punch;
    dragonite.move3 = dragon_claw;
    dragonite.move4 = air_slash;
    // TYRANITAR
    pokemon tyranitar;
    tyranitar.name = "TYRANITAR";
    tyranitar.dex = 47;
    tyranitar.type1 = 12;
    tyranitar.type2 = 7;
    tyranitar.atk = 345;
    tyranitar.def = 315;
    tyranitar.speed = 183;
    tyranitar.hp = 300;
    tyranitar.move1 = crunch;
    tyranitar.move2 = stone_edge;
    tyranitar.move3 = earthquake;
    tyranitar.move4 = hyper_beam;
    // HAXORUS
    pokemon haxorus;
    haxorus.name = "HAXORUS";
    haxorus.dex = 48;
    haxorus.type1 = 17;
    haxorus.type2 = 0;
    haxorus.atk = 312;
    haxorus.def = 240;
    haxorus.speed = 291;
    haxorus.hp = 228;
    haxorus.move1 = dragon_pulse;
    haxorus.move2 = outrage;
    haxorus.move3 = brick_break;
    haxorus.move4 = aqua_tail;
    // GARDEVOIR
    pokemon gardevoir;
    gardevoir.name = "GARDEVOIR";
    gardevoir.dex = 49;
    gardevoir.type1 = 8;
    gardevoir.type2 = 0;
    gardevoir.atk = 285;
    gardevoir.def = 270;
    gardevoir.speed = 240;
    gardevoir.hp = 204;
    gardevoir.move1 = psychic;
    gardevoir.move2 = shadow_ball;
    gardevoir.move3 = focus_blast;
    gardevoir.move4 = thunderbolt;
    // METAGROSS
    pokemon metagross;
    metagross.name = "METAGROSS";
    metagross.dex = 50;
    metagross.type1 = 8;
    metagross.type2 = 14;
    metagross.atk = 345;
    metagross.def = 330;
    metagross.speed = 210;
    metagross.hp = 240;
    metagross.move1 = meteor_mash;
    metagross.move2 = zen_headbutt;
    metagross.move3 = hammer_arm;
    metagross.move4 = earthquake;
    // GARCHOMP
    pokemon garchomp;
    garchomp.name = "GARCHOMP";
    garchomp.dex = 51;
    garchomp.type1 = 17;
    garchomp.type2 = 11;
    garchomp.atk = 315;
    garchomp.def = 270;
    garchomp.speed = 306;
    garchomp.hp = 324;
    garchomp.move1 = draco_meteor;
    garchomp.move2 = earthquake;
    garchomp.move3 = dragon_claw;
    garchomp.move4 = iron_head;
    // HYDREIGON
    pokemon hydreigon;
    hydreigon.name = "HYDREIGON";
    hydreigon.dex = 52;
    hydreigon.type1 = 7;
    hydreigon.type2 = 17;
    hydreigon.atk = 345;
    hydreigon.def = 270;
    hydreigon.speed = 294;
    hydreigon.hp = 276;
    hydreigon.move1 = dark_pulse;
    hydreigon.move2 = dragon_pulse;
    hydreigon.move3 = heat_wave;
    hydreigon.move4 = draco_meteor;
    // LUCARIO
    pokemon lucario;
    lucario.name = "LUCARIO";
    lucario.dex = 53;
    lucario.type1 = 15;
    lucario.type2 = 14;
    lucario.atk = 339;
    lucario.def = 210;
    lucario.speed = 270;
    lucario.hp = 210;
    lucario.move1 = close_combat;
    lucario.move2 = dragon_pulse;
    lucario.move3 = aura_sphere;
    lucario.move4 = extreme_speed;
    // MILOTIC
    pokemon milotic;
    milotic.name = "MILOTIC";
    milotic.dex = 54;
    milotic.type1 = 3;
    milotic.type2 = 0;
    milotic.atk = 240;
    milotic.def = 306;
    milotic.speed = 243;
    milotic.hp = 285;
    milotic.move1 = ice_beam;
    milotic.move2 = hydro_cannon;
    milotic.move3 = dragon_tail;
    milotic.move4 = scald;

    pokemon team[6];

    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(midx, midy - 20, "POKEMON BATTLE SIMULATOR");
    outtextxy(midx, midy + 20, "Press any key to begin");
    startsound();
    getch();
    clicksound();
    clearviewport();
    instruct();
    getch();
    clicksound();
    clearviewport();
    setfillstyle(1, 9);
    setcolor(1);
    settextjustify(LEFT_TEXT, LEFT_TEXT);
    rectangle(100, 400, 539, 450);
    setcolor(4);
    outtextxy(120, 420, "PROFESSOR OAK: Welcome to the Pokemon League!");
    getch();
    clicksound();

    setviewport(126, 401, 513, 449, 1);
    clearviewport();
    setviewport(0, 0, 639, 479, 1);
    outtextxy(120, 420, "PROFESSOR OAK: It's time to choose your Pokemon!");
    getch();
    clicksound();
    clearviewport();
    int back = 1;
    setcolor(15);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    int constant = 0;
    int xposi, yposi, cl, a, b;
    a = getmaxx();
    b = midy;
    setposi(a, b);
    callmouse();
    outtextxy(midx, 50, "POKEMON MENU");

    pokemon group1[8];
    pokemon group2[8];
    pokemon group3[8];
    pokemon group4[8];
    pokemon group5[8];
    pokemon group6[8];

    do
    {
        cleardevice();

        // GROUP 1
        outtextxy(midx, 80, "Choose a starter Pokemon");
        printpokemon(venusaur, charizard, typhlosion, feraligatr, sceptile, swampert, torterra, infernape, samurott);

        do
        {
            mouseposi(xposi, yposi, cl);
            if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
            {
                clicksound();
                break;
            }
        } while (constant == 0);

        if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
        {
            team[0] = venusaur;
            group1[0] = charizard;
            group1[1] = typhlosion;
            group1[2] = feraligatr;
            group1[3] = sceptile;
            group1[4] = swampert;
            group1[5] = torterra;
            group1[6] = infernape;
            group1[7] = samurott;
        }

        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
        {
            team[0] = charizard;
            group1[0] = venusaur;
            group1[1] = typhlosion;
            group1[2] = feraligatr;
            group1[3] = sceptile;
            group1[4] = swampert;
            group1[5] = torterra;
            group1[6] = infernape;
            group1[7] = samurott;
        }

        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
        {
            team[0] = typhlosion;
            group1[0] = venusaur;
            group1[1] = charizard;
            group1[2] = feraligatr;
            group1[3] = sceptile;
            group1[4] = swampert;
            group1[5] = torterra;
            group1[6] = infernape;
            group1[7] = samurott;
        }

        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
        {
            team[0] = feraligatr;
            group1[0] = venusaur;
            group1[1] = charizard;
            group1[2] = typhlosion;
            group1[3] = sceptile;
            group1[4] = swampert;
            group1[5] = torterra;
            group1[6] = infernape;
            group1[7] = samurott;
        }

        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
        {
            team[0] = sceptile;
            group1[0] = venusaur;
            group1[1] = charizard;
            group1[2] = typhlosion;
            group1[3] = feraligatr;
            group1[4] = swampert;
            group1[5] = torterra;
            group1[6] = infernape;
            group1[7] = samurott;
        }

        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
        {
            team[0] = swampert;
            group1[0] = venusaur;
            group1[1] = charizard;
            group1[2] = typhlosion;
            group1[3] = feraligatr;
            group1[4] = sceptile;
            group1[5] = torterra;
            group1[6] = infernape;
            group1[7] = samurott;
        }

        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
        {
            team[0] = torterra;
            group1[0] = venusaur;
            group1[1] = charizard;
            group1[2] = typhlosion;
            group1[3] = feraligatr;
            group1[4] = sceptile;
            group1[5] = swampert;
            group1[6] = infernape;
            group1[7] = samurott;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
        {
            team[0] = infernape;
            group1[0] = venusaur;
            group1[1] = charizard;
            group1[2] = typhlosion;
            group1[3] = feraligatr;
            group1[4] = sceptile;
            group1[5] = swampert;
            group1[6] = torterra;
            group1[7] = samurott;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
        {
            team[0] = samurott;
            group1[0] = venusaur;
            group1[1] = charizard;
            group1[2] = typhlosion;
            group1[3] = feraligatr;
            group1[4] = sceptile;
            group1[5] = swampert;
            group1[6] = torterra;
            group1[7] = infernape;
        }

        clrscr();
        closegraph();

        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        setposi(a, b);
        callmouse();

        // GROUP 2
        outtextxy(midx, 80, "Choose one Pokemon out of the following");
        printpokemon(arcanine, lapras, machamp, togekiss, heracross, magmortar, staraptor, volcarona, beartic);

        do
        {
            mouseposi(xposi, yposi, cl);
            if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
            {
                clicksound();
                break;
            }
        } while (constant == 0);

        if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
        {
            team[1] = arcanine;
            group2[0] = lapras;
            group2[1] = machamp;
            group2[2] = togekiss;
            group2[3] = heracross;
            group2[4] = magmortar;
            group2[5] = staraptor;
            group2[6] = volcarona;
            group2[7] = beartic;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
        {
            team[1] = lapras;
            group2[0] = arcanine;
            group2[1] = machamp;
            group2[2] = togekiss;
            group2[3] = heracross;
            group2[4] = magmortar;
            group2[5] = staraptor;
            group2[6] = volcarona;
            group2[7] = beartic;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
        {
            team[1] = machamp;
            group2[0] = arcanine;
            group2[1] = lapras;
            group2[2] = togekiss;
            group2[3] = heracross;
            group2[4] = magmortar;
            group2[5] = staraptor;
            group2[6] = volcarona;
            group2[7] = beartic;
        }
        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
        {
            team[1] = togekiss;
            group2[0] = arcanine;
            group2[1] = lapras;
            group2[2] = machamp;
            group2[3] = heracross;
            group2[4] = magmortar;
            group2[5] = staraptor;
            group2[6] = volcarona;
            group2[7] = beartic;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
        {
            team[1] = heracross;
            group2[0] = arcanine;
            group2[1] = lapras;
            group2[2] = machamp;
            group2[3] = togekiss;
            group2[4] = magmortar;
            group2[5] = staraptor;
            group2[6] = volcarona;
            group2[7] = beartic;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
        {
            team[1] = magmortar;
            group2[0] = arcanine;
            group2[1] = lapras;
            group2[2] = machamp;
            group2[3] = togekiss;
            group2[4] = heracross;
            group2[5] = staraptor;
            group2[6] = volcarona;
            group2[7] = beartic;
        }
        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
        {
            team[1] = staraptor;
            group2[0] = arcanine;
            group2[1] = lapras;
            group2[2] = machamp;
            group2[3] = togekiss;
            group2[4] = heracross;
            group2[5] = magmortar;
            group2[6] = volcarona;
            group2[7] = beartic;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
        {
            team[1] = volcarona;
            group2[0] = arcanine;
            group2[1] = lapras;
            group2[2] = machamp;
            group2[3] = togekiss;
            group2[4] = heracross;
            group2[5] = magmortar;
            group2[6] = staraptor;
            group2[7] = beartic;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
        {
            team[1] = beartic;
            group2[0] = arcanine;
            group2[1] = lapras;
            group2[2] = machamp;
            group2[3] = togekiss;
            group2[4] = heracross;
            group2[5] = magmortar;
            group2[6] = staraptor;
            group2[7] = volcarona;
        }

        clrscr();
        closegraph();

        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        setposi(a, b);
        callmouse();

        // GROUP 3
        outtextxy(midx, 80, "Choose one Pokemon out of the following");
        printpokemon(aggron, nidoking, snorlax, ursaring, scizor, aerodactyl, gliscor, krookodile, gigalith);

        do
        {
            mouseposi(xposi, yposi, cl);
            if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
            {
                clicksound();
                break;
            }
        } while (constant == 0);

        if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
        {
            team[2] = aggron;
            group3[0] = nidoking;
            group3[1] = snorlax;
            group3[2] = ursaring;
            group3[3] = scizor;
            group3[4] = aerodactyl;
            group3[5] = gliscor;
            group3[6] = krookodile;
            group3[7] = gigalith;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
        {
            team[2] = nidoking;
            group3[0] = aggron;
            group3[1] = snorlax;
            group3[2] = ursaring;
            group3[3] = scizor;
            group3[4] = aerodactyl;
            group3[5] = gliscor;
            group3[6] = krookodile;
            group3[7] = gigalith;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
        {
            team[2] = snorlax;
            group3[0] = aggron;
            group3[1] = nidoking;
            group3[2] = ursaring;
            group3[3] = scizor;
            group3[4] = aerodactyl;
            group3[5] = gliscor;
            group3[6] = krookodile;
            group3[7] = gigalith;
        }
        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
        {
            team[2] = ursaring;
            group3[0] = aggron;
            group3[1] = nidoking;
            group3[2] = snorlax;
            group3[3] = scizor;
            group3[4] = aerodactyl;
            group3[5] = gliscor;
            group3[6] = krookodile;
            group3[7] = gigalith;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
        {
            team[2] = scizor;
            group3[0] = aggron;
            group3[1] = nidoking;
            group3[2] = snorlax;
            group3[3] = ursaring;
            group3[4] = aerodactyl;
            group3[5] = gliscor;
            group3[6] = krookodile;
            group3[7] = gigalith;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
        {
            team[2] = aerodactyl;
            group3[0] = aggron;
            group3[1] = nidoking;
            group3[2] = snorlax;
            group3[3] = ursaring;
            group3[4] = scizor;
            group3[5] = gliscor;
            group3[6] = krookodile;
            group3[7] = gigalith;
        }
        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
        {
            team[2] = gliscor;
            group3[0] = aggron;
            group3[1] = nidoking;
            group3[2] = snorlax;
            group3[3] = ursaring;
            group3[4] = scizor;
            group3[5] = aerodactyl;
            group3[6] = krookodile;
            group3[7] = gigalith;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
        {
            team[2] = krookodile;
            group3[0] = aggron;
            group3[1] = nidoking;
            group3[2] = snorlax;
            group3[3] = ursaring;
            group3[4] = scizor;
            group3[5] = aerodactyl;
            group3[6] = gliscor;
            group3[7] = gigalith;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
        {
            team[2] = gigalith;
            group3[0] = aggron;
            group3[1] = nidoking;
            group3[2] = snorlax;
            group3[3] = ursaring;
            group3[4] = scizor;
            group3[5] = aerodactyl;
            group3[6] = gliscor;
            group3[7] = krookodile;
        }

        clrscr();
        closegraph();

        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        setposi(a, b);
        callmouse();

        // GROUP 4
        outtextxy(midx, 80, "Choose one Pokemon out of the following");
        printpokemon(gyarados, magnezone, raichu, ampharos, electivire, toxicroak, roserade, scolipede, luxray);

        do
        {
            mouseposi(xposi, yposi, cl);
            if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
            {
                clicksound();
                break;
            }
        } while (constant == 0);

        if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
        {
            team[3] = gyarados;
            group4[0] = magnezone;
            group4[1] = raichu;
            group4[2] = ampharos;
            group4[3] = electivire;
            group4[4] = toxicroak;
            group4[5] = roserade;
            group4[6] = scolipede;
            group4[7] = luxray;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
        {
            team[3] = magnezone;
            group4[0] = gyarados;
            group4[1] = raichu;
            group4[2] = ampharos;
            group4[3] = electivire;
            group4[4] = toxicroak;
            group4[5] = roserade;
            group4[6] = scolipede;
            group4[7] = luxray;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
        {
            team[3] = raichu;
            group4[0] = gyarados;
            group4[1] = magnezone;
            group4[2] = ampharos;
            group4[3] = electivire;
            group4[4] = toxicroak;
            group4[5] = roserade;
            group4[6] = scolipede;
            group4[7] = luxray;
        }
        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
        {
            team[3] = ampharos;
            group4[0] = gyarados;
            group4[1] = magnezone;
            group4[2] = raichu;
            group4[3] = electivire;
            group4[4] = toxicroak;
            group4[5] = roserade;
            group4[6] = scolipede;
            group4[7] = luxray;
        }
        else if (xposi > (midx - 75) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
        {
            team[3] = electivire;
            group4[0] = gyarados;
            group4[1] = magnezone;
            group4[2] = raichu;
            group4[3] = ampharos;
            group4[4] = toxicroak;
            group4[5] = roserade;
            group4[6] = scolipede;
            group4[7] = luxray;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
        {
            team[3] = toxicroak;
            group4[0] = gyarados;
            group4[1] = magnezone;
            group4[2] = raichu;
            group4[3] = ampharos;
            group4[4] = electivire;
            group4[5] = roserade;
            group4[6] = scolipede;
            group4[7] = luxray;
        }
        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
        {
            team[3] = roserade;
            group4[0] = gyarados;
            group4[1] = magnezone;
            group4[2] = raichu;
            group4[3] = ampharos;
            group4[4] = electivire;
            group4[5] = toxicroak;
            group4[6] = scolipede;
            group4[7] = luxray;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
        {
            team[3] = scolipede;
            group4[0] = gyarados;
            group4[1] = magnezone;
            group4[2] = raichu;
            group4[3] = ampharos;
            group4[4] = electivire;
            group4[5] = toxicroak;
            group4[6] = roserade;
            group4[7] = luxray;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
        {
            team[3] = luxray;
            group4[0] = gyarados;
            group4[1] = magnezone;
            group4[2] = raichu;
            group4[3] = ampharos;
            group4[4] = electivire;
            group4[5] = toxicroak;
            group4[6] = roserade;
            group4[7] = scolipede;
        }

        clrscr();
        closegraph();

        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        setposi(a, b);
        callmouse();

        // GROUP 5
        outtextxy(midx, 80, "Choose one Pokemon out of the following");
        printpokemon(gengar, exeggutor, alakazam, weavile, gothitelle, froslass, spiritomb, dusknoir, zoroark);

        do
        {
            mouseposi(xposi, yposi, cl);
            if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
            {
                clicksound();
                break;
            }
        } while (constant == 0);

        if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
        {
            team[4] = gengar;
            group5[0] = exeggutor;
            group5[1] = alakazam;
            group5[2] = weavile;
            group5[3] = gothitelle;
            group5[4] = froslass;
            group5[5] = spiritomb;
            group5[6] = dusknoir;
            group5[7] = zoroark;
        }

        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
        {
            team[4] = exeggutor;
            group5[0] = gengar;
            group5[1] = alakazam;
            group5[2] = weavile;
            group5[3] = gothitelle;
            group5[4] = froslass;
            group5[5] = spiritomb;
            group5[6] = dusknoir;
            group5[7] = zoroark;
        }

        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
        {
            team[4] = alakazam;
            group5[0] = gengar;
            group5[1] = exeggutor;
            group5[2] = weavile;
            group5[3] = gothitelle;
            group5[4] = froslass;
            group5[5] = spiritomb;
            group5[6] = dusknoir;
            group5[7] = zoroark;
        }

        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
        {
            team[4] = weavile;
            group5[0] = gengar;
            group5[1] = exeggutor;
            group5[2] = alakazam;
            group5[3] = gothitelle;
            group5[4] = froslass;
            group5[5] = spiritomb;
            group5[6] = dusknoir;
            group5[7] = zoroark;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
        {
            team[4] = gothitelle;
            group5[0] = gengar;
            group5[1] = exeggutor;
            group5[2] = alakazam;
            group5[3] = weavile;
            group5[4] = froslass;
            group5[5] = spiritomb;
            group5[6] = dusknoir;
            group5[7] = zoroark;
        }

        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
        {
            team[4] = froslass;
            group5[0] = gengar;
            group5[1] = exeggutor;
            group5[2] = alakazam;
            group5[3] = weavile;
            group5[4] = gothitelle;
            group5[5] = spiritomb;
            group5[6] = dusknoir;
            group5[7] = zoroark;
        }

        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
        {
            team[4] = spiritomb;
            group5[0] = gengar;
            group5[1] = exeggutor;
            group5[2] = alakazam;
            group5[3] = weavile;
            group5[4] = gothitelle;
            group5[5] = froslass;
            group5[6] = dusknoir;
            group5[7] = zoroark;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
        {
            team[4] = dusknoir;
            group5[0] = gengar;
            group5[1] = exeggutor;
            group5[2] = alakazam;
            group5[3] = weavile;
            group5[4] = gothitelle;
            group5[5] = froslass;
            group5[6] = spiritomb;
            group5[7] = zoroark;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
        {
            team[4] = zoroark;
            group5[0] = gengar;
            group5[1] = exeggutor;
            group5[2] = alakazam;
            group5[3] = weavile;
            group5[4] = gothitelle;
            group5[5] = froslass;
            group5[6] = spiritomb;
            group5[7] = dusknoir;
        }

        clrscr();
        closegraph();

        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        setposi(a, b);
        callmouse();

        // GROUP 6
        outtextxy(midx, 80, "Choose one Pokemon out of the following");
        printpokemon(dragonite, tyranitar, haxorus, gardevoir, metagross, garchomp, hydreigon, lucario, milotic);

        do
        {
            mouseposi(xposi, yposi, cl);
            if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
            {
                clicksound();
                break;
            }
        } while (constant == 0);

        clrscr();
        closegraph();
        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        setposi(a, b);
        callmouse();

        if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
        {
            team[5] = dragonite;
            group6[0] = tyranitar;
            group6[1] = haxorus;
            group6[2] = gardevoir;
            group6[3] = metagross;
            group6[4] = garchomp;
            group6[5] = hydreigon;
            group6[6] = lucario;
            group6[7] = milotic;
        }

        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
        {
            team[5] = tyranitar;
            group6[0] = dragonite;
            group6[1] = haxorus;
            group6[2] = gardevoir;
            group6[3] = metagross;
            group6[4] = garchomp;
            group6[5] = hydreigon;
            group6[6] = lucario;
            group6[7] = milotic;
        }
        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
        {
            team[5] = haxorus;
            group6[0] = dragonite;
            group6[1] = tyranitar;
            group6[2] = gardevoir;
            group6[3] = metagross;
            group6[4] = garchomp;
            group6[5] = hydreigon;
            group6[6] = lucario;
            group6[7] = milotic;
        }
        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
        {
            team[5] = gardevoir;
            group6[0] = dragonite;
            group6[1] = tyranitar;
            group6[2] = haxorus;
            group6[3] = metagross;
            group6[4] = garchomp;
            group6[5] = hydreigon;
            group6[6] = lucario;
            group6[7] = milotic;
        }
        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
        {
            team[5] = metagross;
            group6[0] = dragonite;
            group6[1] = tyranitar;
            group6[2] = haxorus;
            group6[3] = gardevoir;
            group6[4] = garchomp;
            group6[5] = hydreigon;
            group6[6] = lucario;
            group6[7] = milotic;
        }

        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
        {
            team[5] = garchomp;
            group6[0] = dragonite;
            group6[1] = tyranitar;
            group6[2] = haxorus;
            group6[3] = gardevoir;
            group6[4] = metagross;
            group6[5] = hydreigon;
            group6[6] = lucario;
            group6[7] = milotic;
        }

        else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
        {
            team[5] = hydreigon;
            group6[0] = dragonite;
            group6[1] = tyranitar;
            group6[2] = haxorus;
            group6[3] = gardevoir;
            group6[4] = metagross;
            group6[5] = garchomp;
            group6[6] = lucario;
            group6[7] = milotic;
        }

        else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
        {
            team[5] = lucario;
            group6[0] = dragonite;
            group6[1] = tyranitar;
            group6[2] = haxorus;
            group6[3] = gardevoir;
            group6[4] = metagross;
            group6[5] = garchomp;
            group6[6] = hydreigon;
            group6[7] = milotic;
        }

        else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
        {
            team[5] = milotic;
            group6[0] = dragonite;
            group6[1] = tyranitar;
            group6[2] = haxorus;
            group6[3] = gardevoir;
            group6[4] = metagross;
            group6[5] = garchomp;
            group6[6] = hydreigon;
            group6[7] = lucario;
        }

        clrscr();
        closegraph();

        initgraph(&gd, &gm, "c:\\turboc3\\bgi");
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        setposi(a, b);
        callmouse();

        // DISPLAY TEAM
        outtextxy(midx, 50, "YOUR TEAM");
        displayteam(team[0], team[1], team[2], team[3], team[4], team[5]);

        // Back and Continue
        rectangle(midx - 310, 440, midx - 230, 460);
        outtextxy(midx - 270, 450, "BACK");
        rectangle(midx + 230, 440, midx + 310, 460);
        outtextxy(midx + 270, 450, "CONTINUE");

        do
        {
            mouseposi(xposi, yposi, cl);
            if ((out.x.bx == 1) && ((xposi > midx + 230) && (xposi < midx + 310)) && ((yposi > 440) && (yposi < 460)))
            {
                back = 2;
                clicksound();
                break;
            }
            else if ((out.x.bx == 1) && ((xposi > midx - 310) && (xposi < midx - 230)) && ((yposi > 440) && (yposi < 460)))
            {
                back = 0;
                clicksound();
                break;
            }
        } while (constant == 0);
    } while (back == 0);
    clrscr();
    closegraph();

    pokemon opp[6];
    randomize();

    opp[0] = group1[random(8)];
    opp[1] = group2[random(8)];
    opp[2] = group3[random(8)];
    opp[3] = group4[random(8)];
    opp[4] = group5[random(8)];
    opp[5] = group6[random(8)];

    int num[6] = {0, 1, 2, 3, 4, 5};
    int n = 6;
    pokemon blue[6];

    for (int l = 0; l <= 5; l++)
    {
        int rand = num[random(n)];
        blue[l] = opp[rand];
        for (int del = 0; del < n - 1; del++)
        {
            if (rand == num[del])
            {
                for (int remove = del; remove < n - 1; remove++)
                    num[remove] = num[remove + 1];
            }
        }
        n--;
    }

    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(midx, midy, "You will face Blue now!");
    getch();
    clicksound();
    clrscr();
    closegraph();

    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(midx, 50, "BLUE'S TEAM");
    displayteam(opp[0], opp[1], opp[2], opp[3], opp[4], opp[5]);
    getch();
    clicksound();
    clrscr();
    closegraph();

    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    displayteam(team[0], team[1], team[2], team[3], team[4], team[5]);
    outtextxy(midx, 50, "Which Pokemon will you send out first?");
    decidefirst(team[0], team[1], team[2], team[3], team[4], team[5]);
    clrscr();
    closegraph();
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify(CENTER_TEXT, CENTER_TEXT);

    redbattle = red[0];
    bluebattle = blue[0];
    clrscr();
    closegraph();
    int i = 0;
    int j = 0;

    battleopen(bluebattle, redbattle);

    do
    {
        turn(bluebattle, redbattle);
        if ((bluebattle.hp == 0) || (redbattle.hp == 0))
            break;
    } while (constant == 0);

    do
    {
        if (bluebattle.hp == 0)
        {
            bluenext(blue[i + 1], redbattle);
            i++;
        }

        else if (redbattle.hp == 0)
        {
            rednext(redbattle);
            j++;
        }

        do
        {
            turn(bluebattle, redbattle);
            if ((bluebattle.hp == 0) || (redbattle.hp == 0))
                break;
        } while (constant == 0);

        if ((i >= 5) || (j >= 5))
            break;
    } while (constant == 0);

    if (bluebattle.hp > 0)
    {
        if (j < 5)
        {
            rednext(redbattle);
            j++;
            do
            {
                turn(bluebattle, redbattle);
                if (bluebattle.hp == 0)
                    break;
                else if (redbattle.hp == 0)
                {
                    rednext(redbattle);
                    j++;
                }
                if (j >= 5)
                {
                    i = 0;
                    j++;
                    break;
                }
            } while (constant == 0);
        }
    }

    else if (redbattle.hp > 0)
    {
        if (i < 5)
        {
            bluenext(blue[i + 1], redbattle);
            i++;
            do
            {
                do
                {
                    turn(bluebattle, redbattle);
                    if ((bluebattle.hp == 0) || (redbattle.hp == 0))
                        break;
                } while (constant == 0);
                if (bluebattle.hp == 0)
                {
                    bluenext(blue[i + 1], redbattle);
                    i++;
                }
                else if (redbattle.hp == 0)
                    break;
                if (i >= 5)
                {
                    j = 0;
                    i++;
                    break;
                }
            } while (constant == 0);
        }
    }
    getch();
    clicksound();
    clrscr();
    closegraph();

    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify(CENTER_TEXT, CENTER_TEXT);

    if ((i >= 5) && ((red[0].hp > 0) || (red[1].hp > 0) || (red[2].hp > 0) || (red[3].hp > 0) || (red[4].hp > 0) || (red[5].hp > 0)))
    {
        outtextxy(midx, midy, "You are now the Pokemon League Champion!");
        winsound();
        getch();
        clicksound();
        clearviewport();
        outtextxy(midx, 50, "HALL OF FAME");
        displayteam(team[0], team[1], team[2], team[3], team[4], team[5]);
    }
    else if (j >= 5 && ((blue[0].hp > 0) || (blue[1].hp > 0) || (blue[2].hp > 0) || (blue[3].hp > 0) || (blue[4].hp > 0) || (blue[5].hp > 0)))
    {
        outtextxy(midx, midy, "Better luck next time!");
        losesound();
    }
    getch();
    clrscr();
    closegraph();
}