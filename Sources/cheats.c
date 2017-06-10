#include "cheats.h"
#include "hid.h"

u32 data = 0;
u32 offset = 0;

u32 UpperAntartica = 0x1D51C912; // credit to pathos for all of these coordinates
u32 LowerAntartica = 0xCDFFC0BC;
u32 Africa = 0x10A50552;
u32 LowerSouthAmerica = 0x34526640;
u32 Unknown = 0x690F79B6;
u32 NorthPole = 0x442D3D1B;
u32 UpperSouthAmerica = 0xD9F0EDEC;
u32 Mongolia = 0x3EC91C81;
u32 Hawaii = 0xF9E67EFF;
u32 RussiaEnmelen = 0x7C062DA4;
u32 wtf = 0x911B8EF2;
u32 GabonSouthAmerica = 0x0BBEFB10;
u32 QuebecCanada = 0xC50C23DF;
u32 Malaysia = 0xD6277448;
u32 NunavutCanada = 0xB1C93138;
u32 SenegalSouthAmerica = 0xF56208BF;
u32 SouthAmericaSouthAmerica = 0x0EC8EBF5;
u32 SouthEasternAntartcia = 0x7D57B7AE;
u32 SouthernSouthAntartcia = 0xD678B06B;
u32 EasternGreenland = 0xE7622D35;
u32 NorthernPhillippines = 0x58610BDC;
u32 AlbertaCanada = 0xA9732AE8;
u32 UpsidedownGreenland = 0x650E48C8;
u32 NorthernPole = 0xE82F41DF;
u32 wtf2 = 0xDB0F6242;
u32 Iran = 0x2C42143F;
u32 Bejing = 0xA0;
u32 NorthernNorthernAntarctica = 0xB44EC984;
u32 Guyana = 0xD3C203E1;
u32 WashingtonDCUnitedStatesOfAmerica = 0x274BEC82;
u32 MainlandChina = 0x500B1F25;
u32 SaudiArabia = 0x9CF06821;
u32 HongKong = 0x4F900FC0;
u32 SouthCaliforniaMexico = 0xAF3F1519;
u32 UnitedStates = 0xB73F1719;
u32 wtf3 = 0xB6E16DE3;
u32 ArgentinaSouthAmerica = 0x521993A2;
u32 Iceland = 0xEEBC2C5A;
u32 DRCongo = 0x13C3F7F7;
u32 Phillippines = 0x5F63FE71;
u32 FloridaUnitedStates = 0xCC121493;
u32 Haiti = 0xCC120F93;
u32 Cuba = 0xC9120F93;
u32 ElSavador = 0xB9120F93;
u32 SpaghettiNoppersRegionSetting = 0xBD200393;
u32 MoroccoSouthAmerica = 0xFACF1610;
u32 TajikistanAsia = 0x2FF62101;
u32 Australia = 0xE46391F5;
u32 LowerLowerAntarctica = 0x40DBB2C7;
u32 NewFoundLandCanada = 0xBD1D99CE;
u32 MoreAntarctica = 0xBA95C686;
u32 MoreAntartica2 = 0x8518C558;
u32 France = 0x02441D3F;
u32 MoreAntarctica3 = 0x3449B31C;
u32 MoreAntarctica4 = 0xA365B8A5;
u32 MoreAntarctica5 = 0x68E8C717;
u32 MoreAntarctica6 = 0x9590B1BB;
u32 WesternAustraliaAustralia = 0x57C0EC27;
u32 AustralianCapitalTerritoryAustralia = 0x66C0E927;

u8 Japan = 1; // credit to WiiBrew for all of these flag IDs
u8 Anguilla = 8;
u8 AntiguaAndBarbuda = 9;
u8 Argentina = 10;
u8 Aruba = 11;
u8 Bahamas = 12;
u8 Barbados = 13;
u8 Belize = 14;
u8 Bolivia = 15;
u8 Brazil = 16;
u8 BritishVirginIslands = 17;
u8 Canada = 18;
u8 CaymanIslands = 19;
u8 Chile = 20;
u8 Colombia = 21;
u8 CostaRica = 22;
u8 Dominica = 23;
u8 DominicanRepublic = 24;
u8 Ecuador = 25;
u8 ElSalvador = 26;
u8 FrenchGuiana = 27;
u8 Grenada = 28;
u8 Guadeloupe = 29;
u8 Guatemala = 30;
u8 Guyana1 = 31;
u8 Haiti1 = 32;
u8 Honduras = 33;
u8 Jamaica = 34;
u8 Martinique = 35;
u8 Mexico = 36;
u8 Monsterrat = 37;
u8 NetherlandsAntilles = 38;
u8 Nicaragua = 39;
u8 Panama = 40;
u8 Paraguay = 41;
u8 Peru = 42;
u8 StKittsAndNevis = 43;
u8 StLucia = 44;
u8 StVincentAndTheGrenadines = 45;
u8 Suriname = 46;
u8 TrinidadAndTobago = 47;
u8 TurksAndCaicosIslands = 48;
u8 UnitedStates1 = 49;
u8 Uruguay = 50;
u8 USVirginIslands = 51;
u8 Venezuela = 52;
u8 Albania = 64;
u8 Australia1 = 65;
u8 Austria = 66;
u8 Belgium = 67;
u8 BosniaAndHerzegovina = 68;
u8 Botswana = 69;
u8 Bulgaria = 70;
u8 Croatia = 71;
u8 Cyprus = 72;
u8 CzechRepublic = 73;
u8 Denmark = 74;
u8 Estonia = 75;
u8 Finland = 76;
u8 France1 = 77;
u8 Germany = 78;
u8 Greece = 79;
u8 Hungary = 80;
u8 Iceland1 = 81;
u8 Ireland = 82;
u8 Italy = 83;
u8 Latvia = 84;
u8 Lesotho = 85;
u8 Lichtenstein = 86;
u8 Lithuania = 87;
u8 Luxembourg = 88;
u8 FYROfMacedonia = 89;
u8 Malta = 90;
u8 Montenegro = 91;
u8 Mozambique = 92;
u8 Namibia = 93;
u8 Netherlands = 94;
u8 NewZealand = 95;
u8 Norway = 96;
u8 Poland = 97;
u8 Portugal = 98;
u8 Romania = 99;
u8 Russia = 100;
u8 Serbia = 101;
u8 Slovakia = 102;
u8 Slovenia = 103;
u8 SouthAfrica = 104;
u8 Spain = 105;
u8 Swaziland = 106;
u8 Sweden = 107;
u8 Switzerland = 108;
u8 Turkey = 109;
u8 UnitedKingdom = 110;
u8 Zambia = 111;
u8 Zimbabwe = 112;
u8 Azerbaijan = 113;
u8 Mauritania = 114;
u8 Mali = 115;
u8 Niger = 116;
u8 Chad = 117;
u8 Sudan = 118;
u8 Eritrea = 119;
u8 Dijibouti = 120;
u8 Somalia = 121;
u8 Taiwan = 128;
u8 SouthKorea = 136;
u8 HongKong1 = 144;
u8 Macao = 145;
u8 Indonesia = 152;
u8 Singapore = 153;
u8 Thailand = 154;
u8 Philippines = 155;
u8 Malaysia1 = 156;
u8 China = 160;
u8 UAE = 168;
u8 India = 169;
u8 Egypt = 170;
u8 Oman = 171;
u8 Qatar = 172;
u8 Kuwait = 173;
u8 SaudiArabia1 = 174;
u8 Syria = 175;
u8 Bahrain = 176;
u8 Jordan = 177;

void	invincibilityRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		if (READU32(0x1400F750) != 0)
		{
			offset = READU32 (0x1400F750);
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU16(0x102C + offset, 0xFFFF);
		}
	}
}

void	invincibilityRev1(void)
{
	if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
	{
		if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
		{
			offset = READU32 (0x1400EB70);
		}
		if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000))
		{
			offset = READU32 (0x1400F178);
		}
		{
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU16(0x102C + offset, 0xFFFF);
		}
	}
}

void	starpowerRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		if (READU32(0x1400F750) != 0)
		{
			offset = READU32 (0x1400F750);
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU16(0xFF4 + offset, 0xFFFF);
		}
	}
}

void	starpowerRev1(void)
{
	if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
	{
		if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
		{
			offset = READU32 (0x1400EB70);
		}
		if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000))
		{
			offset = READU32 (0x1400F178);
		}
		{
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU16(0xFF4 + offset, 0xFFFF);
		}
	}
}

void	blackkartRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		if (READU32(0x1400F750) != 0)
		{
			offset = READU32 (0x1400F750);
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU16(0xFF8 + offset, 0xFFFF);
		}
	}
}

void	blackkartRev1(void)
{
	if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
	{
		if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
		{
			offset = READU32 (0x1400EB70);
		}
		if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000))
		{
			offset = READU32 (0x1400F178);
		}
		{
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU16(0xFF8 + offset, 0xFFFF);
		}
	}
}

void	shockedRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		if (READU32(0x1400F750) != 0)
		{
			offset = READU32 (0x1400F750);
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU16(0x1000 + offset, 0xFFFF);
		}
	}
}

void	shockedRev1(void)
{
	if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
	{
		if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
		{
			offset = READU32 (0x1400EB70);
		}
		if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000))
		{
			offset = READU32 (0x1400F178);
		}
		{
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU16(0x1000 + offset, 0xFFFF);
		}
	}
}

void	crushedRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		if (READU32(0x1400F750) != 0)
		{
			offset = READU32 (0x1400F750);
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU16(0x1004 + offset, 0xFFFF);
		}
	}
}

void	crushedRev1(void)
{
	if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
	{
		if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
		{
			offset = READU32 (0x1400EB70);
		}
		if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000))
		{
			offset = READU32 (0x1400F178);
		}
		{
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU16(0x1004 + offset, 0xFFFF);
		}
	}
}

void	fastBlue(void)
{
	WRITEU32(0x666094, 0x43000000);
}

void	stoppedBlue(void)
{
	WRITEU32(0x666094, 0);
}

void	fastGreen(void)
{
	WRITEU32(0x66619C, 0x43000000);
}

void	stoppedGreen(void)
{
	WRITEU32(0x66619C, 0);
}

void	bulletSpeed(void)
{
	if (is_pressed(BUTTON_X))
	{
		WRITEU32(0x6655A4, 0x41C00000);
	}
	if (is_pressed(BUTTON_B))
	{
		WRITEU32(0x6655A4, 0xFF7FFFFF);
	}
	if (is_pressed(BUTTON_A))
	{
		WRITEU32(0x6655A4, 0x40F33333);
	}
}

void	itemwheelRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		if (READU32(0x17782494) != 0)
		{
			if (is_pressed(BUTTON_X))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 9);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_Y))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 0xD);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_ST))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 6);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_SE))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 0xA);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DL))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 0xE);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DR))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 2);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DD))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 4);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DU))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 1);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
		}
	}
}

void	itemwheelRev1(void)
{
	if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
	{
		if (READU32(0x177BE494) != 0)
		{
			if (is_pressed(BUTTON_X))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 9);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_Y))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 0xD);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_ST))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 6);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_SE))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 0xA);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DL))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 0xE);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DR))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 2);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DD))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 4);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DU))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 1);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
		}
	}
}

void	waterlevelRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		if (is_pressed(ST + DR))
		{
			if (READU32(0x65C528) != 0)
			{
				offset = READU32(0x65C528);    
				offset = READU32(offset - 0x9AF4);
				ADDTOFLOAT(offset - 0xACCC, 0.1);
				ADDTOFLOAT(0x16709A94, 0.1);
		}
		}
		if (is_pressed(ST + DL))
		{
			if (READU32(0x65C528) != 0)
			{
				offset = READU32(0x65C528);
				offset = READU32(offset - 0x9AF4);
				SUBTOFLOAT(offset - 0xACCC, 0.1);
				SUBTOFLOAT(0x16709A94, 0.1);
			}
		}
	}
}

void	waterlevelRev1(void)
{
	if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
	{
		if (is_pressed(ST + DR))
		{
			if (READU32(0x65C528) != 0)
			{
				offset = READU32(0x65C528);    
				offset = READU32(offset - 0x9AF4);
				ADDTOFLOAT(offset - 0xACCC, 0.1);
				ADDTOFLOAT(0x16709A94, 0.1);
			}
		}
		if (is_pressed(ST + DL))
		{
			if (READU32(0x65C528) != 0)
			{
				offset = READU32(0x65C528);
				offset = READU32(offset - 0x9AF4);
				SUBTOFLOAT(offset - 0xACCC, 0.1);
				SUBTOFLOAT(0x16709A94, 0.1);
			}
		}
	}
}

void	t00ccRev0(void)
{
	int i;
	offset = 0;
	for (int i = 0; i < 0x2D; i++)
	{
		WRITEU32(0x153771F0 + offset, 0x413C0000);
		WRITEU32(0x1537A710 + offset, 0x413C0000);
		WRITEU32(0x15386E70 + offset, 0x413C0000);
		offset += 0x4;
	}
}

void	t00ccRev1(void)
{
	int i1;
	offset = 0;
	for (int i1 = 0; i1 < 0x2D; i1++)
	{
		if (READU32(0x153765CC) == 0x76697244)
		{
			WRITEU32(0x153765F0 + offset, 0x413C0000);
			WRITEU32(0x15379B10 + offset, 0x413C0000);
			WRITEU32(0x15386270 + offset, 0x413C0000);
			offset += 0x4;
		}
		if (READU32(0x15376C4C) == 0x76697244)
		{
			WRITEU32(0x15376C70 + offset, 0x413C0000);
			WRITEU32(0x1537A190 + offset, 0x413C0000);
			WRITEU32(0x153868F0 + offset, 0x413C0000);
			offset += 0x4;
		}
	}
}

void	f00ccRev0(void)
{
	int i2;
	offset = 0;
	for (int i2 = 0; i2 < 0x2D; i2++)
	{
		WRITEU32(0x153771F0 + offset, 0x41A00000);
		WRITEU32(0x1537A710 + offset, 0x41A00000);
		WRITEU32(0x15386E70 + offset, 0x41A00000);
		offset += 0x4;
	}
}

void	f00ccRev1(void)
{
	int i3;
	offset = 0;
	for (int i3 = 0; i3 < 0x2D; i3++)
	{
		if (READU32(0x153765CC) == 0x76697244)
		{
			WRITEU32(0x153765F0 + offset, 0x41A00000);
			WRITEU32(0x15379B10 + offset, 0x41A00000);
			WRITEU32(0x15386270 + offset, 0x41A00000);
			offset += 0x4;
		}
		if (READU32(0x15376C4C) == 0x76697244)
		{
			WRITEU32(0x15376C70 + offset, 0x41A00000);
			WRITEU32(0x1537A190 + offset, 0x41A00000);
			WRITEU32(0x153868F0 + offset, 0x41A00000);
			offset += 0x4;
		}
	}
}

void	vrExtender(void)
{
	if (is_pressed(BUTTON_ST))
	{
		if (READU32(0x663D04) != 0)
		{
			offset = READU32(0x663D04);
			WRITEU32(offset - 0xE30, 999999);
		}
	}
	if (is_pressed(BUTTON_DD))
	{
		if (READU32(0x663D04) != 0)
		{
			offset = READU32(0x663D04);
			WRITEU32(offset - 0xE30, 0);
		}
	}
	if (is_pressed(BUTTON_DU))
	{
		if (READU32(0x663D04) != 0)
		{
			offset = READU32(0x663D04);
			WRITEU32(offset - 0xE30, 696969);
		}
	}
	if (is_pressed(BUTTON_DR))
	{
		if (READU32(0x663D04) != 0)
		{
			offset = READU32(0x663D04);
			WRITEU32(offset - 0xE30, 666666);
		}
	}
	if (is_pressed(BUTTON_DL))
	{
		if (READU32(0x663D04) != 0)
		{
			offset = READU32(0x663D04);
			WRITEU32(offset - 0xE30, 777777);
		}
	}
}

void	unlockEverything(void)
{
	if (READU32(0x6673C8) != 0)
	{
		offset = READU32(0x6673C8);
		WRITEU8(0x6BA3 + offset, 0x3F);
		WRITEU32(0x6BA4 + offset, 0x1FF003F);
		WRITEU16(0x6BAC + offset, 0x3FFF);
		WRITEU8(0x6BB0 + offset, 0x7F);
		WRITEU8(0x6BB4 + offset, 0x3F);
		WRITEU8(0x6BB8 + offset, 0xFF);
	}
}

void	unlockeverythingRev1(void) // dead
{
	WRITEU32(0x1413C148, 0x1FF003F);
	WRITEU8(0x1413C147, 0xFF);
	WRITEU16(0x1413C150, 0x3FFF);
	WRITEU8(0x1413C154, 0x7F);
	WRITEU8(0x1413C158, 0x3F);
	WRITEU8(0x1413C15C, 0xFF);
	WRITEU32(0x1413BF30, 99999);
}

void	unlockeverythingRev011(void) // dead
{
	WRITEU32(0x1413CD28, 0x1FF003F);
	WRITEU8(0x1413CD27, 0x3F);
	WRITEU16(0x1413CD30, 0x3FFF);
	WRITEU8(0x1413CD34, 0x7F);
	WRITEU8(0x1413CD38, 0x3F);
	WRITEU8(0x1413CD3C, 0xFF);
	WRITEU32(0x1413CB10, 99999);
}

void	unlockeverythingRev0(void) // dead
{
	WRITEU32(0x1413C99C, 0x1FF003F);
	WRITEU8(0x1413C99B, 0x3F);
	WRITEU16(0x1413C9A4, 0x3FFF);
	WRITEU8(0x1413C9A8, 0x7F);
	WRITEU8(0x1413C9AC, 0x3F);
	WRITEU8(0x1413C9B0, 0xFF);
	WRITEU32(0x1413C784, 99999);
}

void	blueshellrideRev0(void)
{
	u32 data = 0;
	u32 data1 = 0;
	u32 data2 = 0;
	if (is_pressed(BUTTON_DL))
	{
		if (READU32(0xFFFFBF4) != 0)
		{
			offset = READU32(0xFFFFBF4);
			offset = READU32(offset - 0x63C);
			data = READU32(offset - 0x3CB0);
			data1 = READU32(offset - 0x3CAC);
			data2 = READU32(offset - 0x3CA8);
			if (READU32(0x1400F750) != 0)
			{
				if (READU32(0x147909D4) == 1)
				{
					offset = READU32(0x1400F750);
					offset = READU32(0x518 + offset);
					offset = READU32(0x1C + offset);
					if ((READU32(0x24 + offset) > 30000000) && (READU32(0x28 + offset) > 00000001) && (READU32(0x2C + offset) > 30000000))
					{
						WRITEU32(0x24 + offset, data);
						WRITEU32(0x28 + offset, data1);
						WRITEU32(0x2C + offset, data2);
					}
				}
			}
		}
	}
}

void	blueshellrideRev1(void)
{
	u32 data = 0;
	u32 data1 = 0;
	u32 data2 = 0;
	if (is_pressed(BUTTON_DL))
	{
		if (READU32(0xFFFFBF4) != 0)
		{
			offset = READU32(0xFFFFBF4);
			offset = READU32(offset - 0x63C);
			data = READU32(offset - 0x3CB0);
			data1 = READU32(offset - 0x3CAC);
			data2 = READU32(offset - 0x3CA8);
			if ((READU32(0x1400EB70) != 0) || (READU32(0x1400F178) != 0))
			{
				if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
				{
					if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
					{
						offset = READU32(0x1400EB70);
					}
					if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000))
					{
						offset = READU32(0x1400F178);
					}
					offset = READU32(0x518 + offset);
					offset = READU32(0x1C + offset);
					if ((READU32(0x24 + offset) > 30000000) && (READU32(0x28 + offset) > 00000001) && (READU32(0x2C + offset) > 30000000))
					{
						WRITEU32(0x24 + offset, data);
						WRITEU32(0x28 + offset, data1);
						WRITEU32(0x2C + offset, data2);
					}
				}
			}
		}
	}
}

void	instantMt(void)
{
	WRITEU32(0x665634, 0);
	WRITEU32(0x665638, 0);
}

void	driveanywhereRev0(void)
{
	if (READU8(0x147909D4) != 1)
	{
		WRITEU32(0x655240, 0);
	}
	if (is_pressed(BUTTON_SE))
	{
		WRITEU32(0x655240, 1);
		WRITEU32(0x6656D8, 0xFFFF);
	}
	if (is_pressed(BUTTON_ST))
	{
		WRITEU32(0x655240, 0);
		WRITEU32(0x6656D8, 0x14);
	}
	if (READU32(0x655240) == 1)
	{
		if (READU8(0x147909D4) == 1)
		{
		offset = READU32 (0x1400F750);
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU32(0x3C + offset, 0);
		}
	}
	if (is_pressed(BUTTON_DU) && is_pressed(BUTTON_SE))
	{
		if (READU32(0x655240) == 1)
		{
			if (READU8(0x147909D4) == 1)
			{
			offset = READU32 (0x1400F750);
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU32(0x3C + offset, 0x41000000);
			}
		}
	}
	if (is_pressed(BUTTON_DD) && is_pressed(BUTTON_SE))
	{
		if (READU32(0x655240) == 1)
		{
			if (READU8(0x147909D4) == 1)
			{
			offset = READU32 (0x1400F750);
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU32(0x3C + offset, 0xC1000000);
			}
		}
	}
}

void	driveanywhereRev1(void)
{
	if ((READU8(0x1478FDF4) != 1))
	{
		WRITEU32(0x655240, 0);
	}
	if ((READU8(0x14790414) != 1))
	{
		WRITEU32(0x655244, 0);
	}
	if (is_pressed(BUTTON_SE))
	{
		WRITEU32(0x655240, 1);
		WRITEU32(0x655244, 1);
		WRITEU32(0x6656D8, 0xFFFF);
	}
	if (is_pressed(BUTTON_ST))
	{
		WRITEU32(0x655240, 0);
		WRITEU32(0x655244, 0);
		WRITEU32(0x6656D8, 0x14);
	}
	if (READU32(0x655240) == 1)
	{
		if ((READU8(0x1478FDF4) == 1))
		{
			if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
			{
				offset = READU32 (0x1400EB70);
				offset = READU32 (0x518 + offset);
				offset = READU32 (0x1C + offset);
				WRITEU32(0x3C + offset, 0);
			}
		}
	}
	if (READU32(0x655244) == 1)
	{
		if ((READU8(0x14790414) == 1))
		{
			if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000))
			{
				offset = READU32 (0x1400F178);
				offset = READU32 (0x518 + offset);
				offset = READU32 (0x1C + offset);
				WRITEU32(0x3C + offset, 0);
			}
		}
	}
	if (is_pressed(BUTTON_DU) && is_pressed(BUTTON_SE))
	{
		if (READU32(0x655240) == 1)
		{
			if ((READU8(0x1478FDF4) == 1))
			{
				if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
				{
					offset = READU32 (0x1400EB70);
					offset = READU32 (0x518 + offset);
					offset = READU32 (0x1C + offset);
					WRITEU32(0x3C + offset, 0x41000000);
				}
			}
		}
	}
	if (is_pressed(BUTTON_DU) && is_pressed(BUTTON_SE))
	{
		if (READU32(0x655244) == 1)
		{
			if ((READU8(0x14790414) == 1))
			{
				if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000)) 
				{
					offset = READU32 (0x1400F178);
					offset = READU32 (0x518 + offset);
					offset = READU32 (0x1C + offset);
					WRITEU32(0x3C + offset, 0x41000000);
				}
			}
		}
	}
	if (is_pressed(BUTTON_DD) && is_pressed(BUTTON_SE))
	{
		if (READU32(0x655240) == 1)
		{
			if ((READU8(0x1478FDF4) == 1))
			{
				if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
				{
					offset = READU32 (0x1400EB70);
					offset = READU32 (0x518 + offset);
					offset = READU32 (0x1C + offset);
					WRITEU32(0x3C + offset, 0xC1000000);
				}
			}
		}
	}
	if (is_pressed(BUTTON_DD) && is_pressed(BUTTON_SE))
	{
		if (READU32(0x655244) == 1)
		{
			if ((READU8(0x14790414) == 1))
			{
				if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000)) 
				{
					offset = READU32 (0x1400F178);
					offset = READU32 (0x518 + offset);
					offset = READU32 (0x1C + offset);
					WRITEU32(0x3C + offset, 0xC1000000);
				}
			}
		}
	}
}

void	saveslotRev0(void)
{
	static u32 data = 0;
	static u32 data1 = 0;
	static u32 data2 = 0;
	if (is_pressed(ST + X))
	{
		if (READU8(0x147909D4) == 1)
		{
			offset = READU32(0x1400F750);
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			data = READU32 (0x24 + offset);
			data1 = READU32 (0x28 + offset);
			data2 = READU32 (0x2C + offset);
		}
	}
	if (is_pressed(ST + Y))
	{
		if (READU8(0x147909D4) == 1)
		{
			offset = READU32(0x1400F750);
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU32 (0x24 + offset, data);
			WRITEU32 (0x28 + offset, data1);
			WRITEU32 (0x2C + offset, data2);
		}
	}
}

void	saveslotRev1(void)
{
	static u32 data = 0;
	static u32 data1 = 0;
	static u32 data2 = 0;
	if (is_pressed(ST + X))
	{
		if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
		{
			if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
			{
				offset = READU32 (0x1400EB70);
			}
			if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000))
			{
				offset = READU32 (0x1400F178);
			}
			{
			offset = READU32(0x518 + offset);
			offset = READU32(0x1C + offset);
			data = READU32(0x24 + offset);
			data1 = READU32(0x28 + offset);
			data2 = READU32(0x2C + offset);
			}
		}
	}
	if (is_pressed(ST + Y))
	{
		if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
		{
			if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
			{
				offset = READU32 (0x1400EB70);
			}
			if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000))
			{
				offset = READU32 (0x1400F178);
			}
			{
			offset = READU32(0x518 + offset);
			offset = READU32(0x1C + offset);
			WRITEU32(0x24 + offset, data);
			WRITEU32(0x28 + offset, data1);
			WRITEU32(0x2C + offset, data2);
			}
		}
	}
}

void	hugeBunnyhop(void)
{
	WRITEU32(0x6655D0, 0x40400000);
}

void	fastReverse(void)
{
	WRITEU32(0x6655A8, 0x41800000);
}

void	noCountdown(void)
{
	if (READU32(0x65C528) > 0x15700000)
	{
		offset = READU32(0x65C528);
		WRITEU8(0x109 + offset, 0x1);
		WRITEU8(0x589 + offset, 0x1);
	}
}

void	nodcRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		if (READU32(0xFFFFBF4) > 0x15700000 && (READU32(0xFFFFBF4) < 0x18000000))
		{
			offset = READU32(0xFFFFBF4);
			offset = READU32(0x5CC + offset);
			WRITEU8(0x40 + offset, 2);
		}
	}
}

void	nodcRev1(void)
{
	if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
	{
		if (READU32(0xFFFFBF4) > 0x15700000 && (READU32(0xFFFFBF4) < 0x18000000))
		{
			offset = READU32(0xFFFFBF4);
			offset = READU32(0x5CC + offset);
			WRITEU8(0x40 + offset, 2);
		}
	}
}

void	disablefpRev0(void)
{
	WRITEU8(0x147909D5, 0);
}

void	disablefpRev1(void)
{
	if (READU8(0x1478FDF4) == 1)
	{
		WRITEU8(0x1478FDF5, 0);
	}
	if (READU8(0x14790414) == 1)
	{
		WRITEU8(0x14790415, 0);
	}
}

void	dropMushrooms(void)
{
	u32 data9 = 0;
	if ((READU8(0x147909D4) == 1) || (READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
	{
		if (READU32(0xFFFFBF4) != 0)
		{
			offset = READU32(0xFFFFBF4);
			if (READU32(0x5D0 + offset) != 0)
			{
				offset = READU32(0x5D0 + offset);
				data9 = READU32(0x1F8 + offset);
				WRITEU32(0x1D0 + offset, data9);
			}
		}
	}
}

void	moonjumpRev0(void)
{
	if (is_pressed(ST + R))
	{
		if (READU8(0x147909D4) == 1)
		{
			if (READU32(0x1400F750) != 0)
			{
				offset = READU32 (0x1400F750);
				offset = READU32 (0x518 + offset);
				offset = READU32 (0x1C + offset);
				WRITEU32(0x3C + offset, 0x41200000);
			}
		}
	}
}

void	moonjumpRev1(void)
{
	if (is_pressed(ST + R))
	{
		if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
		{
			if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
			{
				offset = READU32 (0x1400EB70);
			}
			if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000))
			{
				offset = READU32 (0x1400F178);
			}
			{
				offset = READU32 (0x518 + offset);
				offset = READU32 (0x1C + offset);
				WRITEU32(0x3C + offset, 0x41200000);
			}
		}
	}
}

void	maxTimer(void)
{
	if (READU32(0x65C528) == 1)
	{
		offset = READU32(0x65C528);
		WRITEU32(0x80 + offset, 0x464B);
	}
}

void	stalkingRev0(void) // filthy stalking code converted by Anto's converter. I was too lazy to write the whole thing
{
	u32 data;
	u32 offset;

	data = 0;
	offset = 0;

	WRITEU32(0x00444AB8 + offset, 0xE1A00000);
	WRITEU32(0x0030D5C8 + offset, 0xE1A00000);
	if (is_pressed(0x00000500))
	{
		offset = 0x10000000;
		WRITEU32(0x04000007 + offset, 0x00000000);
		WRITEU32(0x04137904 + offset, 0x00000000);
	}

	data = 0;
	offset = 0;
	if (READU32(0x0065C528 + offset) != 0x00000000)
	{
		offset = READU32(0x0065C528 + offset);
		if (READU32(0x000000C8 + offset) > 0x16000000)
		{
			if (READU32(0x000000C8 + offset) < 0x18000000)
			{
				offset = READU32(0x000000C8 + offset);
				WRITEU32(0x00000034 + offset, 0x00000000);
				WRITEU32(0x00000038 + offset, 0x00000000);
			}
		}
	}

	data = 0;
	offset = 0;
	if (is_pressed(0x00000082))
	{
		data = READU32(0x14000007 + offset);
		WRITEU32(0x00654000 + offset, data);
		offset += 4;
	}

	data = 0;
	offset = 0;
	data = READU32(0x14137904 + offset);
	WRITEU32(0x00654004 + offset, data);
	offset += 4;

	data = 0;
	offset = 0;
	if (is_pressed(0x00000042))
	{
		data = READU32(0x00654000 + offset);
		WRITEU32(0x14000007 + offset, data);
		offset += 4;
	}

	data = 0;
	offset = 0;
	data = READU32(0x00654004 + offset);
	WRITEU32(0x14137904 + offset, data);
	offset += 4;

	data = 0;
	offset = 0;
	offset = 0x10000000;
	if (READU32(0x04137904 + offset) > 0x00000050)
	{
		WRITEU32(0x04000007 + offset, 0x00000001);
		if (READU32(0x04137904 + offset) > 0x000000A0)
		{
			WRITEU32(0x04000007 + offset, 0x00000002);
			if (READU32(0x04137904 + offset) > 0x000000F0)
			{
				WRITEU32(0x04000007 + offset, 0x00000003);
				if (READU32(0x04137904 + offset) > 0x00000140)
				{
					WRITEU32(0x04000007 + offset, 0x00000004);
					if (READU32(0x04137904 + offset) > 0x00000190)
					{
						WRITEU32(0x04000007 + offset, 0x00000005);
						if (READU32(0x04137904 + offset) > 0x000001E0)
						{
							WRITEU32(0x04000007 + offset, 0x00000006);
							if (READU32(0x04137904 + offset) > 0x00000230)
							{
								WRITEU32(0x04000007 + offset, 0x00000007);
								if (READU32(0x04137904 + offset) > 0x00000280)
								{
									WRITEU32(0x04000007 + offset, 0x00000008);
									if (READU32(0x04137904 + offset) > 0x000002C0)
									{
										WRITEU32(0x04137904 + offset, 0x00000000);
										WRITEU32(0x04000007 + offset, 0x00000000);
									}
								}
							}
						}
					}
				}
			}
		}
	}

	data = 0;
	offset = 0;
	offset = 0x10000000;
	if (READU16(0x047909D4 + offset) == 0x00000001)
	{
		if (READU16(0x054733E0 + offset) > 0x00000007)
		{
			if (READU16(0x04000007 + offset) == 0x00000001)
			{
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000020E0 + offset);
				data = READU32(0x00000024 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000024 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000020E0 + offset);
				data = READU32(0x00000028 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000028 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000020E0 + offset);
				data = READU32(0x0000002C + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x0000002C + offset, data);
				offset += 4;
			}
		}
	}

	data = 0;
	offset = 0;
	offset = 0x10000000;
	if (READU16(0x047909D4 + offset) == 0x00000001)
	{
		if (READU16(0x054733E0 + offset) > 0x00000006)
		{
			if (READU16(0x04000007 + offset) == 0x00000002)
			{
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002124 + offset);
				data = READU32(0x00000024 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000024 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002124 + offset);
				data = READU32(0x00000028 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000028 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002124 + offset);
				data = READU32(0x0000002C + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x0000002C + offset, data);
				offset += 4;
			}
		}
	}

	data = 0;
	offset = 0;
	offset = 0x10000000;
	if (READU16(0x047909D4 + offset) == 0x00000001)
	{
		if (READU16(0x054733E0 + offset) > 0x00000005)
		{
			if (READU16(0x04000007 + offset) == 0x00000003)
			{
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002168 + offset);
				data = READU32(0x00000024 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000024 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002168 + offset);
				data = READU32(0x00000028 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000028 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002168 + offset);
				data = READU32(0x0000002C + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x0000002C + offset, data);
				offset += 4;
			}
		}
	}

	data = 0;
	offset = 0;
	offset = 0x10000000;
	if (READU16(0x047909D4 + offset) == 0x00000001)
	{
		if (READU16(0x054733E0 + offset) > 0x00000004)
		{
			if (READU16(0x04000007 + offset) == 0x00000004)
			{
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000021AC + offset);
				data = READU32(0x00000024 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000024 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000021AC + offset);
				data = READU32(0x00000028 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000028 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000021AC + offset);
				data = READU32(0x0000002C + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x0000002C + offset, data);
				offset += 4;
			}
		}
	}

	data = 0;
	offset = 0;
	offset = 0x10000000;
	if (READU16(0x047909D4 + offset) == 0x00000001)
	{
		if (READU16(0x054733E0 + offset) > 0x00000003)
		{
			if (READU16(0x04000007 + offset) == 0x00000005)
			{
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000021F0 + offset);
				data = READU32(0x00000024 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000024 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000021F0 + offset);
				data = READU32(0x00000028 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000028 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000021F0 + offset);
				data = READU32(0x0000002C + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x0000002C + offset, data);
				offset += 4;
			}
		}
	}

	data = 0;
	offset = 0;
	offset = 0x10000000;
	if (READU16(0x054733E0 + offset) > 0x00000002)
	{
		if (READU16(0x047909D4 + offset) == 0x00000001)
		{
			if (READU16(0x04000007 + offset) == 0x00000006)
			{
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002234 + offset);
				data = READU32(0x00000024 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000024 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002234 + offset);
				data = READU32(0x00000028 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000028 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002234 + offset);
				data = READU32(0x0000002C + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x0000002C + offset, data);
				offset += 4;
			}
		}
	}

	data = 0;
	offset = 0;
	offset = 0x10000000;
	if (READU16(0x054733E0 + offset) > 0x00000001)
	{
		if (READU16(0x047909D4 + offset) == 0x00000001)
		{
			if (READU16(0x04000007 + offset) == 0x00000007)
			{
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002278 + offset);
				data = READU32(0x00000024 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000024 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002278 + offset);
				data = READU32(0x00000028 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000028 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x00002278 + offset);
				data = READU32(0x0000002C + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x0000002C + offset, data);
				offset += 4;
			}
		}
	}

	data = 0;
	offset = 0;
	offset = 0x10000000;
	if (READU16(0x054733E0 + offset) > 0x00000000)
	{
		if (READU16(0x047909D4 + offset) == 0x00000001)
		{
			if (READU16(0x04000007 + offset) == 0x00000008)
			{
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000022BC + offset);
				data = READU32(0x00000024 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000024 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000022BC + offset);
				data = READU32(0x00000028 + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x00000028 + offset, data);
				offset += 4;
				offset = 0x00000000;
				offset = READU32(0x0065DA44 + offset);
				offset = READU32(0x000022BC + offset);
				data = READU32(0x0000002C + offset);
				offset = 0x10000000;
				offset = READU32(0x0400F750 + offset);
				offset = READU32(0x00000518 + offset);
				offset = READU32(0x0000001C + offset);
				WRITEU32(0x0000002C + offset, data);
				offset += 4;
			}
		}
	}
}

/* Region Modifiers
You can edit these by going to the top of this file and finding the EXACT name of the location you want, and then pasting it where you see WRITEU32(offset + 0xF7CC, REGION);
This will still have the original name, because that will require more editing. Enable the code that you originally edited */

void	writeLocation(u32 location)
{
	if (READU32(0x6673C8) != 0)
	{
		offset = READU32(0x6673C8);
		WRITEU32(offset + 0xF7CC, location);
	}
}

void	writeFlag(u8 flag)
{
	if (READU32(0x6673C8) != 0)
	{
		offset = READU32(0x6673C8);
		WRITEU8(offset + 0xE7CA, flag);
		WRITEU8(offset + 0xF7D0, flag);
	}
}

void	region_France(void)
{
	writeLocation(France);
}

void	region_Hawaii(void)
{
	writeLocation(Hawaii);
}

void	region_UpperAntartica(void)
{
	writeLocation(UpperAntartica);
}

void	region_NorthPole(void)
{
	writeLocation(NorthPole);
}

void	region_Iran(void)
{
	writeLocation(Iran);
}

void	region_SaudiArabia(void)
{
	writeLocation(SaudiArabia);
}

void	region_Cuba(void)
{
	writeLocation(Cuba);
}

void	region_Russia(void)
{
	writeLocation(RussiaEnmelen);
}

void	region_Phillippines(void)
{
	writeLocation(Phillippines);
}

void	flag_Japan(void)
{
	writeFlag(Japan);
}

void	flag_Haiti(void)
{
	writeFlag(Haiti1);
}

void	flag_Italy(void)
{
	writeFlag(Italy);
}

void	flag_SaudiArabia(void)
{
	writeFlag(SaudiArabia1);
}

void	flag_SouthAfrica(void)
{
	writeFlag(SouthAfrica);
}

void	flag_Russia(void)
{
	writeFlag(Russia);
}

void	flag_USA(void)
{
	writeFlag(UnitedStates1);
}

void	watereverywhereRev0(void)
{
	if(READU8(0x147909D4) == 1)
	{
		offset = READU32(0x663954);
		offset = READU32(offset + 0x58);
		WRITEU32(offset + 0x420, 0x48000000);
	}
}

void	watereverywhereRev1(void)
{
	if((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
	{
		offset = READU32(0x663954);
		offset = READU32(offset + 0x58);
		WRITEU32(offset + 0x420, 0x48000000);
	}
}

void	bulletControlRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		if (READU32(0x1400F750) != 0)
		{
			offset = READU32 (0x1400F750);
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU8(0xC32 + offset, 64);
		}
	}
}

void	bulletControlRev1(void)
{
	if ((READU8(0x1478FDF4) == 1) || (READU8(0x14790414) == 1))
	{
		if (READU32(0x1400EB70) > 0x15000000 && (READU32(0x1400EB70) < 0x18000000)) 
		{
			offset = READU32 (0x1400EB70);
		}
		if (READU32(0x1400F178) > 0x15000000 && (READU32(0x1400F178) < 0x18000000))
		{
			offset = READU32 (0x1400F178);
		}
		{
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU8(0xC32 + offset, 64);
		}
	}
}

