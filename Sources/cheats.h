#ifndef CHEATS_H
#define CHEATS_H

#include "plugin.h"

#ifndef ADDSUBFLOAT
    #define ADDTOFLOAT(addr, add_value)            *(float *)(addr) += (float)(add_value)
    #define SUBTOFLOAT(addr, sub_value)            *(float *)(addr) -= (float)(sub_value)
#endif

#ifndef READWRITEFLOAT
    #define READFLOAT(addr)                     *(float *)(addr)
    #define WRITEFLOAT(addr, data)                 *(float *)(addr) = data
#endif

#ifndef ADDSUBTOUNSIGNED
    #define ADDTOUNSIGNED(addr, value)            *(u32 *)(addr) += value
    #define SUBTOUNSIGNED(addr, value)            *(u32 *)(addr) -= value
#endif

void	invincibilityRev0(void);
void	invincibilityRev1(void);
void	blackkartRev0(void);
void	blackkartRev1(void);
void	shockedRev0(void);
void	shockedRev1(void);
void	crushedRev0(void);
void	crushedRev1(void);
void	fastBlue(void);
void	stoppedBlue(void);
void	fastGreen(void);
void	stoppedGreen(void);
void	bulletSpeed(void);
void	itemwheelRev0(void);
void	itemwheelRev1(void);
void	waterlevelRev0(void);
void	waterlevelRev1(void);
void	t00ccRev0(void);
void	t00ccRev1(void);
void	f00ccRev0(void);
void	f00ccRev1(void);
void	vrExtender(void);
void	unlockeverythingRev0(void);
void	unlockeverythingRev011(void);
void	unlockeverythingRev1(void);
void	freeflyRev0(void);
void	freeflyRev1(void);
void	blueshellrideRev0(void);
void	blueshellrideRev1(void);
void	instantMt(void);
void	driveanywhereRev0(void);
void	driveanywhereRev1(void);
void	saveslotRev0(void);
void	saveslotRev1(void);
void	hugeBunnyhop(void);
void	fastReverse(void);
void	noCountdown(void);
void	nodcRev0(void);
void	nodcRev1(void);
void	disablefpRev0(void);
void	disablefpRev1(void);
void	unlockEverything(void);
void	dropMushrooms(void);
void	moonjumpRev0(void);
void	moonjumpRev1(void);
void	maxTimer(void);
void	starpowerRev0(void);
void	starpowerRev1(void);
void	writeLocation(u32 location);
void	writeFlag(u8 flag);
void	region_France(void);
void	region_Hawaii(void);
void	region_UpperAntartica(void);
void	region_NorthPole(void);
void	region_Iran(void);
void	region_SaudiArabia(void);
void	region_Cuba(void);
void	region_Russia(void);
void	region_Phillippines(void);
void	flag_Japan(void);

#endif
