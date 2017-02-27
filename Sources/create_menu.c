#include "cheats.h"

#define ENTRY_COUNT 300

typedef struct s_menu
{
    int         count;
    int         status;
    u32         f[ENTRY_COUNT];
    u32         s[ENTRY_COUNT];
    int         a[ENTRY_COUNT];
    const char  *t[ENTRY_COUNT];
    const char  *n[ENTRY_COUNT];
    void        (*fp[ENTRY_COUNT])();
}             t_menu;


typedef void    (*FuncPointer)(void);
extern t_menu menu;


void    new_super_unselectable_entry(char *str, FuncPointer function)
{
    int index;

    index = menu.count;
    if (index >= 300)
        return;
    new_unselectable_entry(str);
    menu.f[index] |= BIT(0) | BIT(1);
    menu.fp[index] = function;
}

void with_note_common(const char *name, const char *note, void (*cheatfunction)(void), int type)
{
    int     index;

    if (type == 0)
        index = new_entry((char *)name, cheatfunction);
    else if (type == 1)
        index = new_radio_entry((char *)name, cheatfunction);
    else if (type == 2)
        index = new_spoiler((char *)name);
    else return;
    set_note(note, index);
}

inline void new_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
    with_note_common(name, note, cheatfunction, 0);
}

inline void new_radio_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
    with_note_common(name, note, cheatfunction, 1);
}

inline void new_spoiler_with_note(const char *name, const char *note)
{
    with_note_common(name, note, NULL, 2);
}

char	*builder_name = "DarkFlare";

	static const char * const inv_note = "You will appear blinking on other people's screens online & invincible.";
	static const char * const black_note = "Your kart will be black as if you got blooped.";
	static const char * const shock_note = "Your kart will be small as if you got shocked.";
	static const char * const crush_note = "Your kart will appear crushed online. Offline, this will produce no visible effect.";
	static const char * const drive_note = "Select = Activate; Start = Deactivate; Select + D-Pad Up = Move Up; Select + D-Pad Down = Move Down";
	static const char * const mt_note = "MiniTurbos will be instantly charged.";
	static const char * const t00_note = "You will move at 200cc speeds.";
	static const char * const f00_note = "You will move at 500cc speeds.";
	static const char * const itemwheel_note = "Y = Tanooki; X = Bullet; Start = Blue Shell; Select = Lightning; D-Pad Up = Green Shell; D-Pad Right = Red Shell; D-Pad Down = Bomn; D-Pad Left = Lucky 7";
	static const char * const fastblue_note = "Blue Shells will move quickly.";
	static const char * const stoppedblue_note = "Blue Shells will not move.";
	static const char * const fastgr_note = "Green & Red Shells will move quickly.";
	static const char * const stoppedgr_note = "Green & Red Shells will not move.";
	static const char * const bullet_note = "X = Fast; A = Default; B = Stopped";
	static const char * const bs_note = "D-Pad Left = Ride Blue Shell";
	static const char * const water_note = "Start + D-Pad Right = Raise water height; Start + D-Pad Left = Lower water height";
	static const char * const vrext_note = "Start = 999999vr; D-Pad Down = 0vr; D-Pad Up = 696969vr; D-Pad Right = 666666vr";
	static const char * const unlock_note = "You must force your save file to manually save. For example, completing a time trial will do this.";
	static const char * const saveslot_note = "Start + X = Save Current Position; Start + Y = Load Current Position";
	static const char * const reverse_note = "Your kart will reverse at higher speeds than before.";
	static const char * const bunnyhop_note = "Your kart will jump higher when hopping.";
	static const char * const countdown_note = "You will be able to race and use items during the countdown.";
	static const char * const nodc_note = "You will not disconnect for being idle or going backwards. Obviously, normal network communication errors cannot be bypassed.";
	static const char * const firstperson_note = "You will not be able to enter first person view.";
	static const char * const dropshroom_note = "When you throw a green shell, you will actually drop a mushroom. This code can only be deactivated by deactivating the code and then restarting a race.";
	static const char * const moonjump_note = "Start + R = Jump";
	static const char * const timer_note = "Your timer will be set to 4:59.9xx. In battles, you can hold up the room for as long as you want. In races, you will always lose.";
	static const char * const starpower_note = "You will always be invincibile as if you had a star.";
	

void    my_menus(void)
{
    new_spoiler("Rev0 Codes");
        new_spoiler("Kart Codes");
            new_entry_with_note("Invincibility", inv_note, invincibilityRev0);
            new_entry_with_note("Black Kart", black_note, blackkartRev0);
            new_entry_with_note("Always Shocked", shock_note, shockedRev0);
            new_entry_with_note("Always Crushed (See Note)", crush_note, crushedRev0);
            new_entry_with_note("Drive Anywhere (See Note)", drive_note, driveanywhereRev0);
			new_entry_with_note("Moonjump (See Note)", moonjump_note, moonjumpRev0);
			new_entry_with_note("Save Slot Teleporter (See Note)", saveslot_note, saveslotRev0);
            new_entry_with_note("Instant MiniTurbo", mt_note, instantMt);
			new_entry_with_note("Huge Bunnyhop", bunnyhop_note, hugeBunnyhop);
        exit_spoiler();
		new_spoiler("Speed Codes");
			new_entry_with_note("Fast Reverse Speeds", reverse_note, fastReverse);
			new_entry_with_note("200cc", t00_note, t00ccRev0);
			new_entry_with_note("500cc", f00_note, f00ccRev0);
		exit_spoiler();
        new_spoiler("Item Codes");
            new_entry_with_note("Item Wheel (See Note)", itemwheel_note, itemwheelRev0);
			new_entry_with_note("Star Invincibility", starpower_note, starpowerRev0);
			new_entry_with_note("Drop Mushrooms (See Note)", dropshroom_note, dropMushrooms);
            new_entry_with_note("Fast Blue Shell", fastblue_note, fastBlue);
            new_entry_with_note("Stopped Blue Shell", stoppedblue_note, stoppedBlue);
            new_entry_with_note("Fast Green & Red Shells", fastgr_note, fastGreen);
            new_entry_with_note("Stopped Green & Red Shells", stoppedgr_note, stoppedGreen);
            new_entry_with_note("Bullet Speed Modifier (See Note)", bullet_note, bulletSpeed);
            new_entry_with_note("Blue Shell Ride (See Note)", bs_note, blueshellrideRev0);
        exit_spoiler();
        new_spoiler("Course Codes");
			new_entry_with_note("No Countdown", countdown_note, noCountdown);
			new_entry_with_note("4:59.9xx Timer", timer_note, maxTimer);
            new_entry_with_note("Water Level Modifier (See Note)", water_note, waterlevelRev0);
        exit_spoiler();
        new_spoiler("Menu & Unlock Codes");
            new_entry_with_note("VR Extender (See Note)", vrext_note, vrExtender);
			new_entry_with_note("Disable First Person View", firstperson_note, disablefpRev0);
			new_entry_with_note("No Disconnect", nodc_note, nodcRev0);
            new_entry_with_note("Unlock Everything", unlock_note, unlockEverything);
        exit_spoiler();
    exit_spoiler();
    new_spoiler("Rev1 Codes");
        new_spoiler("Kart Codes");
            new_entry_with_note("Invincibility (Rev1)", inv_note, invincibilityRev1);
            new_entry_with_note("Black Kart", black_note, blackkartRev1);
            new_entry_with_note("Always Shocked", shock_note, shockedRev1);
            new_entry_with_note("Always Crushed (See Note)", crush_note, crushedRev1);
			new_entry_with_note("Drive Anywhere (See Note)", drive_note, driveanywhereRev1);
			new_entry_with_note("Moonjump (See Note)", moonjump_note, moonjumpRev1);
			new_entry_with_note("Save Slot Teleporter (See Note)", saveslot_note, saveslotRev1);
            new_entry_with_note("Instant MiniTurbo", mt_note, instantMt);
			new_entry_with_note("Huge Bunnyhop", bunnyhop_note, hugeBunnyhop);
        exit_spoiler();
		new_spoiler("Speed Codes");
			new_entry_with_note("Fast Reverse Speeds", reverse_note, fastReverse);
			new_entry_with_note("200cc", t00_note, t00ccRev1);
			new_entry_with_note("500cc", f00_note, f00ccRev1);
		exit_spoiler();
        new_spoiler("Item Codes");
            new_entry_with_note("Item Wheel (See Note)", itemwheel_note, itemwheelRev1);
			new_entry_with_note("Star Invincibility", starpower_note, starpowerRev1);
			new_entry_with_note("Drop Mushrooms (See Note)", dropshroom_note, dropMushrooms);
            new_entry_with_note("Fast Blue Shell", fastblue_note, fastBlue);
            new_entry_with_note("Stopped Blue Shell", stoppedblue_note, stoppedBlue);
            new_entry_with_note("Fast Green & Red Shells", fastgr_note, fastGreen);
            new_entry_with_note("Stopped Green & Red Shells", stoppedgr_note, stoppedGreen);
            new_entry_with_note("Bullet Speed Modifier (See Note)", bullet_note, bulletSpeed);
            new_entry_with_note("Blue Shell Ride (Left)", bs_note, blueshellrideRev1);
        exit_spoiler();
        new_spoiler("Course Codes");
			new_entry_with_note("No Countdown", countdown_note, noCountdown);
			new_entry_with_note("4:59.9xx Timer", timer_note, maxTimer);
            new_entry_with_note("Water Level Modifier (See Note)", water_note, waterlevelRev1);
        exit_spoiler();
        new_spoiler("Menu & Unlock Codes");
            new_entry_with_note("VR Extender (See Note)", vrext_note, vrExtender);
			new_entry_with_note("Disable First Person View", firstperson_note, disablefpRev1);
			new_entry_with_note("No Disconnect", nodc_note, nodcRev1);
			new_entry_with_note("Unlock Everything", unlock_note, unlockEverything);
        exit_spoiler();
    exit_spoiler();
	new_spoiler("Region Codes");
        new_spoiler("Globe Coordinates");
			new_entry("Saudi Arabia", region_SaudiArabia);
            new_entry("France", region_France);
			new_entry("Hawaii", region_Hawaii);
			new_entry("Antarctica", region_UpperAntartica);
			new_entry("North Pole", region_NorthPole);
			new_entry("Iran", region_Iran);
			new_entry("Cuba", region_Cuba);
			new_entry("Russia", region_Russia);
			new_entry("Philippines", region_Phillippines);
        exit_spoiler();
		new_spoiler("Flag");
			new_entry("Japan", flag_Japan);
		exit_spoiler();
	exit_spoiler();
}
