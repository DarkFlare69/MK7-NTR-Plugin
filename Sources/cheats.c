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

u8 Japan = 1;
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
u8 Haiti2 = 32;
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
/* 45u8 St. Vincent and the Grenadines    ----   will finish later
46u8 Suriname
47u8 Trinidad and Tobago
48u8 Turks and Caicos Islands
49u8 United States
50u8 Uruguay
51u8 US Virgin Islands
52u8 Venezuela
64u8 Albania
65u8 Australia
66u8 Austria
67u8 Belgium
68u8 Bosnia and Herzegovina
69u8 Botswana
70u8 Bulgaria
71u8 Croatia
72u8 Cyprus
73u8 Czech Republic
74u8 Denmark
75u8 Estonia
76u8 Finland
77u8 France
78u8 Germany
79u8 Greece
80u8 Hungary
81u8 Iceland
82u8 Ireland
83u8 Italy
84u8 Latvia
85u8 Lesotho
86u8 Lichtenstein
87u8 Lithuania
88u8 Luxembourg
89u8 F.Y.R of Macedonia
90u8 Malta
91u8 Montenegro
92u8 Mozambique
93u8 Namibia
94u8 Netherlands
95u8 New Zealand
96u8 Norway
97u8 Poland
98u8 Portugal
99u8 Romania
100u8 Russia
101u8 Serbia
102u8 Slovakia
103u8 Slovenia
104u8 South Africa
105u8 Spain
106u8 Swaziland
107u8 Sweden
108u8 Switzerland
109u8 Turkey
110u8 United Kingdom
111u8 Zambia
112u8 Zimbabwe
113u8 Azerbaijan
114u8 Mauritania (Islamic Republic of Mauritania)
115u8 Mali (Republic of Mali)
116u8 Niger (Republic of Niger)
117u8 Chad (Republic of Chad)
118u8 Sudan (Republic of the Sudan)
119u8 Eritrea (State of Eritrea)
120u8 Dijibouti (Republic of Djibouti)
121u8 Somalia (Somali Republic)
128u8 Taiwan
136u8 South Korea
144u8 Hong Kong
145u8 Macao
152u8 Indonesia
153u8 Singapore
154u8 Thailand
155u8 Philippines
156u8 Malaysia
160u8 China
168u8 U.A.E.
169u8 India
170u8 Egypt
171u8 Oman
172u8 Qatar
173u8 Kuwait
174u8 Saudi Arabia
175u8 Syria
176u8 Bahrain
177u8 Jordan */

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
	WRITEU32(0x666094, 0x00000000);
}

void	fastGreen(void)
{
	WRITEU32(0x66619C, 0x43000000);
}

void	stoppedGreen(void)
{
	WRITEU32(0x66619C, 0x00000000);
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
			WRITEU32(0xC8 + offset, 0x9);
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
			WRITEU32(0xC8 + offset, 0x6);
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
			WRITEU32(0xC8 + offset, 0x2);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DD))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 0x4);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DU))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 0x1);
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
			WRITEU32(0xC8 + offset, 0x9);
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
			WRITEU32(0xC8 + offset, 0x6);
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
			WRITEU32(0xC8 + offset, 0x2);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DD))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 0x4);
			WRITEU32(0xD8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DU))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x27AC + offset);
			WRITEU32(0x3C + offset, 0xFFFFFFFF);
			WRITEU32(0xA8 + offset, 0x203);
			WRITEU32(0xC8 + offset, 0x1);
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
			WRITEU32(offset - 0xE30, 0xF423F);
		}
	}
	if (is_pressed(BUTTON_DD))
	{
		if (READU32(0x663D04) != 0)
		{
			offset = READU32(0x663D04);
			WRITEU32(offset - 0xE30, 0x0);
		}
	}
	if (is_pressed(BUTTON_DU))
	{
		if (READU32(0x663D04) != 0)
		{
			offset = READU32(0x663D04);
			WRITEU32(offset - 0xE30, 0xAA289);
		}
	}
	if (is_pressed(BUTTON_DR))
	{
		if (READU32(0x663D04) != 0)
		{
			offset = READU32(0x663D04);
			WRITEU32(offset - 0xE30, 0xA2C2A);
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
		WRITEU32(0x655240, 0x1);
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
