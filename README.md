sadx-windyvalley-autodemo
=========================

Port of the Auto Demo version of Windy Valley to SADX Mod Loader.
Compile with Visual Studio (2013 tested).

Thanks and shoutouts to:
MainMemory, Dude, Orengefox, Jen, drx, franz

=========================

Files:
      main.cpp          - contains main routine that will replace data
      windy00cpp.h      - contains landtable and deathzone data for Windy Valley Act 1 (generated from SADXLVL2)
      windy02cpp.h      - contains landtable and deathzone data for Windy Valley Act 3 (generated from SADXLVL2)
      ninja.h           - Ninja Library header file
      SADXModLoader.h   - header file for integrating with MainMemory's SADX Mod Loader
      stdafx.h          - include file for standard system include files
      targetver.h       - includes SDKDDKVer.h which defines the highest available Windows platform
      
Resources:
      1ST_READ.7z       - partial disassembly of the 1ST_READ (main executable) from the Auto Demo
      STG02.7z          - partial disassembly of STG02.bin (the stage binary for Windy Valley) from the Auto Demo
      SET0200S.BIN      - object placement set file for Act 1 (Sonic)
      SET0201S.BIN      - object placement set file for Act 2 (Sonic)
      SET0202S.BIN      - object placement set file for Act 3 (Sonic)
      CAM0200S.BIN      - camera data for Act 1 (Sonic)
      CAM0201S.BIN      - camera data for Act 2 (Sonic, has nothing)
      CAM0202S.BIN      - camera data for Act 3 (Sonic, has nothing)
      
=========================

TODO:
1.) Apply textures to landtable mesh (custom PVM? will require another export since we need to separate materials from objects and vertex colors)
2.) Find and port path data for stage from Auto Demo files
3.) Find and port original death zone and skybox data from Auto Demo files
4.) Rip all the (usable) data from STG02.bin/1ST_READ.bin (stage object models, possibly different common object models, animations, etc)
5.) Port over and replace object list from STG02
6.) Port over "static" objects (simple or no animation, little to no branching in loading subroutines), foiliage, building structures, etc
7.) Attempt at porting over all other objects from STG02 (with logic that match or mimmick the original based on the disassembly)
8.) Apply textures to ported objects (texture names for WINDY_OBJ.pvm are referenced in STG02.bin along with what object uses said textures).
9.) Reconstruct Windy Valley Act 2 landtable with available remaining data (see wiki to understand what we have)
??.) Port other AutoDemo levels (new project)?

==========================
