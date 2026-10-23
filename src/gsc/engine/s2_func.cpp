// Copyright 2026 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "xsk/gsc/engine/s2.hpp"

namespace xsk::gsc::s2
{

// comments: handler address (RVA) in D:\Files\IDB\s2\s2_mp64_ship_dump.exe.i64 (image base 0), from the builtin registration lists
// no comment = not found in the registration lists
extern std::array<std::pair<u16, char const*>, func_count> const func_list
{{
    { 0x001, "precacheturret" }, // 0x5F8200
    { 0x002, "getweaponarray" }, // 0x5F97D0
    { 0x003, "createprintchannel" }, // 0x5F0B40
    { 0x004, "updategamerprofileall" },
    { 0x005, "clearlocalizedstrings" },
    { 0x006, "setphysicsgravitydir" }, // 0x5FCBF0
    { 0x007, "gettimescale" },
    { 0x008, "settimescale" },
    { 0x009, "_func_009" },
    { 0x00A, "_func_00A" },
    { 0x00B, "_func_00B" },
    { 0x00C, "notifyoncommand" },
    { 0x00D, "setprintchannel" }, // 0x5F0B50
    { 0x00E, "print" }, // 0x5F0C80
    { 0x00F, "println" }, // 0x5F0D50
    { 0x010, "print3d" }, // 0x5F2190
    { 0x011, "line" }, // 0x5F2380
    { 0x012, "box" }, // 0x5F2440
    { 0x013, "orientedbox" }, // 0x5F29D0
    { 0x014, "sphere" }, // 0x5F29F0
    { 0x015, "cylinder" }, // 0x5F2B10
    { 0x016, "spawnturret" }, // 0x5F79F0
    { 0x017, "canspawnturret" }, // 0x5F8050
    { 0x018, "assert" }, // 0x5F30F0
    { 0x019, "pausecinematicingame" },
    { 0x01A, "drawcompassfriendlies" },
    { 0x01B, "bulletspread" },
    { 0x01C, "bullettracer" },
    { 0x01D, "badplace_delete" }, // 0x5EBB00
    { 0x01E, "badplace_cylinder" }, // 0x5EC440
    { 0x01F, "badplace_arc" }, // 0x5ECEC0
    { 0x020, "badplace_brush" }, // 0x5EE3F0
    { 0x021, "clearallcorpses" }, // 0x6107D0
    { 0x022, "setturretnode" }, // 0x5A40B0
    { 0x023, "unsetturretnode" }, // 0x5A4190
    { 0x024, "_func_024" }, // 0x639200
    { 0x025, "setnodepriority" },
    { 0x026, "_func_026" },
    { 0x027, "_func_027" },
    { 0x028, "_func_028" },
    { 0x029, "_func_029" },
    { 0x02A, "_func_02A" },
    { 0x02B, "updategamerprofile" },
    { 0x02C, "assertex" }, // 0x5F3120
    { 0x02D, "assertmsg" }, // 0x5F3370
    { 0x02E, "isdefined" }, // 0x5F33C0
    { 0x02F, "isvalidmissile" }, // 0x5F39A0
    { 0x030, "_func_030" }, // 0x5F3CB0
    { 0x031, "isstring" }, // 0x5F3F30
    { 0x032, "setomnvar" }, // 0x5F6D70
    { 0x033, "getomnvar" }, // 0x5F73C0
    { 0x034, "setdvar" }, // 0x5F8070
    { 0x035, "setdynamicdvar" }, // 0x5F88B0
    { 0x036, "setdvarifuninitialized" }, // 0x5F9620
    { 0x037, "setdevdvar" }, // 0x5F9110
    { 0x038, "setdevdvarifuninitialized" }, // 0x5F9E50
    { 0x039, "getdvar" }, // 0x5FA1D0
    { 0x03A, "getdvarint" }, // 0x5FA730
    { 0x03B, "getdvarfloat" }, // 0x5FB030
    { 0x03C, "getdvarvector" }, // 0x5FBE90
    { 0x03D, "gettime" }, // 0x5FCB60
    { 0x03E, "gettimeutc" }, // 0x5FCCF0
    { 0x03F, "getradiometricunit" }, // 0x5FD020
    { 0x040, "getentbynum" }, // 0x5FD0D0
    { 0x041, "getweaponmodel" }, // 0x5FD420
    { 0x042, "getculldist" },
    { 0x043, "sethalfresparticles" },
    { 0x044, "getmapsunlight" },
    { 0x045, "setsunlight" }, // 0x606EC0
    { 0x046, "resetsunlight" }, // 0x606FB0
    { 0x047, "getmapsundirection" },
    { 0x048, "getmapsunangles" },
    { 0x049, "setsundirection" },
    { 0x04A, "lerpsundirection" },
    { 0x04B, "lerpsunangles" },
    { 0x04C, "resetsundirection" },
    { 0x04D, "enableforcedsunshadows" },
    { 0x04E, "enableforcednosunshadows" },
    { 0x04F, "disableforcedsunshadows" },
    { 0x050, "enableouterspacemodellighting" },
    { 0x051, "disableouterspacemodellighting" },
    { 0x052, "remapstage" },
    { 0x053, "changelevel" },
    { 0x054, "_func_054" },
    { 0x055, "_func_055" },
    { 0x056, "missionfailed" },
    { 0x057, "cinematic" },
    { 0x058, "cinematicingame" },
    { 0x059, "cinematicingamesync" },
    { 0x05A, "cinematicingameloop" },
    { 0x05B, "cinematicingameloopresident" },
    { 0x05C, "iscinematicplaying" },
    { 0x05D, "stopcinematicingame" },
    { 0x05E, "_func_05E" },
    { 0x05F, "getweaponbasename" }, // 0x5FDC00
    { 0x060, "getweaponattachmentsbasenames" }, // 0x5FE3E0
    { 0x061, "getweaponattachments" }, // 0x5DE5D0
    { 0x062, "getweaponattachmentdisplaynames" }, // 0x5DF550
    { 0x063, "getweaponcamoname" }, // 0x5E0A20
    { 0x064, "getweaponreticlename" }, // 0x5E2C40
    { 0x065, "getanimlength" }, // 0x5E8630
    { 0x066, "animhasnotetrack" }, // 0x5EAB30
    { 0x067, "getnotetracktimes" }, // 0x5EACF0
    { 0x068, "spawn" }, // 0x5F6750
    { 0x069, "bullettrace" }, // 0x5ED9A0
    { 0x06A, "target_setmaxsize" },
    { 0x06B, "target_setcolor" },
    { 0x06C, "target_setdelay" },
    { 0x06D, "getstartorigin" }, // 0x60FD60
    { 0x06E, "getstartangles" }, // 0x6101E0
    { 0x06F, "getcycleoriginoffset" },
    { 0x070, "magicgrenade" },
    { 0x071, "magicgrenademanual" }, // 0x5E24E0
    { 0x072, "setblur" },
    { 0x073, "_func_073" },
    { 0x074, "_func_074" },
    { 0x075, "_func_075" },
    { 0x076, "savegame" },
    { 0x077, "issavesuccessful" },
    { 0x078, "issaverecentlyloaded" },
    { 0x079, "savegamenocommit" },
    { 0x07A, "commitsave" },
    { 0x07B, "commitwouldbevalid" },
    { 0x07C, "getfxvisibility" },
    { 0x07D, "setculldist" },
    { 0x07E, "bullettracepassed" }, // 0x5EEBE0
    { 0x07F, "sighttracepassed" }, // 0x5EF480
    { 0x080, "physicstrace" }, // 0x5EFBC0
    { 0x081, "playerphysicstrace" }, // 0x5F05F0
    { 0x082, "getgroundposition" }, // 0x5F6450
    { 0x083, "getmovedelta" }, // 0x5EC220
    { 0x084, "getangledelta" }, // 0x5EC9D0
    { 0x085, "getnorthyaw" }, // 0x5EE540
    { 0x086, "getcommandfromkey" },
    { 0x087, "getsticksconfig" },
    { 0x088, "weaponfightdist" },
    { 0x089, "weaponmaxdist" },
    { 0x08A, "isturretactive" },
    { 0x08B, "target_alloc" },
    { 0x08C, "target_flush" },
    { 0x08D, "target_set" },
    { 0x08E, "_func_08E" },
    { 0x08F, "_func_08F" },
    { 0x090, "_func_090" },
    { 0x091, "_func_091" },
    { 0x092, "_func_092" },
    { 0x093, "_func_093" },
    { 0x094, "_func_094" },
    { 0x095, "_func_095" },
    { 0x096, "_func_096" },
    { 0x097, "_func_097" },
    { 0x098, "target_setjavelinonly" },
    { 0x099, "target_hidefromplayer" },
    { 0x09A, "target_showtoplayer" },
    { 0x09B, "target_setscaledrendermode" },
    { 0x09C, "target_drawcornersonly" },
    { 0x09D, "target_drawsquare" },
    { 0x09E, "target_drawsingle" },
    { 0x09F, "target_setminsize" },
    { 0x0A0, "setnorthyaw" }, // 0x5EE640
    { 0x0A1, "setslowmotion" }, // 0x5FE1F0
    { 0x0A2, "randomint" }, // 0x5F7010
    { 0x0A3, "randomfloat" }, // 0x5F7640
    { 0x0A4, "randomintrange" }, // 0x5F79A0
    { 0x0A5, "randomfloatrange" }, // 0x5F7DA0
    { 0x0A6, "sin" }, // 0x5F83A0
    { 0x0A7, "cos" }, // 0x5F84E0
    { 0x0A8, "tan" }, // 0x5F8510
    { 0x0A9, "asin" }, // 0x5F8AE0
    { 0x0AA, "acos" }, // 0x5F90B0
    { 0x0AB, "atan" }, // 0x5F9570
    { 0x0AC, "int" }, // 0x5F96B0
    { 0x0AD, "float" }, // 0x5F9F20
    { 0x0AE, "abs" }, // 0x5FA440
    { 0x0AF, "min" }, // 0x5FA480
    { 0x0B0, "objective_additionalcurrent" },
    { 0x0B1, "objective_ring" },
    { 0x0B2, "objective_setpointertextoverride" },
    { 0x0B3, "_func_0B3" },
    { 0x0B4, "_func_0B4" },
    { 0x0B5, "getnode" }, // 0x5A1F90
    { 0x0B6, "getnodearray" }, // 0x5A20A0
    { 0x0B7, "getallnodes" }, // 0x5A1B00
    { 0x0B8, "getnodesinradius" }, // 0x5A2390
    { 0x0B9, "getnodesinradiussorted" }, // 0x5A23A0
    { 0x0BA, "getclosestnodeinsight" }, // 0x5A1BA0
    { 0x0BB, "_func_0BB" },
    { 0x0BC, "_func_0BC" },
    { 0x0BD, "getvehicletracksegment" },
    { 0x0BE, "getvehicletracksegmentarray" },
    { 0x0BF, "getallvehicletracksegments" },
    { 0x0C0, "isarray" }, // 0x5F3D00
    { 0x0C1, "isai" }, // 0x606CA0
    { 0x0C2, "getindexforluincstring" }, // 0x5F5840
    { 0x0C3, "issentient" }, // 0x5F4020
    { 0x0C4, "_func_0C4" },
    { 0x0C5, "getdebugdvar" },
    { 0x0C6, "getdebugdvarint" },
    { 0x0C7, "getdebugdvarfloat" },
    { 0x0C8, "setsaveddvar" },
    { 0x0C9, "getfreeaicount" },
    { 0x0CA, "getaicount" },
    { 0x0CB, "getaiarray" },
    { 0x0CC, "getaispeciesarray" },
    { 0x0CD, "getspawnerarray" }, // 0x5F45D0
    { 0x0CE, "getcorpsearray" },
    { 0x0CF, "getspawnerteamarray" }, // 0x5F5250
    { 0x0D0, "getweaponclipmodel" },
    { 0x0D1, "getbrushmodelcenter" },
    { 0x0D2, "getkeybinding" },
    { 0x0D3, "max" }, // 0x5FA5E0
    { 0x0D4, "floor" }, // 0x5FA690
    { 0x0D5, "ceil" }, // 0x5FA710
    { 0x0D6, "_func_0D6" }, // 0x5FA7A0
    { 0x0D7, "exp" }, // 0x5FA7E0
    { 0x0D8, "log" }, // 0x5FA9C0
    { 0x0D9, "sqrt" }, // 0x5FAC00
    { 0x0DA, "squared" }, // 0x5FAD90
    { 0x0DB, "clamp" }, // 0x5FB0A0
    { 0x0DC, "angleclamp" }, // 0x5FB110
    { 0x0DD, "angleclamp180" }, // 0x5FB170
    { 0x0DE, "vectorfromlinetopoint" }, // 0x5FD820
    { 0x0DF, "pointonsegmentnearesttopoint" }, // 0x5FDF60
    { 0x0E0, "distance" }, // 0x5DDA90
    { 0x0E1, "distance2d" }, // 0x5DDCC0
    { 0x0E2, "distancesquared" }, // 0x5DE050
    { 0x0E3, "length" }, // 0x5DE220
    { 0x0E4, "length2d" }, // 0x5DE330
    { 0x0E5, "lengthsquared" }, // 0x5DE480
    { 0x0E6, "length2dsquared" }, // 0x5DE510
    { 0x0E7, "closer" }, // 0x5DEB70
    { 0x0E8, "vectordot" }, // 0x5DEF20
    { 0x0E9, "vectorcross" }, // 0x5DEFB0
    { 0x0EA, "axistoangles" }, // 0x5E0870
    { 0x0EB, "visionsetthermal" }, // 0x606770
    { 0x0EC, "visionsetpain" }, // 0x6068D0
    { 0x0ED, "endlobby" }, // 0x607970
    { 0x0EE, "getmapcustom" }, // 0x60C720
    { 0x0EF, "spawnsighttrace" }, // 0x610800
    { 0x0F0, "incrementcounter" }, // 0x60ABA0
    { 0x0F1, "getcountertotal" }, // 0x60AD70
    { 0x0F2, "getlevelticks" },
    { 0x0F3, "perlinnoise2d" },
    { 0x0F4, "calcrockingangles" },
    { 0x0F5, "reconevent" }, // 0x6DE490
    { 0x0F6, "reconspatialevent" }, // 0x6DE4A0
    { 0x0F7, "setsunflareposition" },
    { 0x0F8, "createthreatbiasgroup" }, // 0x29C7B0
    { 0x0F9, "_func_0F9" }, // 0x29C7E0
    { 0x0FA, "threatbiasgroupexists" }, // 0x29C810
    { 0x0FB, "_func_0FB" }, // 0x29C850
    { 0x0FC, "getthreatbias" }, // 0x29C8F0
    { 0x0FD, "setthreatbias" }, // 0x29C990
    { 0x0FE, "setthreatbiasagainstall" }, // 0x29CA40
    { 0x0FF, "setignoremegroup" }, // 0x29CAB0
    { 0x100, "isenemyteam" }, // 0x29CCC0
    { 0x101, "objective_additionalentity" },
    { 0x102, "objective_state_nomessage" },
    { 0x103, "objective_string" },
    { 0x104, "objective_string_nomessage" },
    { 0x105, "objective_additionalposition" },
    { 0x106, "objective_current_nomessage" },
    { 0x107, "vectornormalize" }, // 0x5DF480
    { 0x108, "vectortoangles" }, // 0x5DF870
    { 0x109, "vectortoyaw" }, // 0x5DFC50
    { 0x10A, "vectorlerp" }, // 0x5DFFB0
    { 0x10B, "_func_10B" }, // 0x5E0430
    { 0x10C, "anglestoup" }, // 0x5E0E70
    { 0x10D, "anglestoright" }, // 0x5E1200
    { 0x10E, "anglestoforward" }, // 0x5E1690
    { 0x10F, "anglesdelta" }, // 0x5E19C0
    { 0x110, "combineangles" }, // 0x5E1D70
    { 0x111, "transformmove" }, // 0x5E2060
    { 0x112, "rotatevector" }, // 0x5E4CF0
    { 0x113, "rotatepointaroundvector" }, // 0x5E4EB0
    { 0x114, "issubstr" }, // 0x5E7150
    { 0x115, "isendstr" }, // 0x5E73A0
    { 0x116, "getsubstr" }, // 0x5E7B10
    { 0x117, "tolower" }, // 0x5E9230
    { 0x118, "strtok" }, // 0x5E9CC0
    { 0x119, "stricmp" }, // 0x5EB410
    { 0x11A, "ambientplay" }, // 0x5DE8B0
    { 0x11B, "getuavstrengthmax" }, // 0x6071F0
    { 0x11C, "getuavstrengthlevelneutral" }, // 0x607200
    { 0x11D, "getuavstrengthlevelshowenemyfastsweep" }, // 0x607210
    { 0x11E, "getuavstrengthlevelshowenemydirectional" }, // 0x607220
    { 0x11F, "blockteamradar" }, // 0x607230
    { 0x120, "unblockteamradar" }, // 0x6074E0
    { 0x121, "isteamradarblocked" }, // 0x607710
    { 0x122, "getassignedteam" }, // 0x6089F0
    { 0x123, "setmatchdata" }, // 0x60E610
    { 0x124, "getmatchdata" }, // 0x608E00
    { 0x125, "sendmatchdata" }, // 0x609070
    { 0x126, "clearmatchdata" }, // 0x60B450
    { 0x127, "setmatchdatadef" }, // 0x60EC10
    { 0x128, "_func_128" }, // 0x60BAA0
    { 0x129, "setmatchdataid" }, // 0x60ABF0
    { 0x12A, "_func_12A" }, // 0x60E6A0
    { 0x12B, "setclientmatchdata" }, // 0x60B5E0
    { 0x12C, "getclientmatchdata" }, // 0x608D40
    { 0x12D, "setclientmatchdatadef" }, // 0x60EF40
    { 0x12E, "sendclientmatchdata" }, // 0x6055F0
    { 0x12F, "getbuildversion" }, // 0x6057E0
    { 0x130, "getbuildnumber" }, // 0x605AA0
    { 0x131, "getsystemtime" }, // 0x605AC0
    { 0x132, "getmatchrulesdata" }, // 0x60F220
    { 0x133, "isusingmatchrulesdata" }, // 0x60F4C0
    { 0x134, "kick" }, // 0x605B10
    { 0x135, "issplitscreen" }, // 0x608800
    { 0x136, "setmapcenter" }, // 0x6063B0
    { 0x137, "setgameendtime" }, // 0x606580
    { 0x138, "visionsetnaked" }, // 0x606600
    { 0x139, "visionsetnight" }, // 0x6066B0
    { 0x13A, "visionsetmissilecam" }, // 0x6066C0
    { 0x13B, "_func_13B" }, // 0x606A50
    { 0x13C, "ambientstop" }, // 0x5E0FF0
    { 0x13D, "precachemodel" }, // 0x5ECCD0
    { 0x13E, "precacheshellshock" }, // 0x5ED7B0
    { 0x13F, "precacheshader" }, // 0x5FEA60
    { 0x140, "precachestring" }, // 0x5DDD20
    { 0x141, "precachemenu" }, // 0x5DE020
    { 0x142, "precacherumble" }, // 0x5DE300
    { 0x143, "precachelocationselector" }, // 0x5ED180
    { 0x144, "_func_144" }, // 0x5FEDA0
    { 0x145, "loadfx" }, // 0x5EF250
    { 0x146, "playfx" }, // 0x5F04E0
    { 0x147, "playfxontag" }, // 0x5F23A0
    { 0x148, "stopfxontag" }, // 0x5F4450
    { 0x149, "killfxontag" }, // 0x5F6C40
    { 0x14A, "playloopedfx" }, // 0x614550
    { 0x14B, "spawnfx" }, // 0x614DB0
    { 0x14C, "triggerfx" }, // 0x6151C0
    { 0x14D, "playfxontagforclients" }, // 0x5F2B20
    { 0x14E, "setfxkillondelete" }, // 0x614CA0
    { 0x14F, "playimpactheadfatalfx" }, // 0x5F3AA0
    { 0x150, "setwinningteam" }, // 0x607170
    { 0x151, "announcement" }, // 0x6072F0
    { 0x152, "clientannouncement" }, // 0x607380
    { 0x153, "setteammode" }, // 0x6075A0
    { 0x154, "_func_154" }, // 0x607920
    { 0x155, "getteamscore" }, // 0x6079F0
    { 0x156, "setteamscore" }, // 0x607EB0
    { 0x157, "setclientnamemode" }, // 0x607FD0
    { 0x158, "updateclientnames" }, // 0x6082E0
    { 0x159, "getteamplayersalive" }, // 0x6084A0
    { 0x15A, "logprint" }, // 0x60E310
    { 0x15B, "worldentnumber" }, // 0x60E320
    { 0x15C, "obituary" }, // 0x60E400
    { 0x15D, "positionwouldtelefrag" }, // 0x60E890
    { 0x15E, "canspawn" }, // 0x60EAF0
    { 0x15F, "getstarttime" }, // 0x6106D0
    { 0x160, "precacheheadicon" }, // 0x5DDA60
    { 0x161, "precacheminimapicon" }, // 0x606050
    { 0x162, "precachempanim" }, // 0x606090
    { 0x163, "map_restart" }, // 0x6106E0
    { 0x164, "_func_164" }, // 0x610760
    { 0x165, "exitlevel" }, // 0x610F50
    { 0x166, "addtestclient" }, // 0x6111A0
    { 0x167, "addagent" }, // 0x611A70
    { 0x168, "_func_168" }, // 0x6087A0
    { 0x169, "allclientsprint" }, // 0x611B30
    { 0x16A, "clientprint" }, // 0x605EF0
    { 0x16B, "mapexists" }, // 0x605650
    { 0x16C, "isvalidgametype" }, // 0x6057F0
    { 0x16D, "_func_16D" }, // 0x608860
    { 0x16E, "setplayerteamrank" }, // 0x608870
    { 0x16F, "endparty" }, // 0x6089E0
    { 0x170, "setteamradar" }, // 0x6069B0
    { 0x171, "getteamradar" }, // 0x606C10
    { 0x172, "setteamradarstrength" }, // 0x606DE0
    { 0x173, "getteamradarstrength" }, // 0x606FE0
    { 0x174, "getuavstrengthmin" }, // 0x6071E0
    { 0x175, "physicsexplosionsphere" }, // 0x5F8C40
    { 0x176, "physicsexplosioncylinder" }, // 0x5FBAF0
    { 0x177, "physicsjolt" }, // 0x5F9980
    { 0x178, "physicsjitter" }, // 0x5FA800
    { 0x179, "_func_179" }, // 0x5FDCB0
    { 0x17A, "_func_17A" }, // 0x5FE2B0
    { 0x17B, "isexplosivedamagemod" }, // 0x5E4120
    { 0x17C, "radiusdamage" }, // 0x5E6430
    { 0x17D, "setplayerignoreradiusdamage" }, // 0x5E7E20
    { 0x17E, "glassradiusdamage" }, // 0x5E6AC0
    { 0x17F, "earthquake" }, // 0x5F1DB0
    { 0x180, "getnumparts" }, // 0x5FE550
    { 0x181, "objective_onentity" }, // 0x61A7C0
    { 0x182, "objective_onentitywithrotation" }, // 0x61A830
    { 0x183, "objective_team" }, // 0x61A970
    { 0x184, "objective_player" }, // 0x61AA30
    { 0x185, "objective_playerteam" }, // 0x61AAB0
    { 0x186, "objective_playerenemyteam" }, // 0x61AB60
    { 0x187, "objective_playermask_hidefromall" }, // 0x61AC90
    { 0x188, "objective_playermask_hidefrom" }, // 0x61ACF0
    { 0x189, "objective_playermask_showtoall" }, // 0x61AD80
    { 0x18A, "objective_playermask_showto" }, // 0x61ADE0
    { 0x18B, "iprintln" }, // 0x608B00
    { 0x18C, "iprintlnbold" }, // 0x608C10
    { 0x18D, "logstring" }, // 0x60BA20
    { 0x18E, "getent" }, // 0x61CDF0
    { 0x18F, "getentarray" }, // 0x61CF00
    { 0x190, "_func_190" }, // 0x60A440
    { 0x191, "spawnstruct" }, // 0x6F80E0
    { 0x192, "spawnhelicopter" }, // 0x5F7190
    { 0x193, "isalive" }, // 0x608C50
    { 0x194, "isspawner" }, // 0x609D40
    { 0x195, "missile_createattractorent" }, // 0x5D4380
    { 0x196, "missile_createattractororigin" }, // 0x5D4390
    { 0x197, "missile_createrepulsorent" }, // 0x5D4680
    { 0x198, "missile_createrepulsororigin" }, // 0x5D4690
    { 0x199, "missile_deleteattractor" }, // 0x5D46A0
    { 0x19A, "newhudelem" }, // 0x5BD2F0
    { 0x19B, "newclienthudelem" }, // 0x5BD280
    { 0x19C, "newteamhudelem" }, // 0x5BD400
    { 0x19D, "_func_19D" }, // 0x5BD360
    { 0x19E, "_func_19E" }, // 0x6F98F0
    { 0x19F, "isplayer" }, // 0x606B40
    { 0x1A0, "isplayernumber" }, // 0x606DB0
    { 0x1A1, "getpartname" }, // 0x5FE7E0
    { 0x1A2, "weaponfiretime" }, // 0x5FB2D0
    { 0x1A3, "weaponclipsize" }, // 0x5F0B60
    { 0x1A4, "weaponisauto" }, // 0x5F7680
    { 0x1A5, "weaponissemiauto" }, // 0x5F7BE0
    { 0x1A6, "weaponisboltaction" }, // 0x5F83E0
    { 0x1A7, "weaponinheritsperks" }, // 0x5F8B40
    { 0x1A8, "weaponburstcount" }, // 0x5F7E00
    { 0x1A9, "weapontype" }, // 0x5F9010
    { 0x1AA, "weaponclass" }, // 0x5F94C0
    { 0x1AB, "getnextarraykey" }, // 0x5F1CA0
    { 0x1AC, "sortbydistance" }, // 0x5F2450
    { 0x1AD, "tablelookup" }, // 0x5E1FB0
    { 0x1AE, "tablelookupbyrow" }, // 0x5E3D20
    { 0x1AF, "tablelookupistring" }, // 0x5E2820
    { 0x1B0, "tablelookupistringbyrow" }, // 0x5E4810
    { 0x1B1, "tablelookuprownum" }, // 0x5E2F90
    { 0x1B2, "tableexists" }, // 0x5E3880
    { 0x1B3, "getmissileowner" }, // 0x5EE6E0
    { 0x1B4, "_func_1B4" }, // 0x5EEB10
    { 0x1B5, "magicbullet" }, // 0x5E81B0
    { 0x1B6, "_func_1B6" }, // 0x5EA380
    { 0x1B7, "_func_1B7" }, // 0x5EF1D0
    { 0x1B8, "averagepoint" }, // 0x5FBCF0
    { 0x1B9, "averagenormal" }, // 0x5FBFC0
    { 0x1BA, "vehicle_getspawnerarray" }, // 0x893A00
    { 0x1BB, "playrumbleonposition" }, // 0x5EFA70
    { 0x1BC, "playrumblelooponposition" }, // 0x5EFB90
    { 0x1BD, "stopallrumbles" }, // 0x5EFDE0
    { 0x1BE, "_func_1BE" }, // 0x5F0B20
    { 0x1BF, "_func_1BF" }, // 0x5F0B30
    { 0x1C0, "_func_1C0" }, // 0x5F0C90
    { 0x1C1, "_func_1C1" }, // 0x5F0CA0
    { 0x1C2, "_func_1C2" }, // 0x5F0D30
    { 0x1C3, "_func_1C3" }, // 0x5F0D40
    { 0x1C4, "setminimap" }, // 0x5F0D60
    { 0x1C5, "setthermalbodymaterial" }, // 0x5F12B0
    { 0x1C6, "getarraykeys" }, // 0x5F1AF0
    { 0x1C7, "getfirstarraykey" }, // 0x5F1C60
    { 0x1C8, "getglass" }, // 0x5FC370
    { 0x1C9, "getglassarray" }, // 0x5FC6E0
    { 0x1CA, "getglassorigin" }, // 0x5FCB70
    { 0x1CB, "isglassdestroyed" }, // 0x5FD230
    { 0x1CC, "destroyglass" }, // 0x5FD5F0
    { 0x1CD, "deleteglass" }, // 0x5FDA30
    { 0x1CE, "objective_add" }, // 0x61AE80
    { 0x1CF, "objective_delete" }, // 0x61B060
    { 0x1D0, "objective_state" }, // 0x61B0F0
    { 0x1D1, "objective_icon" }, // 0x61B1F0
    { 0x1D2, "objective_position" }, // 0x61B3F0
    { 0x1D3, "objective_current" }, // 0x61A8A0
    { 0x1D4, "weaponinventorytype" }, // 0x5F9840
    { 0x1D5, "weaponstartammo" }, // 0x5F9DB0
    { 0x1D6, "weaponmaxammo" }, // 0x5FA050
    { 0x1D7, "weaponaltweaponname" }, // 0x5FAF60
    { 0x1D8, "isweaponcliponly" }, // 0x5FBE20
    { 0x1D9, "isweapondetonationtimed" }, // 0x5FC310
    { 0x1DA, "isweaponmanuallydetonatedbyemptythrow" }, // 0x5FC5C0
    { 0x1DB, "getvehiclenode" }, // 0x88A320
    { 0x1DC, "getvehiclenodearray" }, // 0x88A420
    { 0x1DD, "getallvehiclenodes" }, // 0x88A280
    { 0x1DE, "getnumvehicles" }, // 0x893900
    { 0x1DF, "precachevehicle" }, // 0x893D70
    { 0x1E0, "spawnvehicle" }, // 0x893E10
    { 0x1E1, "vehicle_getarray" }, // 0x893940
    { 0x1E2, "pow" }, // 0x5FADB0
    { 0x1E3, "atan2" }, // 0x5F95E0
    { 0x1E4, "_func_1E4" }, // 0x5F86D0
    { 0x1E5, "botgetmemoryevents" }, // 0x73AE70
    { 0x1E6, "botautoconnectenabled" }, // 0x73B580
    { 0x1E7, "botzonegetcount" }, // 0x73B5B0
    { 0x1E8, "botzonesetteam" }, // 0x73B9F0
    { 0x1E9, "botzonenearestcount" }, // 0x73B780
    { 0x1EA, "botmemoryflags" }, // 0x73B200
    { 0x1EB, "botflagmemoryevents" }, // 0x73AB80
    { 0x1EC, "botzonegetindoorpercent" }, // 0x73B710
    { 0x1ED, "botsentientswap" }, // 0x73B2F0
    { 0x1EE, "isbot" }, // 0x73BA60
    { 0x1EF, "isagent" }, // 0x607F80
    { 0x1F0, "getmaxagents" }, // 0x70BE90
    { 0x1F1, "botdebugdrawtrigger" }, // 0x73AB70
    { 0x1F2, "botgetclosestnavigablepoint" }, // 0x73ADC0
    { 0x1F3, "getnodesintrigger" }, // 0x5A23B0
    { 0x1F4, "nodesvisible" }, // 0x5A3C00
    { 0x1F5, "getnodesonpath" }, // 0x5A25A0
    { 0x1F6, "getzonecount" }, // 0x5A29A0
    { 0x1F7, "getzonenearest" }, // 0x5A29B0
    { 0x1F8, "getzonenodes" }, // 0x5A2B30
    { 0x1F9, "getzonepath" }, // 0x5A3300
    { 0x1FA, "getzoneorigin" }, // 0x5A3210
    { 0x1FB, "getnodezone" }, // 0x5A22D0
    { 0x1FC, "getzonenodesbydist" }, // 0x5A2E60
    { 0x1FD, "getzonenodeforindex" }, // 0x5A2AA0
    { 0x1FE, "getweaponexplosionradius" }, // 0x607440
    { 0x1FF, "_func_1FF" }, // 0x6077A0
    { 0x200, "nodeexposedtosky" }, // 0x5A36A0
    { 0x201, "findentrances" }, // 0x5A1A00
    { 0x202, "badplace_global" }, // 0x5EEDE0
    { 0x203, "getpathdist" }, // 0x60AF90
    { 0x204, "getlinkednodes" }, // 0x5A1CD0
    { 0x205, "disconnectnodepair" }, // 0x5E9F00
    { 0x206, "connectnodepair" }, // 0x5EB0A0
    { 0x207, "gettimesincelastpaused" },
    { 0x208, "devsetminimapdvarsettings" }, // 0x60AB90
    { 0x209, "loadtransient" },
    { 0x20A, "unloadtransient" },
    { 0x20B, "unloadalltransients" },
    { 0x20C, "synctransients" },
    { 0x20D, "aretransientsbusy" },
    { 0x20E, "istransientqueued" },
    { 0x20F, "istransientloaded" }, // 0x761E10
    { 0x210, "loadstartpointtransient" },
    { 0x211, "distance2dsquared" }, // 0x5DDD60
    { 0x212, "getangledelta3d" }, // 0x5ED680
    { 0x213, "activateclientexploder" }, // 0x5F04B0
    { 0x214, "trajectorycalculateinitialvelocity" }, // 0x5F20C0
    { 0x215, "trajectorycalculateminimumvelocity" }, // 0x5F27E0
    { 0x216, "trajectorycalculateexitangle" }, // 0x5F2C00
    { 0x217, "trajectoryestimatedesiredinairtime" }, // 0x5F3150
    { 0x218, "trajectorycomputedeltaheightattime" }, // 0x5F3410
    { 0x219, "trajectorycanattemptaccuratejump" }, // 0x5F3510
    { 0x21A, "_func_21A" }, // 0x5F33A0
    { 0x21B, "ispointinvolume" }, // 0x5FEAB0
    { 0x21C, "cinematicgettimeinmsec" },
    { 0x21D, "cinematicgetframe" },
    { 0x21E, "iscinematicloaded" },
    { 0x21F, "getscriptablearray" }, // 0x5FB9F0
    { 0x220, "clearfog" }, // 0x5FC620
    { 0x221, "screenshake" },
    { 0x222, "isusingssao" }, // 0x5F68A0
    { 0x223, "playerphysicstraceinfo" }, // 0x5F0F30
    { 0x224, "weaponusesheat" }, // 0x5FCD10
    { 0x225, "lootserviceonendgame" }, // 0x6095F0
    { 0x226, "luinotifyevent" }, // 0x5F83D0
    { 0x227, "lootserviceonstartgame" }, // 0x609640
    { 0x228, "tournamentreportplayerspm" }, // 0x60A590
    { 0x229, "tournamentreportwinningteam" }, // 0x60A5A0
    { 0x22A, "tournamentreportendofgame" }, // 0x60A5B0
    { 0x22B, "wakeupphysicssphere" },
    { 0x22C, "dopplerpitch" }, // 0x5E3140
    { 0x22D, "piecewiselinearlookup" }, // 0x5FCDD0
    { 0x22E, "anglestoaxis" }, // 0x5E0B80
    { 0x22F, "visionsetwater" },
    { 0x230, "_func_230" }, // 0x5FB2C0
    { 0x231, "_func_231" }, // 0x5FB470
    { 0x232, "_func_232" }, // 0x5FB4D0
    { 0x233, "invertangles" }, // 0x5E2680
    { 0x234, "rotatevectorinverted" }, // 0x5E29B0
    { 0x235, "calculatestartorientation" }, // 0x5E2B20
    { 0x236, "droptoground" }, // 0x61CB30
    { 0x237, "setdemigodmode" },
    { 0x238, "precachelaser" }, // 0x5DE4E0
    { 0x239, "_func_239" }, // 0x5FD5D0
    { 0x23A, "_func_23A" }, // 0x5FD6B0
    { 0x23B, "_func_23B" }, // 0x5FD9B0
    { 0x23C, "_func_23C" }, // 0x5FDDA0
    { 0x23D, "_func_23D" }, // 0x5FE2E0
    { 0x23E, "_func_23E" }, // 0x5FEB00
    { 0x23F, "_func_23F" }, // 0x5DD970
    { 0x240, "_func_240" }, // 0x5DDEB0
    { 0x241, "_func_241" }, // 0x5DE390
    { 0x242, "_func_242" }, // 0x5DEDD0
    { 0x243, "_func_243" }, // 0x5DF340
    { 0x244, "_func_244" }, // 0x5DFA50
    { 0x245, "_func_245" }, // 0x5E0160
    { 0x246, "_func_246" }, // 0x5E06A0
    { 0x247, "setnojiptime" }, // 0x5E0B20
    { 0x248, "_func_248" }, // 0x607C80
    { 0x249, "_func_249" }, // 0x5E1520
    { 0x24A, "_func_24A" }, // 0x5E16E0
    { 0x24B, "_func_24B" }, // 0x5E1AA0
    { 0x24C, "_func_24C" }, // 0x5E1B70
    { 0x24D, "_func_24D" }, // 0x5E1C50
    { 0x24E, "_func_24E" }, // 0x5E1D60
    { 0x24F, "_func_24F" }, // 0x60D1B0
    { 0x250, "_func_250" },
    { 0x251, "_func_251" },
    { 0x252, "_func_252" }, // 0x5E1E10
    { 0x253, "_func_253" }, // 0x5E1FA0
    { 0x254, "_func_254" }, // 0x5E2200
    { 0x255, "_func_255" }, // 0x5E2210
    { 0x256, "_func_256" }, // 0x609280
    { 0x257, "botgetteamlimit" }, // 0x73B1B0
    { 0x258, "spawnfxforclient" }, // 0x610C80
    { 0x259, "_func_259" }, // 0x73B150
    { 0x25A, "_func_25A" }, // 0x5F27D0
    { 0x25B, "_func_25B" }, // 0x5BD2E0
    { 0x25C, "_func_25C" }, // 0x5E4220
    { 0x25D, "_func_25D" }, // 0x5E43A0
    { 0x25E, "_func_25E" }, // 0x5F5AE0
    { 0x25F, "isdedicatedserver" }, // 0x609D30
    { 0x260, "getplaylistversion" }, // 0x609DD0
    { 0x261, "getplaylistid" }, // 0x609DF0
    { 0x262, "_func_262" }, // 0x60F850
    { 0x263, "_func_263" }, // 0x60F860
    { 0x264, "_func_264" }, // 0x60FD50
    { 0x265, "_func_265" }, // 0x610180
    { 0x266, "_func_266" }, // 0x60B050
    { 0x267, "_func_267" }, // 0x606A60
    { 0x268, "addbot" }, // 0x6111B0
    { 0x269, "ishairrunning" }, // 0x5E3A80
    { 0x26A, "getnearbyarrayelements" }, // 0x5E5670
    { 0x26B, "vectorclamp" }, // 0x5E6440
    { 0x26C, "isalliedsentient" }, // 0x29CC40
    { 0x26D, "istestclient" }, // 0x611410
    { 0x26E, "getrandomnodedestination" }, // 0x5A2910
    { 0x26F, "_func_26F" }, // 0x609ED0
    { 0x270, "enablesoundcontextoverride" }, // 0x28AE00
    { 0x271, "disablesoundcontextoverride" }, // 0x28AE60
    { 0x272, "_func_272" },
    { 0x273, "packedtablelookup" }, // 0x5DFD20
    { 0x274, "packedtablesectionlookup" }, // 0x5E0930
    { 0x275, "packedtablelookupwithrange" }, // 0x5E15A0
    { 0x276, "_func_276" },
    { 0x277, "stopclientexploder" }, // 0x5F0850
    { 0x278, "closestpointstwosegs" }, // 0x5FE730
    { 0x279, "isremovedentity" }, // 0x5F34B0
    { 0x27A, "tablegetrowcount" }, // 0x5E4DF0
    { 0x27B, "tablegetcolumncount" }, // 0x5E54F0
    { 0x27C, "_func_27C" }, // 0x60C660
    { 0x27D, "_func_27D" }, // 0x60C6F0
    { 0x27E, "isweaponmanuallydetonatedbydoubletap" }, // 0x5FC770
    { 0x27F, "_func_27F" },
    { 0x280, "getweaponname" }, // 0x5FE100
    { 0x281, "_func_281" }, // 0x5EB260
    { 0x282, "_func_282" }, // 0x5EBD00
    { 0x283, "randomcostume" }, // 0x5EBA70
    { 0x284, "_func_284" }, // 0x60DC50
    { 0x285, "_func_285" },
    { 0x286, "debuggetanimname" }, // 0x5DDC10
    { 0x287, "setspmatchdata" }, // 0x5ED990
    { 0x288, "getspmatchdata" }, // 0x5ECDC0
    { 0x289, "sendspmatchdata" }, // 0x5ED410
    { 0x28A, "clearspmatchdata" }, // 0x5ED610
    { 0x28B, "setspmatchdatadef" }, // 0x5EDBB0
    { 0x28C, "_func_28C" }, // 0x60DB40
    { 0x28D, "playcinematicforall" }, // 0x60DBC0
    { 0x28E, "preloadcinematicforall" }, // 0x60E090
    { 0x28F, "stopcinematicforall" }, // 0x60E0D0
    { 0x290, "_func_290" }, // 0x60E100
    { 0x291, "_func_291" }, // 0x60E1D0
    { 0x292, "_func_292" }, // 0x60E2B0
    { 0x293, "capsuletracepassed" }, // 0x60ECE0
    { 0x294, "stopfxontagforclient" }, // 0x5F5560
    { 0x295, "killfxontagforclient" }, // 0x5F7740
    { 0x296, "isvector" }, // 0x5F3A80
    { 0x297, "notifychallengecomplete" },
    { 0x298, "lootservicestarttrackingplaytime" }, // 0x6096A0
    { 0x299, "lootservicestoptrackingplaytime" }, // 0x609A30
    { 0x29A, "lootservicevalidateplaytime" }, // 0x609C20
    { 0x29B, "_func_29B" }, // 0x60D860
    { 0x29C, "getweaponandattachmentmodels" }, // 0x5E65E0
    { 0x29D, "changewhizbyautosimparams" },
    { 0x29E, "sysprint" }, // 0x5F10A0
    { 0x29F, "objective_mlgspectator" }, // 0x61AC40
    { 0x2A0, "setspcheckpointdata" }, // 0x5EDBC0
    { 0x2A1, "getspcheckpointdata" }, // 0x5EF390
    { 0x2A2, "isnumber" }, // 0x5F4070
    { 0x2A3, "isonlinegame" }, // 0x5FC750
    { 0x2A4, "issystemlink" }, // 0x5FCA80
    { 0x2A5, "getstanceandmotionstateforplayer" }, // 0x60E250
    { 0x2A6, "nodeisnotusable" }, // 0x5A3900
    { 0x2A7, "nodesetnotusable" }, // 0x5A3AC0
    { 0x2A8, "spawnlinkedfx" }, // 0x610BD0
    { 0x2A9, "spawnlinkedfxforclient" }, // 0x610E40
    { 0x2AA, "getplaylistname" }, // 0x60A5C0
    { 0x2AB, "getlocaltimestring" }, // 0x60A700
    { 0x2AC, "_func_2AC" }, // 0x60AF70
    { 0x2AD, "getchallengeid" }, // 0x60F520
    { 0x2AE, "_func_2AE" },
    { 0x2AF, "_func_2AF" },
    { 0x2B0, "_func_2B0" },
    { 0x2B1, "bombingruntracepassed" }, // 0x60F380
    { 0x2B2, "_func_2B2" }, // 0x60F570
    { 0x2B3, "_func_2B3" }, // 0x5EB600
    { 0x2B4, "getcodanywherecurrentplatform" }, // 0x60AAE0
    { 0x2B5, "getcostumefromtable" }, // 0x5EC0E0
    { 0x2B6, "_func_2B6" },
    { 0x2B7, "nodegetsplitgroup" }, // 0x5A37B0
    { 0x2B8, "recordbreadcrumbdataforplayersp" },
    { 0x2B9, "getchallengerewarditem" }, // 0x60F560
    { 0x2BA, "setentplayerxuidforemblem" }, // 0x605690
    { 0x2BB, "resetentplayerxuidforemblems" }, // 0x605730
    { 0x2BC, "_func_2BC" },
    { 0x2BD, "isshipbuild" }, // 0x5F0380
    { 0x2BE, "strinsertnumericdelimiters" }, // 0x5EBB70
    { 0x2BF, "isscriptedagent" }, // 0x60C570
    { 0x2C0, "_func_2C0" }, // 0x5ECB50
    { 0x2C1, "_func_2C1" }, // 0x5F2BF0
    { 0x2C2, "_func_2C2" }, // 0x5E93A0
    { 0x2C3, "_func_2C3" }, // 0x5E9650
    { 0x2C4, "_func_2C4" }, // 0x5E9C10
    { 0x2C5, "_func_2C5" },
    { 0x2C6, "_func_2C6" }, // 0x5E76D0
    { 0x2C7, "_func_2C7" }, // 0x5EB170
    { 0x2C8, "_func_2C8" },
    { 0x2C9, "_func_2C9" },
    { 0x2CA, "_func_2CA" }, // 0x5FEBF0
    { 0x2CB, "_func_2CB" }, // 0x5DE7E0
    { 0x2CC, "_func_2CC" },
    { 0x2CD, "_func_2CD" }, // 0x60B480
    { 0x2CE, "_func_2CE" }, // 0x61CAD0
    { 0x2CF, "_func_2CF" }, // 0x61C9E0
    { 0x2D0, "_func_2D0" }, // 0x61E140
    { 0x2D1, "_func_2D1" }, // 0x61CD40
    { 0x2D2, "isdefined" }, // 0x6099C0
    { 0x2D3, "_func_2D3" }, // 0x609AF0
    { 0x2D4, "_func_2D4" }, // 0x61DDC0
    { 0x2D5, "_func_2D5" }, // 0x61DE80
    { 0x2D6, "_func_2D6" }, // 0x61CCC0
    { 0x2D7, "_func_2D7" }, // 0x297B80
    { 0x2D8, "_func_2D8" }, // 0x298890
    { 0x2D9, "_func_2D9" }, // 0x298640
    { 0x2DA, "_func_2DA" }, // 0x2988E0
    { 0x2DB, "_func_2DB" }, // 0x298AA0
    { 0x2DC, "_func_2DC" }, // 0x299D20
    { 0x2DD, "_func_2DD" }, // 0x299B90
    { 0x2DE, "_func_2DE" }, // 0x299A00
    { 0x2DF, "_func_2DF" }, // 0x2992F0
    { 0x2E0, "_func_2E0" }, // 0x2994A0
    { 0x2E1, "_func_2E1" }, // 0x298F30
    { 0x2E2, "_func_2E2" }, // 0x297E90
    { 0x2E3, "_func_2E3" }, // 0x297FA0
    { 0x2E4, "_func_2E4" }, // 0x2988C0
    { 0x2E5, "_func_2E5" }, // 0x5F2180
    { 0x2E6, "_func_2E6" }, // 0x299870
    { 0x2E7, "_func_2E7" }, // 0x61E730
    { 0x2E8, "_func_2E8" }, // 0x61EB20
    { 0x2E9, "_func_2E9" }, // 0x61E4E0
    { 0x2EA, "_func_2EA" }, // 0x61D200
    { 0x2EB, "_func_2EB" }, // 0x5F1730
    { 0x2EC, "_func_2EC" }, // 0x5F3D30
    { 0x2ED, "_func_2ED" }, // 0x61CA50
    { 0x2EE, "_func_2EE" }, // 0x60A340
    { 0x2EF, "_func_2EF" }, // 0x5F5A50
    { 0x2F0, "_func_2F0" }, // 0x5F5A60
    { 0x2F1, "_func_2F1" }, // 0x5F5A70
    { 0x2F2, "_func_2F2" }, // 0x5F5B40
    { 0x2F3, "_func_2F3" }, // 0x5F5910
    { 0x2F4, "_func_2F4" }, // 0x5F5F40
    { 0x2F5, "_func_2F5" }, // 0x5FCDB0
    { 0x2F6, "_func_2F6" }, // 0x5F6030
    { 0x2F7, "_func_2F7" }, // 0x5F70E0
    { 0x2F8, "_func_2F8" }, // 0x5F7590
    { 0x2F9, "_func_2F9" }, // 0x5E37D0
    { 0x2FA, "_func_2FA" }, // 0x5E3A90
    { 0x2FB, "_func_2FB" }, // 0x5E3C00
    { 0x2FC, "_func_2FC" }, // 0x5E4180
    { 0x2FD, "_func_2FD" }, // 0x5E45B0
    { 0x2FE, "_func_2FE" }, // 0x5E4C40
    { 0x2FF, "_func_2FF" }, // 0x5E86B0
    { 0x300, "_func_300" }, // 0x61DFC0
    { 0x301, "_func_301" }, // 0x299900
    { 0x302, "_func_302" }, // 0x297B60
    { 0x303, "_func_303" }, // 0x5A3D40
    { 0x304, "_func_304" }, // 0x5A1CB0
    { 0x305, "_func_305" }, // 0x5A18A0
    { 0x306, "_func_306" }, // 0x5F8180
    { 0x307, "_func_307" }, // 0x60C430
    { 0x308, "_func_308" }, // 0x611030
    { 0x309, "_func_309" },
    { 0x30A, "_func_30A" },
    { 0x30B, "_func_30B" }, // 0x5E1AB0
    { 0x30C, "_func_30C" }, // 0x5F2390
    { 0x30D, "_func_30D" }, // 0x5F4200
    { 0x30E, "_func_30E" }, // 0x5F4660
    { 0x30F, "_func_30F" }, // 0x708720
    { 0x310, "_func_310" }, // 0x5F95A0
    { 0x311, "_func_311" }, // 0x5F98F0
    { 0x312, "_func_312" }, // 0x5F9EE0
    { 0x313, "_func_313" }, // 0x5FA170
    { 0x314, "_func_314" }, // 0x5FA630
    { 0x315, "_func_315" }, // 0x5FABC0
    { 0x316, "_func_316" }, // 0x5FB1C0
    { 0x317, "_func_317" }, // 0x5FB3A0
    { 0x318, "_func_318" }, // 0x5FBDD0
    { 0x319, "_func_319" }, // 0x5FC580
    { 0x31A, "_func_31A" }, // 0x5FC680
    { 0x31B, "_func_31B" },
    { 0x31C, "_func_31C" },
    { 0x31D, "_func_31D" },
    { 0x31E, "_func_31E" },
    { 0x31F, "_func_31F" },
    { 0x320, "_func_320" },
    { 0x321, "_func_321" },
    { 0x322, "_func_322" }, // 0x5A35A0
    { 0x323, "_func_323" }, // 0x5FD190
    { 0x324, "_func_324" }, // 0x5FCAA0
    { 0x325, "_func_325" }, // 0x61E1B0
    { 0x326, "_func_326" }, // 0x298D00
    { 0x327, "_func_327" }, // 0x5FA5D0
    { 0x328, "_func_328" }, // 0x5F29E0
    { 0x329, "_func_329" }, // 0x5A3B50
    { 0x32A, "_func_32A" }, // 0x299700
    { 0x32B, "_func_32B" }, // 0x29A1C0
    { 0x32C, "_func_32C" }, // 0x5FCB50
    { 0x32D, "_func_32D" },
    { 0x32E, "_func_32E" }, // 0x5F2EB0
    { 0x32F, "_func_32F" }, // 0x5FDEF0
    { 0x330, "_func_330" }, // 0x60F7D0
    { 0x331, "_func_331" }, // 0x60F800
    { 0x332, "_func_332" }, // 0x5E5810
    { 0x333, "_func_333" }, // 0x5E5A90
    { 0x334, "_func_334" }, // 0x60F870
    { 0x335, "_func_335" }, // 0x5F4B50
    { 0x336, "_func_336" }, // 0x5F3F50
    { 0x337, "_func_337" }, // 0x5E7FA0
    { 0x338, "_func_338" }, // 0x28B9E0
    { 0x339, "playsoundatpos" }, // 0x2888A0
    { 0x33A, "_func_33A" },
    { 0x33B, "_func_33B" },
    { 0x33C, "_func_33C" },
    { 0x33D, "_func_33D" },
    { 0x33E, "levelsoundfade" },
    { 0x33F, "_func_33F" },
    { 0x340, "_func_340" }, // 0x28ABF0
    { 0x341, "_func_341" }, // 0x28AC10
    { 0x342, "getsndaliasvalue" }, // 0x28AA90
    { 0x343, "setsndaliasvalue" }, // 0x28AB70
    { 0x344, "soundexists" }, // 0x28B590
    { 0x345, "_func_345" }, // 0x288990
    { 0x346, "musicplay" },
    { 0x347, "musicstop" },
    { 0x348, "soundfade" },
    { 0x349, "addsoundsubmix" }, // 0x28AC70
    { 0x34A, "clearsoundsubmix" }, // 0x28AC80
    { 0x34B, "clearallsubmixes" }, // 0x28AC90
    { 0x34C, "blendsoundsubmix" }, // 0x28AD10
    { 0x34D, "makesoundsubmixsticky" }, // 0x28AD20
    { 0x34E, "makesoundsubmixunsticky" }, // 0x28AD90
    { 0x34F, "soundsettimescalefactor" },
    { 0x350, "_func_350" },
    { 0x351, "_func_351" }, // 0x2896A0
    { 0x352, "_func_352" }, // 0x289860
    { 0x353, "_func_353" }, // 0x2899C0
    { 0x354, "_func_354" }, // 0x289AF0
    { 0x355, "_func_355" }, // 0x289BB0
    { 0x356, "_func_356" }, // 0x289ED0
    { 0x357, "_func_357" }, // 0x28A2C0
    { 0x358, "_func_358" }, // 0x28A5B0
    { 0x359, "_func_359" }, // 0x28A6E0
    { 0x35A, "_func_35A" }, // 0x28A770
    { 0x35B, "_func_35B" }, // 0x28A800
    { 0x35C, "_func_35C" }, // 0x28B980
    { 0x35D, "lookupsoundlength" }, // 0x28B910
    { 0x35E, "_func_35E" },
    { 0x35F, "_func_35F" }, // 0x28BA00
    { 0x360, "_func_360" }, // 0x287950
    { 0x361, "_func_361" }, // 0x73B250
    { 0x362, "_func_362" }, // 0x610B30
    { 0x363, "_func_363" }, // 0x60A6C0
    { 0x364, "_func_364" }, // 0x5DF060
    { 0x365, "_func_365" }, // 0x5A19F0
    { 0x366, "_func_366" }, // 0x5A2250
    { 0x367, "_func_367" }, // 0x6079D0
    { 0x368, "_func_368" }, // 0x607F50
    { 0x369, "_func_369" }, // 0x607A90
    { 0x36A, "_func_36A" }, // 0x607AA0
    { 0x36B, "_func_36B" }, // 0x607C50
    { 0x36C, "_func_36C" }, // 0x607C60
    { 0x36D, "_func_36D" }, // 0x5E8BC0
    { 0x36E, "debuglocalizestring" }, // 0x5EB710
    { 0x36F, "_func_36F" }, // 0x61B2A0
    { 0x370, "_func_370" }, // 0x61B320
    { 0x371, "_func_371" }, // 0x5FC7D0
    { 0x372, "_func_372" }, // 0x5E02A0
    { 0x373, "_func_373" }, // 0x5FCAB0
    { 0x374, "_func_374" }, // 0x5FCDC0
    { 0x375, "_func_375" }, // 0x5DEFA0
    { 0x376, "_func_376" }, // 0x609390
    { 0x377, "_func_377" }, // 0x60ECB0
    { 0x378, "_func_378" }, // 0x60ADC0
    { 0x379, "_func_379" }, // 0x6093F0
    { 0x37A, "_func_37A" }, // 0x60E730
    { 0x37B, "_func_37B" }, // 0x60EF20
    { 0x37C, "_func_37C" }, // 0x60B160
    { 0x37D, "_func_37D" }, // 0x609540
    { 0x37E, "_func_37E" }, // 0x611B10
    { 0x37F, "_func_37F" },
    { 0x380, "_func_380" }, // 0x5F68B0
    { 0x381, "_func_381" }, // 0x610880
    { 0x382, "_func_382" }, // 0x5ED440
    { 0x383, "_func_383" },
    { 0x384, "_func_384" },
    { 0x385, "_func_385" }, // 0x607610
    { 0x386, "_func_386" }, // 0x610410
    { 0x387, "_func_387" }, // 0x610500
    { 0x388, "_func_388" }, // 0x5F41B0
    { 0x389, "_func_389" }, // 0x5F4580
    { 0x38A, "_func_38A" }, // 0x5F4820
    { 0x38B, "_func_38B" }, // 0x6068A0
    { 0x38C, "_func_38C" }, // 0x5EB800
    { 0x38D, "_func_38D" }, // 0x609590
    { 0x38E, "_func_38E" }, // 0x298ED0
    { 0x38F, "_func_38F" }, // 0x608710
    { 0x390, "_func_390" }, // 0x61ECA0
    { 0x391, "_func_391" }, // 0x61D320
    { 0x392, "_func_392" }, // 0x61D8E0
    { 0x393, "_func_393" }, // 0x61D760
    { 0x394, "_func_394" }, // 0x61D5E0
    { 0x395, "_func_395" }, // 0x61D460
    { 0x396, "_func_396" }, // 0x61D280
    { 0x397, "_func_397" }, // 0x5DF6B0
    { 0x398, "_func_398" }, // 0x5DF6D0
    { 0x399, "_func_399" }, // 0x608780
    { 0x39A, "_func_39A" }, // 0x5A21E0
    { 0x39B, "_func_39B" }, // 0x298040
    { 0x39C, "_func_39C" }, // 0x2981E0
    { 0x39D, "_func_39D" }, // 0x5A3980
    { 0x39E, "_func_39E" }, // 0x60B790
    { 0x39F, "setmatchclientip" }, // 0x60BAA0
    { 0x3A0, "_func_3A0" }, // 0x60DA40
    { 0x3A1, "_func_3A1" }, // 0x5DD7C0
    { 0x3A2, "_func_3A2" }, // 0x5F7AF0
    { 0x3A3, "_func_3A3" }, // 0x60DE80
    { 0x3A4, "_func_3A4" }, // 0x60E240
    { 0x3A5, "_func_3A5" }, // 0x5E16F0
    { 0x3A6, "_func_3A6" }, // 0x5BD330
    { 0x3A7, "_func_3A7" }, // 0x5A3830
    { 0x3A8, "setnojipscore" }, // 0x5E0F90
    { 0x3A9, "_func_3A9" }, // 0x606980
    { 0x3AA, "_func_3AA" }, // 0x606B10
    { 0x3AB, "_func_3AB" }, // 0x5A35F0
    { 0x3AC, "_func_3AC" }, // 0x5FC8F0
    { 0x3AD, "_func_3AD" }, // 0x5F1680
    { 0x3AE, "_func_3AE" }, // 0x606D30
    { 0x3AF, "_func_3AF" }, // 0x610190
    { 0x3B0, "_func_3B0" }, // 0x606EA0
    { 0x3B1, "_func_3B1" }, // 0x5DF980
    { 0x3B2, "_func_3B2" }, // 0x5FAF20
    { 0x3B3, "_func_3B3" },
    { 0x3B4, "_func_3B4" },
    { 0x3B5, "_func_3B5" }, // 0x6101C0
    { 0x3B6, "_func_3B6" }, // 0x607C70
    { 0x3B7, "_func_3B7" }, // 0x607E70
    { 0x3B8, "_func_3B8" }, // 0x608980
    { 0x3B9, "_func_3B9" }, // 0x5DFCB0
    { 0x3BA, "_func_3BA" }, // 0x608840
    { 0x3BB, "_func_3BB" }, // 0x608FC0
    { 0x3BC, "_func_3BC" }, // 0x609060
    { 0x3BD, "_func_3BD" }, // 0x609200
    { 0x3BE, "_func_3BE" }, // 0x5FC2C0
    { 0x3BF, "_func_3BF" }, // 0x6064E0
    { 0x3C0, "_func_3C0" }, // 0x60B090
    { 0x3C1, "_func_3C1" }, // 0x609F20
    { 0x3C2, "_func_3C2" }, // 0x60A0F0
    { 0x3C3, "_func_3C3" }, // 0x60FE50
    { 0x3C4, "_func_3C4" }, // 0x5F04A0
    { 0x3C5, "_func_3C5" }, // 0x606D00
    { 0x3C6, "_func_3C6" }, // 0x5EE750
    { 0x3C7, "_func_3C7" },
    { 0x3C8, "_func_3C8" },
    { 0x3C9, "_func_3C9" },
    { 0x3CA, "_func_3CA" },
    { 0x3CB, "_func_3CB" },
    { 0x3CC, "_func_3CC" },
    { 0x3CD, "_func_3CD" },
    { 0x3CE, "_func_3CE" },
    { 0x3CF, "_func_3CF" },
    { 0x3D0, "_func_3D0" },
    { 0x3D1, "_func_3D1" },
    { 0x3D2, "_func_3D2" },
    { 0x3D3, "_func_3D3" },
    { 0x3D4, "_func_3D4" },
    { 0x3D5, "_func_3D5" },
    { 0x3D6, "_func_3D6" },
    { 0x3D7, "_func_3D7" },
    { 0x3D8, "_func_3D8" },
    { 0x3D9, "_func_3D9" },
    { 0x3DA, "_func_3DA" },
    { 0x3DB, "_func_3DB" },
    { 0x3DC, "_func_3DC" },
    { 0x3DD, "_func_3DD" },
    { 0x3DE, "_func_3DE" },
    { 0x3DF, "_func_3DF" },
    { 0x3E0, "_func_3E0" },
    { 0x3E1, "_func_3E1" },
    { 0x3E2, "_func_3E2" },
    { 0x3E3, "_func_3E3" },
    { 0x3E4, "_func_3E4" },
    { 0x3E5, "_func_3E5" },
    { 0x3E6, "_func_3E6" },
    { 0x3E7, "_func_3E7" },
    { 0x3E8, "_func_3E8" },
}};

} // namespace xsk::gsc::s2
