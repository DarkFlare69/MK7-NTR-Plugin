#include "cheats.h"
#include "hid.h"

u32 data = 0;
u32 offset = 0;


void	invincibilityRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		offset = READU32 (0x1400F750);
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU16(0x102C + offset, 0xFFFF);
	}
}

void	invincibilityRev1(void)
{
	if (READU8(0x1478FDF4) == 1)
	{
		offset = READU32 (0x1400EB70);
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU16(0x102C + offset, 0xFFFF);
	}
}

void	blackkartRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		offset = READU32 (0x1400F750);
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU16(0xFF8 + offset, 0xFFFF);
	}
}

void	blackkartRev1(void)
{
	if (READU8(0x1478FDF4) == 1)
	{
		offset = READU32 (0x1400EB70);
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU16(0xFF8 + offset, 0xFFFF);
	}
}

void	shockedRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		offset = READU32 (0x1400F750);
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU16(0x1000 + offset, 0xFFFF);
	}
}

void	shockedRev1(void)
{
	if (READU8(0x1478FDF4) == 1)
	{
		offset = READU32 (0x1400EB70);
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU16(0x1000 + offset, 0xFFFF);
	}
}

void	crushedRev0(void)
{
	if (READU8(0x147909D4) == 1)
	{
		offset = READU32 (0x1400F750);
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU16(0x1004 + offset, 0xFFFF);
	}
}

void	crushedRev1(void)
{
	if (READU8(0x1478FDF4) == 1)
	{
		offset = READU32 (0x1400EB70);
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU16(0x1004 + offset, 0xFFFF);
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
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x00000009);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_Y))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x0000000D);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_ST))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x00000006);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_SE))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x0000000A);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DL))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x0000000E);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DR))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x00000002);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DD))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x00000004);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DU))
			{
			offset = READU32(0x17782494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x00000001);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
		}
	}
}

void	itemwheelRev1(void)
{
	if (READU8(0x1478FDF4) == 1)
	{
		if (READU32(0x177BE494) != 0)
		{
			if (is_pressed(BUTTON_X))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x00000009);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_Y))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x0000000D);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_ST))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x00000006);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_SE))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x0000000A);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DL))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x0000000E);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DR))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x00000002);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DD))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x00000004);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
			}
			if (is_pressed(BUTTON_DU))
			{
			offset = READU32(0x177BE494);
			offset = READU32(0x000027AC + offset);
			WRITEU32(0x0000003C + offset, 0xFFFFFFFF);
			WRITEU32(0x000000A8 + offset, 0x00000203);
			WRITEU32(0x000000C8 + offset, 0x00000001);
			WRITEU32(0x000000D8 + offset, 0x3F800000);
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
			if (READU32(0x0065C528) != 0)
			{
				offset = READU32(0x0065C528);    
				offset = READU32(offset - 0x9AF4);
				ADDTOFLOAT(offset - 0xACCC, 0.1);
				ADDTOFLOAT(0x16709A94, 0.1);
		}
		}
		if (is_pressed(ST + DL))
		{
			if (READU32(0x0065C528) != 0)
			{
				offset = READU32(0x0065C528);
				offset = READU32(offset - 0x9AF4);
				SUBTOFLOAT(offset - 0xACCC, 0.1);
				SUBTOFLOAT(0x16709A94, 0.1);
			}
		}
	}
}

void	waterlevelRev1(void)
{
	if (READU8(0x1478FDF4) == 1)
	{
		if (is_pressed(ST + DR))
		{
			if (READU32(0x0065C528) != 0)
			{
				offset = READU32(0x0065C528);    
				offset = READU32(offset - 0x9AF4);
				ADDTOFLOAT(offset - 0xACCC, 0.1);
				ADDTOFLOAT(0x16709A94, 0.1);
			}
		}
		if (is_pressed(ST + DL))
		{
			if (READU32(0x0065C528) != 0)
			{
				offset = READU32(0x0065C528);
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
		WRITEU32(0x153765F0 + offset, 0x413C0000);
		WRITEU32(0x15379B10 + offset, 0x413C0000);
		WRITEU32(0x15386270 + offset, 0x413C0000);
		offset += 0x4;
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
		WRITEU32(0x153765F0 + offset, 0x41A00000);
		WRITEU32(0x15379B10 + offset, 0x41A00000);
		WRITEU32(0x15386270 + offset, 0x41A00000);
		offset += 0x4;
	}
}

void	vrExtender(void)
{
	if (is_pressed(BUTTON_ST))
	{
		if (READU32(0x00663D04) != 0)
		{
			offset = READU32(0x00663D04);
			WRITEU32(offset - 0xE30, 0xF423F);
		}
	}
	if (is_pressed(BUTTON_DD))
	{
		if (READU32(0x00663D04) != 0)
		{
			offset = READU32(0x00663D04);
			WRITEU32(offset - 0xE30, 0x0);
		}
	}
	if (is_pressed(BUTTON_DU))
	{
		if (READU32(0x00663D04) != 0)
		{
			offset = READU32(0x00663D04);
			WRITEU32(offset - 0xE30, 0xAA289);
		}
	}
	if (is_pressed(BUTTON_DR))
	{
		if (READU32(0x00663D04) != 0)
		{
			offset = READU32(0x00663D04);
			WRITEU32(offset - 0xE30, 0xA2C2A);
		}
	}
}

void	unlockeverythingRev1(void)
{
	WRITEU32(0x1413C148, 0x1FF003F);
	WRITEU8(0x1413C147, 0xFF);
	WRITEU16(0x1413C150, 0x3FFF);
	WRITEU8(0x1413C154, 0x7F);
	WRITEU8(0x1413C158, 0x3F);
	WRITEU8(0x1413C15C, 0xFF);
	WRITEU32(0x1413BF30, 99999);
}

void	unlockeverythingRev011(void)
{
	WRITEU32(0x1413CD28, 0x1FF003F);
	WRITEU8(0x1413CD27, 0x3F);
	WRITEU16(0x1413CD30, 0x3FFF);
	WRITEU8(0x1413CD34, 0x7F);
	WRITEU8(0x1413CD38, 0x3F);
	WRITEU8(0x1413CD3C, 0xFF);
	WRITEU32(0x1413CB10, 99999);
}

void	unlockeverythingRev0(void)
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
					WRITEU32(0x24 + offset, data);
					WRITEU32(0x28 + offset, data1);
					WRITEU32(0x2C + offset, data2);
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
			if (READU32(0x1400EB70) != 0)
			{
				if (READU32(0x1478FDF4) == 1)
				{
					offset = READU32(0x1400EB70);
					offset = READU32(0x518 + offset);
					offset = READU32(0x1C + offset);
					WRITEU32(0x24 + offset, data);
					WRITEU32(0x28 + offset, data1);
					WRITEU32(0x2C + offset, data2);
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
		WRITEU32(0x6556D8, 0xFFFF);
	}
	if (is_pressed(BUTTON_ST))
	{
		WRITEU32(0x655240, 0);
		WRITEU32(0x6556D8, 0x14);
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
	if (READU8(0x1478FDF4) != 1)
	{
		WRITEU32(0x655240, 0);
	}
	if (is_pressed(BUTTON_SE))
	{
		WRITEU32(0x655240, 0x1);
		WRITEU32(0x6556D8, 0xFFFF);
	}
	if (is_pressed(BUTTON_ST))
	{
		WRITEU32(0x655240, 0);
		WRITEU32(0x6556D8, 0x14);
	}
	if (READU32(0x655240) == 1)
	{
		if (READU8(0x1478FDF4) == 1)
		{
		offset = READU32 (0x1400EB70);
		offset = READU32 (0x518 + offset);
		offset = READU32 (0x1C + offset);
		WRITEU32(0x3C + offset, 0);
		}
	}
	if (is_pressed(BUTTON_DU) && is_pressed(BUTTON_SE))
	{
		if (READU32(0x655240) == 1)
		{
			if (READU8(0x1478FDF4) == 1)
			{
			offset = READU32 (0x1400EB70);
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
			if (READU8(0x1478FDF4) == 1)
			{
			offset = READU32 (0x1400EB70);
			offset = READU32 (0x518 + offset);
			offset = READU32 (0x1C + offset);
			WRITEU32(0x3C + offset, 0xC1000000);
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
		if (READU8(0x1478FDF4) == 1)
		{
			offset = READU32(0x1400EB70);
			offset = READU32(0x518 + offset);
			offset = READU32(0x1C + offset);
			data = READU32(0x24 + offset);
			data1 = READU32(0x28 + offset);
			data2 = READU32(0x2C + offset);
		}
	}
	if (is_pressed(ST + Y))
	{
		if (READU8(0x1478FDF4) == 1)
		{
			offset = READU32(0x1400EB70);
			offset = READU32(0x518 + offset);
			offset = READU32(0x1C + offset);
			WRITEU32(0x24 + offset, data);
			WRITEU32(0x28 + offset, data1);
			WRITEU32(0x2C + offset, data2);
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
			WRITEU8(0x40 + offset, 0x2);
		}
	}
}

void	nodcRev1(void)
{
	if (READU8(0x1478FDF4) == 1)
	{
		if (READU32(0xFFFFBF4) > 0x15700000 && (READU32(0xFFFFBF4) < 0x18000000))
		{
			offset = READU32(0xFFFFBF4);
			offset = READU32(0x5CC + offset);
			WRITEU8(0x40 + offset, 0x2);
		}
	}
}

void	disablefpRev0(void)
{
	WRITEU8(0x147909D5, 0x0);
}

void	disablefpRev1(void)
{
	WRITEU8(0x1478FDF5, 0x0);
}
