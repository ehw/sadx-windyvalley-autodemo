/*

	Windy Valley port from Auto Demo

										*/

#include "stdafx.h"
#include <cstdlib>
#include "SADXModLoader.h"
#include "windy02cpp.h"
#include "windy00cpp.h"

// Note: The init coordinates listed in this array replace all of Sonic's coordinates.
//		 You'd have to enter the positions for all the other levels again for Sonic to load
//		 properly in them again. The Level IDS need to be changed too.
StartPosition SonicStartArray[] =
{ 
	{ LevelIDs_EmeraldCoast, 0, { 256.0, 60.0, -885.0 }, 0 },			// Emerald Coast Act 1
	{ LevelIDs_EmeraldCoast, 1, { 256.0, 60.0, -885.0 }, 0 },			// Emerald Coast Act 2
	{ LevelIDs_EmeraldCoast, 2, { 256.0, 60.0, -885.0 }, 0 },			// Emerald Coast Act 3
	{ LevelIDs_WindyValley, 0, { 256.0, 60.0, -885.0 }, 0 },			// Windy Valley Act 1
	{ LevelIDs_WindyValley, 1, { 42.0, 380.0, -20.0 }, 0 },				// Windy Valley Act 2
	{ LevelIDs_WindyValley, 2, { 0, 700.0, 0 }, 0 },					// Windy Valley Act 3
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1770.0, -985.0 }, 0x4000 },	// Twinkle Park Act 1
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },	// Twinkle Park Act 2
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 },
	{ LevelIDs_TwinklePark, 0, { -2000.0, 1750.0, -1000.0 }, 0x4000 }
};

PointerInfo pointers[] =
{
	// Replace the array containing Sonic's initial starting positions with a custom one.
	ptrdecl(0x41491E, &SonicStartArray),

	// Windy Valley Act 1
	ptrdecl(0x97DA48, &landtable_008051E0),	// Redirect Windy Valley Act 1's land table to a custom one in windy00cpp.h
	ptrdecl(0xBFD7DC, &object_007FD21C),	// Redirect Windy Valley Act 1's death zone to a custom one in windy00cpp.h

	// Windy Valley Act 3
	ptrdecl(0x97DA50, &landtable_0080433C), // Redirect Windy Valley Act 3's land table to a costum one in windy02cpp.h
	ptrdecl(0xBFD7FC, &object_007FD448),	// Redirect Windy Valley Act 3's death zone to a custom one in windy02cpp.h (1)
	ptrdecl(0xBFD804, &object_007FD540),	// Redirect Windy Valley Act 3's death zone to a custom one in windy02cpp.h (2)
	ptrdecl(0xBFD80C, &object_007FD674),	// Redirect Windy Valley Act 3's death zone to a custom one in windy02cpp.h (3)
	ptrdecl(0xBFD814, &object_007FD7A4)		// Redirect Windy Valley Act 3's death zone to a custom one in windy02cpp.h (4)
};

extern "C"									// required for proper export
	__declspec(dllexport)					// this data is being exported from our DLL

ModInfo SADXModInfo = 
{
	ModLoaderVer,							// struct version
	NULL,									// initialization function
	NULL, 0,								// list of places to insert raw data
	NULL, 0,								// list of places to insert jumps to code in our DLL
	NULL, 0,								// list of places to insert calls to code in our DLL
	arrayptrandlength(pointers)				// list of places to insert pointers to data in our DLL
};
