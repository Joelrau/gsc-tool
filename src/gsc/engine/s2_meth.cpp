// Copyright 2026 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "xsk/gsc/engine/s2.hpp"

namespace xsk::gsc::s2
{

// comments: handler address (RVA) in D:\Files\IDB\s2\s2_mp64_ship_dump.exe.i64 (image base 0), from the builtin registration lists
// no comment = not found in the registration lists
extern std::array<std::pair<u16, char const*>, meth_count> const meth_list
{{
    { 0x8000, "_meth_8000" }, // 0x5DDCA0
    { 0x8001, "setturretdismountorg" },
    { 0x8002, "_meth_8002" },
    { 0x8003, "playerhide" }, // 0x6118F0
    { 0x8004, "playershow" }, // 0x611980
    { 0x8005, "showtoplayer" }, // 0x611AA0
    { 0x8006, "_meth_8006" }, // 0x605BD0
    { 0x8007, "threatdetectedtoplayer" }, // 0x605E50
    { 0x8008, "_meth_8008" }, // 0x606070
    { 0x8009, "_meth_8009" }, // 0x6062A0
    { 0x800A, "_meth_800A" }, // 0x606520
    { 0x800B, "_meth_800B" }, // 0x606820
    { 0x800C, "enableplayeruse" }, // 0x60B900
    { 0x800D, "disableplayeruse" }, // 0x60C5D0
    { 0x800E, "enableammogeneration" }, // 0x60CF40
    { 0x800F, "disableammogeneration" }, // 0x60C770
    { 0x8010, "_meth_8010" }, // 0x609040
    { 0x8011, "makeportableradar" }, // 0x6091E0
    { 0x8012, "_meth_8012" }, // 0x609650
    { 0x8013, "_meth_8013" }, // 0x609830
    { 0x8014, "_meth_8014" }, // 0x6090D0
    { 0x8015, "_meth_8015" }, // 0x609260
    { 0x8016, "setteamfortrigger" }, // 0x605C30
    { 0x8017, "clientclaimtrigger" }, // 0x605FA0
    { 0x8018, "clientreleasetrigger" }, // 0x606140
    { 0x8019, "releaseclaimedtrigger" }, // 0x606340
    { 0x801A, "isusingonlinedataoffline" }, // 0x611680
    { 0x801B, "_meth_801B" }, // 0x611930
    { 0x801C, "sendleaderboards" }, // 0x608B90
    { 0x801D, "isonladder" }, // 0x5F5100
    { 0x801E, "getcorpseanim" }, // 0x6083D0
    { 0x801F, "_meth_801F" }, // 0x6085B0
    { 0x8020, "playerforcedeathanim" }, // 0x6090F0
    { 0x8021, "_meth_8021" }, // 0x609510
    { 0x8022, "attach" }, // 0x5F9930
    { 0x8023, "_meth_8023" },
    { 0x8024, "_meth_8024" },
    { 0x8025, "setlightfovrange" },
    { 0x8026, "_meth_8026" },
    { 0x8027, "_meth_8027" },
    { 0x8028, "startragdoll" }, // 0x607AB0
    { 0x8029, "startragdollfromimpact" }, // 0x608020
    { 0x802A, "_meth_802A" },
    { 0x802B, "logstring" }, // 0x60BA30
    { 0x802C, "_meth_802C" },
    { 0x802D, "_meth_802D" }, // 0x5DD950
    { 0x802E, "detach" }, // 0x5FAC20
    { 0x802F, "detachall" }, // 0x5FADF0
    { 0x8030, "getattachsize" }, // 0x5FEC70
    { 0x8031, "getattachmodelname" }, // 0x5DDB90
    { 0x8032, "getattachtagname" }, // 0x5DE0D0
    { 0x8033, "setturretcanaidetach" },
    { 0x8034, "setturretfov" },
    { 0x8035, "lerpfov" }, // 0x5F2EC0
    { 0x8036, "lerpfovscale" }, // 0x5F3710
    { 0x8037, "getvalidcoverpeekouts" },
    { 0x8038, "gethighestnodestance" }, // 0x5A17B0
    { 0x8039, "doesnodeallowstance" }, // 0x5A16F0
    { 0x803A, "_meth_803A" }, // 0x5E43B0
    { 0x803B, "_meth_803B" }, // 0x5E5110
    { 0x803C, "_meth_803C" }, // 0x5E7190
    { 0x803D, "_meth_803D" }, // 0x5E7C20
    { 0x803E, "_meth_803E" }, // 0x5E8090
    { 0x803F, "getgunangles" },
    { 0x8040, "magicgrenade" },
    { 0x8041, "_meth_8041" },
    { 0x8042, "_meth_8042" },
    { 0x8043, "_meth_8043" },
    { 0x8044, "makefakeai" },
    { 0x8045, "spawndrone" },
    { 0x8046, "setcorpseremovetimer" },
    { 0x8047, "setlookattext" },
    { 0x8048, "setspawnerteam" }, // 0x5EBFC0
    { 0x8049, "addaieventlistener" },
    { 0x804A, "removeaieventlistener" },
    { 0x804B, "getlightcolor" }, // 0x5F4220
    { 0x804C, "setlightcolor" }, // 0x5F46F0
    { 0x804D, "getlightradius" },
    { 0x804E, "setlightradius" },
    { 0x804F, "getattachignorecollision" }, // 0x5DED40
    { 0x8050, "hidepart" }, // 0x5DF090
    { 0x8051, "hidepart_allinstances" }, // 0x5DFE40
    { 0x8052, "hideallparts" }, // 0x5E0C40
    { 0x8053, "showpart" }, // 0x5E1250
    { 0x8054, "showallparts" }, // 0x5E1E20
    { 0x8055, "linkto" }, // 0x5E7D10
    { 0x8056, "linktoblendtotag" }, // 0x5E87B0
    { 0x8057, "unlink" }, // 0x5E88A0
    { 0x8058, "setnormalhealth" }, // 0x60EB70
    { 0x8059, "dodamage" }, // 0x5E4890
    { 0x805A, "kill" },
    { 0x805B, "show" }, // 0x611630
    { 0x805C, "hide" }, // 0x6116C0
    { 0x805D, "showonclient" },
    { 0x805E, "hideonclient" },
    { 0x805F, "disconnectpaths" }, // 0x5E8D10
    { 0x8060, "connectpaths" }, // 0x5E93F0
    { 0x8061, "disconnectnode" }, // 0x5E96B0
    { 0x8062, "connectnode" }, // 0x5E99E0
    { 0x8063, "_meth_8063" }, // 0x5EAC10
    { 0x8064, "startusingheroonlylighting" },
    { 0x8065, "_meth_8065" },
    { 0x8066, "_meth_8066" },
    { 0x8067, "_meth_8067" },
    { 0x8068, "_meth_8068" },
    { 0x8069, "_meth_8069" },
    { 0x806A, "_meth_806A" },
    { 0x806B, "digitaldistortsetparams" }, // 0x5EDDD0
    { 0x806C, "setmode" }, // 0x5E9100
    { 0x806D, "getmode" }, // 0x5E9770
    { 0x806E, "setturretignoregoals" },
    { 0x806F, "islinked" }, // 0x5E8B60
    { 0x8070, "enablelinkto" }, // 0x5EAFD0
    { 0x8071, "enableportalgroup" }, // 0x5F52F0
    { 0x8072, "_meth_8072" },
    { 0x8073, "_meth_8073" },
    { 0x8074, "_meth_8074" },
    { 0x8075, "playfoley" },
    { 0x8076, "getnormalhealth" }, // 0x60E9C0
    { 0x8077, "playerlinkto" }, // 0x5ECDB0
    { 0x8078, "playerlinktodelta" }, // 0x5ED1B0
    { 0x8079, "playerlinkweaponviewtodelta" }, // 0x5ED420
    { 0x807A, "playerlinktoabsolute" }, // 0x5ED820
    { 0x807B, "playerlinktoblend" }, // 0x5EFEE0
    { 0x807C, "setwaypointedgestyle_secondaryarrow" }, // 0x5BCD50
    { 0x807D, "setwaypointiconoffscreenonly" }, // 0x5BCD60
    { 0x807E, "fadeovertime" }, // 0x5BA680
    { 0x807F, "scaleovertime" }, // 0x5BA820
    { 0x8080, "moveovertime" }, // 0x5BA930
    { 0x8081, "reset" }, // 0x5BAA20
    { 0x8082, "destroy" }, // 0x5BAA80
    { 0x8083, "setpulsefx" }, // 0x5BAB70
    { 0x8084, "setplayernamestring" }, // 0x5BAAD0
    { 0x8085, "changefontscaleovertime" }, // 0x5BA750
    { 0x8086, "startignoringspotlight" },
    { 0x8087, "stopignoringspotlight" },
    { 0x8088, "dontcastshadows" }, // 0x605830
    { 0x8089, "castshadows" }, // 0x605AF0
    { 0x808A, "setstablemissile" }, // 0x5EE260
    { 0x808B, "playersetgroundreferenceent" }, // 0x60B0D0
    { 0x808C, "dontinterpolate" }, // 0x5E11A0
    { 0x808D, "dospawn" },
    { 0x808E, "stalingradspawn" },
    { 0x808F, "getorigin" }, // 0x60BA40
    { 0x8090, "getcentroid" },
    { 0x8091, "getshootatpos" },
    { 0x8092, "getdebugeye" },
    { 0x8093, "useby" }, // 0x60C390
    { 0x8094, "playerlinkedsetviewznear" }, // 0x5EE590
    { 0x8095, "playerlinkedsetusebaseangleforviewclamp" }, // 0x5EF090
    { 0x8096, "lerpviewangleclamp" }, // 0x5F1860
    { 0x8097, "setviewangleresistance" }, // 0x5F29C0
    { 0x8098, "springcamenabled" },
    { 0x8099, "springcamdisabled" },
    { 0x809A, "linktoplayerview" }, // 0x5F4310
    { 0x809B, "unlinkfromplayerview" }, // 0x5F59F0
    { 0x809C, "geteye" }, // 0x5EB4A0
    { 0x809D, "istouching" }, // 0x5ECC70
    { 0x809E, "getistouchingentities" }, // 0x5ED1D0
    { 0x809F, "playrumbleonentity" }, // 0x5EF6B0
    { 0x80A0, "playrumblelooponentity" }, // 0x5EF780
    { 0x80A1, "stoprumble" }, // 0x5F0220
    { 0x80A2, "delete" }, // 0x5E9FD0
    { 0x80A3, "setmodel" }, // 0x5F5170
    { 0x80A4, "laseron" }, // 0x5FC910
    { 0x80A5, "laseroff" }, // 0x5FD040
    { 0x80A6, "_meth_80A6" },
    { 0x80A7, "_meth_80A7" },
    { 0x80A8, "thermalvisionon" }, // 0x5FD390
    { 0x80A9, "thermalvisionoff" }, // 0x5FE6C0
    { 0x80AA, "thermalvisionfofoverlayon" }, // 0x5E46C0
    { 0x80AB, "thermalvisionfofoverlayoff" }, // 0x5E50A0
    { 0x80AC, "_meth_80AC" },
    { 0x80AD, "_meth_80AD" },
    { 0x80AE, "_meth_80AE" }, // 0x5E5B60
    { 0x80AF, "_meth_80AF" },
    { 0x80B0, "setcontents" }, // 0x5F5FC0
    { 0x80B1, "_meth_80B1" }, // 0x5F5A80
    { 0x80B2, "makeusable" }, // 0x5F6620
    { 0x80B3, "makeunusable" }, // 0x5F6B60
    { 0x80B4, "makeglobalusable" }, // 0x5E6C20
    { 0x80B5, "makeglobalunusable" }, // 0x5E7740
    { 0x80B6, "setwhizbyprobabilities" },
    { 0x80B7, "visionsetnakedforplayer_lerp" },
    { 0x80B8, "_meth_80B8" },
    { 0x80B9, "returnplayercontrol" },
    { 0x80BA, "_meth_80BA" },
    { 0x80BB, "_meth_80BB" },
    { 0x80BC, "_meth_80BC" },
    { 0x80BD, "settext" }, // 0x5BB1C0
    { 0x80BE, "clearalltextafterhudelem" }, // 0x5BB2B0
    { 0x80BF, "setshader" }, // 0x5BB2C0
    { 0x80C0, "settargetent" }, // 0x5BB490
    { 0x80C1, "cleartargetent" }, // 0x5BBAA0
    { 0x80C2, "settimer" }, // 0x5BC1A0
    { 0x80C3, "settimerup" }, // 0x5BC2B0
    { 0x80C4, "settimerstatic" }, // 0x5BC3C0
    { 0x80C5, "settenthstimer" }, // 0x5BC4F0
    { 0x80C6, "settenthstimerup" }, // 0x5BC600
    { 0x80C7, "settenthstimerstatic" }, // 0x5BC720
    { 0x80C8, "setclock" }, // 0x5BC850
    { 0x80C9, "setclockup" }, // 0x5BC890
    { 0x80CA, "setvalue" }, // 0x5BC8F0
    { 0x80CB, "setwaypoint" }, // 0x5BCBF0
    { 0x80CC, "setwaypointedgestyle_rotatingicon" }, // 0x5BCD40
    { 0x80CD, "setcursorhint" }, // 0x5F8E70
    { 0x80CE, "sethintstring" }, // 0x5FA4D0
    { 0x80CF, "setsecondaryhintstring" }, // 0x60CFD0
    { 0x80D0, "forceusehinton" }, // 0x5FA9E0
    { 0x80D1, "forceusehintoff" }, // 0x5FB3F0
    { 0x80D2, "makesoft" }, // 0x5F8480
    { 0x80D3, "makehard" }, // 0x5F8580
    { 0x80D4, "willneverchange" }, // 0x5F8A20
    { 0x80D5, "startfiring" }, // 0x5EF7A0
    { 0x80D6, "stopfiring" }, // 0x5EF8D0
    { 0x80D7, "isfiringturret" }, // 0x5EFAA0
    { 0x80D8, "_meth_80D8" }, // 0x5EFE40
    { 0x80D9, "_meth_80D9" }, // 0x5F0710
    { 0x80DA, "_meth_80DA" }, // 0x5F0FE0
    { 0x80DB, "_meth_80DB" }, // 0x5F12D0
    { 0x80DC, "startbarrelspin" }, // 0x5F1FE0
    { 0x80DD, "stopbarrelspin" }, // 0x5F2050
    { 0x80DE, "getbarrelspinrate" }, // 0x5F21A0
    { 0x80DF, "remotecontrolturret" }, // 0x5EE300
    { 0x80E0, "remotecontrolturretoff" }, // 0x5EF130
    { 0x80E1, "shootturret" }, // 0x5F39F0
    { 0x80E2, "getturretowner" }, // 0x5F3E80
    { 0x80E3, "enabledeathshield" },
    { 0x80E4, "nightvisiongogglesforceon" },
    { 0x80E5, "nightvisiongogglesforceoff" },
    { 0x80E6, "enableinvulnerability" },
    { 0x80E7, "disableinvulnerability" },
    { 0x80E8, "enablebreaching" },
    { 0x80E9, "disablebreaching" },
    { 0x80EA, "forceviewmodelanimation" },
    { 0x80EB, "disableturretdismount" }, // 0x19FCC0
    { 0x80EC, "enableturretdismount" }, // 0x1A01A0
    { 0x80ED, "_meth_80ED" },
    { 0x80EE, "_meth_80EE" },
    { 0x80EF, "_meth_80EF" },
    { 0x80F0, "giveachievement" }, // 0x170660
    { 0x80F1, "hidehud" },
    { 0x80F2, "showhud" },
    { 0x80F3, "mountvehicle" }, // 0x1999F0
    { 0x80F4, "dismountvehicle" }, // 0x19A7B0
    { 0x80F5, "enableslowaim" }, // 0x188AF0
    { 0x80F6, "disableslowaim" }, // 0x189F40
    { 0x80F7, "_meth_80F7" },
    { 0x80F8, "setwhizbyoffset" },
    { 0x80F9, "setsentryowner" }, // 0x5F4E90
    { 0x80FA, "setsentrycarrier" }, // 0x5F5920
    { 0x80FB, "setturretminimapvisible" }, // 0x5F6300
    { 0x80FC, "_meth_80FC" }, // 0x5F66C0
    { 0x80FD, "settargetentity" }, // 0x5F6A30
    { 0x80FE, "cleartargetentity" }, // 0x5F7060
    { 0x80FF, "_meth_80FF" }, // 0x5F8290
    { 0x8100, "_meth_8100" }, // 0x5F8770
    { 0x8101, "getturrettarget" }, // 0x5F9410
    { 0x8102, "_meth_8102" },
    { 0x8103, "_meth_8103" },
    { 0x8104, "_meth_8104" }, // 0x5FB1F0
    { 0x8105, "setaispread" }, // 0x5FB4B0
    { 0x8106, "setsuppressiontime" }, // 0x5FBFA0
    { 0x8107, "setflaggedanimknobrestart" },
    { 0x8108, "setflaggedanimknoblimitedrestart" },
    { 0x8109, "setflaggedanimknoball" },
    { 0x810A, "setflaggedanimknoballrestart" },
    { 0x810B, "setflaggedanim" },
    { 0x810C, "setflaggedanimlimited" },
    { 0x810D, "setflaggedanimrestart" },
    { 0x810E, "_meth_810E" },
    { 0x810F, "useanimtree" },
    { 0x8110, "stopuseanimtree" },
    { 0x8111, "setanimtime" },
    { 0x8112, "allowstand" }, // 0x1950F0
    { 0x8113, "allowcrouch" }, // 0x195800
    { 0x8114, "allowprone" }, // 0x195B10
    { 0x8115, "allowlean" }, // 0x195DE0
    { 0x8116, "_meth_8116" }, // 0x197680
    { 0x8117, "_meth_8117" },
    { 0x8118, "setocclusion" },
    { 0x8119, "_meth_8119" },
    { 0x811A, "deactivateocclusion" },
    { 0x811B, "_meth_811B" },
    { 0x811C, "_meth_811C" },
    { 0x811D, "_meth_811D" },
    { 0x811E, "_meth_811E" },
    { 0x811F, "_meth_811F" },
    { 0x8120, "_meth_8120" },
    { 0x8121, "seteq" },
    { 0x8122, "seteqbands" },
    { 0x8123, "deactivateeq" },
    { 0x8124, "seteqlerp" },
    { 0x8125, "islookingat" },
    { 0x8126, "isthrowinggrenade" }, // 0x16B870
    { 0x8127, "isfiring" }, // 0x16FE60
    { 0x8128, "ismeleeing" }, // 0x174A10
    { 0x8129, "setautopickup" },
    { 0x812A, "allowmelee" }, // 0x18ACB0
    { 0x812B, "allowfire" }, // 0x18D3E0
    { 0x812C, "_meth_812C" }, // 0x18FDE0
    { 0x812D, "enablehealthshield" },
    { 0x812E, "setconvergencetime" }, // 0x5FC480
    { 0x812F, "setconvergenceheightpercent" }, // 0x5FC9C0
    { 0x8130, "setturretteam" }, // 0x5FD290
    { 0x8131, "maketurretsolid" }, // 0x5FDB10
    { 0x8132, "maketurretoperable" }, // 0x5FDE80
    { 0x8133, "maketurretinoperable" }, // 0x5FE180
    { 0x8134, "makeentitysentient" }, // 0x29CD50
    { 0x8135, "freeentitysentient" }, // 0x29D020
    { 0x8136, "isindoor" },
    { 0x8137, "getdroptofloorposition" },
    { 0x8138, "isbadguy" },
    { 0x8139, "animscripted" },
    { 0x813A, "_meth_813A" },
    { 0x813B, "animrelative" },
    { 0x813C, "stopanimscripted" },
    { 0x813D, "clearanim" },
    { 0x813E, "setanimknob" },
    { 0x813F, "setanimknoblimited" },
    { 0x8140, "setanimknobrestart" },
    { 0x8141, "setanimknoblimitedrestart" },
    { 0x8142, "setanimknoball" },
    { 0x8143, "setanimknoballlimited" },
    { 0x8144, "setanimknoballrestart" },
    { 0x8145, "setanimknoballlimitedrestart" },
    { 0x8146, "setanim" },
    { 0x8147, "setanimlimited" },
    { 0x8148, "setanimrestart" },
    { 0x8149, "setanimlimitedrestart" },
    { 0x814A, "getanimtime" },
    { 0x814B, "getanimweight" },
    { 0x814C, "getanimassettype" },
    { 0x814D, "setflaggedanimknob" },
    { 0x814E, "setflaggedanimknoblimited" },
    { 0x814F, "setturretaccuracy" }, // 0x5FEBE0
    { 0x8150, "setrightarc" }, // 0x5DDB20
    { 0x8151, "setleftarc" }, // 0x5DE290
    { 0x8152, "settoparc" }, // 0x5DEEB0
    { 0x8153, "setbottomarc" }, // 0x5DF710
    { 0x8154, "_meth_8154" }, // 0x5DFBE0
    { 0x8155, "_meth_8155" }, // 0x5E0700
    { 0x8156, "_meth_8156" }, // 0x5E0DD0
    { 0x8157, "_meth_8157" }, // 0x5E14A0
    { 0x8158, "turretfiredisable" }, // 0x5E3760
    { 0x8159, "getfixednodesafevolume" },
    { 0x815A, "clearfixednodesafevolume" },
    { 0x815B, "isingoal" },
    { 0x815C, "setruntopos" },
    { 0x815D, "nearnode" },
    { 0x815E, "nearclaimnode" },
    { 0x815F, "nearclaimnodeandangle" },
    { 0x8160, "atdangerousnode" },
    { 0x8161, "getenemyinfo" }, // 0x1A0110
    { 0x8162, "clearenemy" },
    { 0x8163, "setentitytarget" },
    { 0x8164, "clearentitytarget" },
    { 0x8165, "setpotentialthreat" },
    { 0x8166, "clearpotentialthreat" },
    { 0x8167, "setflashbanged" },
    { 0x8168, "setengagementmindist" },
    { 0x8169, "setengagementmaxdist" },
    { 0x816A, "isknownenemyinradius" },
    { 0x816B, "isknownenemyinvolume" },
    { 0x816C, "settalktospecies" },
    { 0x816D, "invisiblenotsolid" },
    { 0x816E, "visiblesolid" },
    { 0x816F, "setdefaultaimlimits" },
    { 0x8170, "initriotshieldhealth" },
    { 0x8171, "_meth_8171" }, // 0x29C570
    { 0x8172, "getclosestenemysqdist" }, // 0x29C5C0
    { 0x8173, "setthreatbiasgroup" }, // 0x29CB40
    { 0x8174, "getthreatbiasgroup" }, // 0x29CBD0
    { 0x8175, "turretfireenable" }, // 0x5E3B30
    { 0x8176, "setturretmodechangewait" }, // 0x5E8AB0
    { 0x8177, "usetriggerrequirelookat" }, // 0x5EC020
    { 0x8178, "getstance" }, // 0x5E6D10
    { 0x8179, "setstance" }, // 0x5E7430
    { 0x817A, "_meth_817A" }, // 0x5E8C30
    { 0x817B, "_meth_817B" }, // 0x5F1CF0
    { 0x817C, "_meth_817C" }, // 0x5F22C0
    { 0x817D, "_meth_817D" }, // 0x5F2CA0
    { 0x817E, "itemweaponsetammo" }, // 0x5F3540
    { 0x817F, "getammocount" }, // 0x5F6930
    { 0x8180, "gettagorigin" }, // 0x5E6980
    { 0x8181, "gettagangles" }, // 0x5E6E20
    { 0x8182, "shellshock" }, // 0x5E8D80
    { 0x8183, "stunplayer" }, // 0x5EAE50
    { 0x8184, "stopshellshock" }, // 0x5F2A00
    { 0x8185, "fadeoutshellshock" }, // 0x5F31F0
    { 0x8186, "setdepthoffield" }, // 0x5EA0B0
    { 0x8187, "setviewmodeldepthoffield" }, // 0x5EB750
    { 0x8188, "pickupgrenade" },
    { 0x8189, "useturret" },
    { 0x818A, "stopuseturret" },
    { 0x818B, "canuseturret" },
    { 0x818C, "_meth_818C" },
    { 0x818D, "animmode" },
    { 0x818E, "orientmode" },
    { 0x818F, "getmotionangle" },
    { 0x8190, "shouldfacemotion" },
    { 0x8191, "getanglestolikelyenemypath" },
    { 0x8192, "setturretanim" },
    { 0x8193, "getturret" },
    { 0x8194, "_meth_8194" },
    { 0x8195, "animcustom" },
    { 0x8196, "isinscriptedstate" },
    { 0x8197, "canattackenemynode" },
    { 0x8198, "getnegotiationstartnode" }, // 0x709700
    { 0x8199, "getnegotiationendnode" }, // 0x709580
    { 0x819A, "getnegotiationnextnode" },
    { 0x819B, "getdoorpathnode" },
    { 0x819C, "comparenodedirtopathdir" },
    { 0x819D, "checkprone" },
    { 0x819E, "pushplayer" },
    { 0x819F, "_meth_819F" },
    { 0x81A0, "_meth_81A0" },
    { 0x81A1, "setgoalnode" },
    { 0x81A2, "setgoalpos" },
    { 0x81A3, "setgoalentity" },
    { 0x81A4, "setgoalvolume" },
    { 0x81A5, "setgoalvolumeauto" },
    { 0x81A6, "getgoalvolume" },
    { 0x81A7, "cleargoalvolume" },
    { 0x81A8, "_meth_81A8" },
    { 0x81A9, "setfixednodesafevolume" },
    { 0x81AA, "viewkick" }, // 0x5F0390
    { 0x81AB, "localtoworldcoords" }, // 0x5F1B30
    { 0x81AC, "getentitynumber" }, // 0x5EAF80
    { 0x81AD, "getentityvelocity" }, // 0x5EB2C0
    { 0x81AE, "enablegrenadetouchdamage" }, // 0x5EB9F0
    { 0x81AF, "disablegrenadetouchdamage" }, // 0x5EBCA0
    { 0x81B0, "enableaimassist" }, // 0x5F10F0
    { 0x81B1, "_meth_81B1" },
    { 0x81B2, "stoplookat" },
    { 0x81B3, "getmuzzlepos" },
    { 0x81B4, "getmuzzleangle" },
    { 0x81B5, "getmuzzlesideoffsetpos" },
    { 0x81B6, "getaimangle" },
    { 0x81B7, "canshoot" },
    { 0x81B8, "canshootenemy" },
    { 0x81B9, "cansee" },
    { 0x81BA, "seerecently" },
    { 0x81BB, "_meth_81BB" },
    { 0x81BC, "lastknowntime" }, // 0x29D0A0
    { 0x81BD, "lastknownpos" }, // 0x29D120
    { 0x81BE, "dropweapon" },
    { 0x81BF, "maymovetopoint" },
    { 0x81C0, "maymovefrompointtopoint" },
    { 0x81C1, "teleport" },
    { 0x81C2, "forceteleport" },
    { 0x81C3, "safeteleport" },
    { 0x81C4, "withinapproxpathdist" },
    { 0x81C5, "ispathdirect" },
    { 0x81C6, "allowedstances" },
    { 0x81C7, "_meth_81C7" },
    { 0x81C8, "_meth_81C8" },
    { 0x81C9, "isstanceallowed" },
    { 0x81CA, "issuppressionwaiting" },
    { 0x81CB, "issuppressed" },
    { 0x81CC, "_meth_81CC" },
    { 0x81CD, "_meth_81CD" },
    { 0x81CE, "isgrenadepossafe" },
    { 0x81CF, "_meth_81CF" },
    { 0x81D0, "checkgrenadelaunch" },
    { 0x81D1, "checkgrenadelaunchpos" },
    { 0x81D2, "throwgrenade" },
    { 0x81D3, "disableaimassist" }, // 0x5F1240
    { 0x81D4, "_meth_81D4" }, // 0x5F1610
    { 0x81D5, "radiusdamage" }, // 0x5E6930
    { 0x81D6, "detonate" }, // 0x5E7790
    { 0x81D7, "damageconetrace" }, // 0x5E8610
    { 0x81D8, "sightconetrace" }, // 0x5E8B40
    { 0x81D9, "missile_settargetent" }, // 0x5EC680
    { 0x81DA, "missile_settargetpos" }, // 0x5EC930
    { 0x81DB, "missile_cleartarget" }, // 0x5ECBD0
    { 0x81DC, "missile_setflightmodedirect" }, // 0x5ECE50
    { 0x81DD, "missile_setflightmodetop" }, // 0x5ED3A0
    { 0x81DE, "getlightintensity" }, // 0x5F3E10
    { 0x81DF, "setlightintensity" }, // 0x5F3F70
    { 0x81E0, "isragdoll" }, // 0x5F4DE0
    { 0x81E1, "setmovespeedscale" }, // 0x5E38D0
    { 0x81E2, "cameralinkto" }, // 0x5FACF0
    { 0x81E3, "cameraunlink" }, // 0x5FB270
    { 0x81E4, "startcoverarrival" },
    { 0x81E5, "starttraversearrival" },
    { 0x81E6, "checkcoverexitposwithpath" },
    { 0x81E7, "shoot" },
    { 0x81E8, "shootblank" },
    { 0x81E9, "melee" },
    { 0x81EA, "updateplayersightaccuracy" },
    { 0x81EB, "findshufflecovernode" },
    { 0x81EC, "findnearbycovernode" },
    { 0x81ED, "findcovernode" },
    { 0x81EE, "findbestcovernode" },
    { 0x81EF, "getcovernode" },
    { 0x81F0, "usecovernode" },
    { 0x81F1, "iscovervalidagainstenemy" },
    { 0x81F2, "reacquirestep" },
    { 0x81F3, "findreacquiredirectpath" },
    { 0x81F4, "trimpathtoattack" },
    { 0x81F5, "reacquiremove" },
    { 0x81F6, "findreacquireproximatepath" },
    { 0x81F7, "flagenemyunattackable" },
    { 0x81F8, "enterprone" },
    { 0x81F9, "exitprone" },
    { 0x81FA, "setproneanimnodes" },
    { 0x81FB, "updateprone" },
    { 0x81FC, "clearpitchorient" },
    { 0x81FD, "setlookatanimnodes" },
    { 0x81FE, "setlookat" },
    { 0x81FF, "setlookatentity" },
    { 0x8200, "_meth_8200" }, // 0x5FB480
    { 0x8201, "_meth_8201" }, // 0x5FBD70
    { 0x8202, "_meth_8202" }, // 0x5DE6F0
    { 0x8203, "_meth_8203" },
    { 0x8204, "_meth_8204" }, // 0x5DF260
    { 0x8205, "_meth_8205" },
    { 0x8206, "_meth_8206" }, // 0x5DFB90
    { 0x8207, "_meth_8207" }, // 0x5E0070
    { 0x8208, "_meth_8208" }, // 0x5E1CE0
    { 0x8209, "_meth_8209" }, // 0x5E0370
    { 0x820A, "_meth_820A" }, // 0x5E0D20
    { 0x820B, "_meth_820B" }, // 0x5E3BA0
    { 0x820C, "_meth_820C" }, // 0x5E4660
    { 0x820D, "getplayersetting" }, // 0x5E4E30
    { 0x820E, "getlocalplayerprofiledata" }, // 0x5E58B0
    { 0x820F, "setlocalplayerprofiledata" }, // 0x5E6F90
    { 0x8210, "_meth_8210" }, // 0x5EF610
    { 0x8211, "_meth_8211" }, // 0x5EF6D0
    { 0x8212, "setmotiontrackervisible" }, // 0x5EF810
    { 0x8213, "_meth_8213" }, // 0x5EF950
    { 0x8214, "worldpointinreticle_circle" }, // 0x5F7EB0
    { 0x8215, "worldpointinreticle_rect" }, // 0x5F9220
    { 0x8216, "getpointinbounds" }, // 0x5F9FA0
    { 0x8217, "_meth_8217" }, // 0x5FA7C0
    { 0x8218, "_meth_8218" },
    { 0x8219, "_meth_8219" },
    { 0x821A, "setweaponhudiconoverride" }, // 0x5EFCE0
    { 0x821B, "_meth_821B" }, // 0x5F1160
    { 0x821C, "_meth_821C" }, // 0x5F2210
    { 0x821D, "_meth_821D" }, // 0x5FDF10
    { 0x821E, "_meth_821E" }, // 0x5DF780
    { 0x821F, "getplayerdata" }, // 0x5E0590
    { 0x8220, "_meth_8220" }, // 0x890650
    { 0x8221, "_meth_8221" }, // 0x8906B0
    { 0x8222, "isturretready" }, // 0x8906E0
    { 0x8223, "vehicleturretcontroloff" }, // 0x8907C0
    { 0x8224, "vehicledriveto" }, // 0x890B50
    { 0x8225, "vehicle_dospawn" }, // 0x891710
    { 0x8226, "vehicle_isphysveh" }, // 0x8917F0
    { 0x8227, "vehphys_crash" }, // 0x891870
    { 0x8228, "vehphys_launch" }, // 0x891990
    { 0x8229, "vehphys_disablecrashing" }, // 0x891B20
    { 0x822A, "vehphys_enablecrashing" }, // 0x891BD0
    { 0x822B, "vehphys_setspeed" }, // 0x891C30
    { 0x822C, "vehphys_setconveyorbelt" }, // 0x891E40
    { 0x822D, "_meth_822D" },
    { 0x822E, "playerlinkedturretanglesenable" },
    { 0x822F, "playerlinkedturretanglesdisable" },
    { 0x8230, "playerlinkedvehicleanglesenable" },
    { 0x8231, "playerlinkedvehicleanglesdisable" },
    { 0x8232, "playersetstreamorigin" },
    { 0x8233, "playerclearstreamorigin" },
    { 0x8234, "nightvisionviewon" },
    { 0x8235, "nightvisionviewoff" },
    { 0x8236, "painvisionon" },
    { 0x8237, "painvisionoff" },
    { 0x8238, "getplayerintelisfound" },
    { 0x8239, "setplayerintelfound" },
    { 0x823A, "_meth_823A" },
    { 0x823B, "_meth_823B" },
    { 0x823C, "_meth_823C" },
    { 0x823D, "startcoverbehavior" },
    { 0x823E, "setplayerdata" }, // 0x5E0EE0
    { 0x823F, "getcacplayerdata" }, // 0x5E2E30
    { 0x8240, "setcacplayerdata" }, // 0x5E3DA0
    { 0x8241, "trackerupdate" }, // 0x5E7A60
    { 0x8242, "pingplayer" }, // 0x5AEC10
    { 0x8243, "buttonpressed" }, // 0x5AEC00
    { 0x8244, "sayteam" }, // 0x5B20C0
    { 0x8245, "sayall" }, // 0x5B2180
    { 0x8246, "setspawnweapon" }, // 0x5AEE40
    { 0x8247, "dropitem" }, // 0x189960
    { 0x8248, "dropscavengerbag" }, // 0x5AF660
    { 0x8249, "setjitterparams" }, // 0x892430
    { 0x824A, "sethoverparams" }, // 0x8924C0
    { 0x824B, "_meth_824B" }, // 0x892520
    { 0x824C, "_meth_824C" }, // 0x8926E0
    { 0x824D, "_meth_824D" }, // 0x892720
    { 0x824E, "_meth_824E" }, // 0x892760
    { 0x824F, "getwheelsurface" }, // 0x8927D0
    { 0x8250, "_meth_8250" }, // 0x892870
    { 0x8251, "getvehicleowner" }, // 0x892A30
    { 0x8252, "setvehiclelookattext" }, // 0x892A70
    { 0x8253, "setvehicleteam" }, // 0x892AC0
    { 0x8254, "setneargoalnotifydist" }, // 0x892C50
    { 0x8255, "setvehgoalpos" }, // 0x892C80
    { 0x8256, "setgoalyaw" }, // 0x892E10
    { 0x8257, "cleargoalyaw" }, // 0x892E60
    { 0x8258, "settargetyaw" }, // 0x892ED0
    { 0x8259, "cleartargetyaw" }, // 0x892F80
    { 0x825A, "vehicle_helisetai" }, // 0x892FD0
    { 0x825B, "setturrettargetvec" }, // 0x88F360
    { 0x825C, "setturrettargetent" }, // 0x88F430
    { 0x825D, "clearturrettarget" }, // 0x88F4E0
    { 0x825E, "vehicle_canturrettargetpoint" }, // 0x88F530
    { 0x825F, "_meth_825F" }, // 0x88F970
    { 0x8260, "setlookatent" }, // 0x88F9A0
    { 0x8261, "clearlookatent" }, // 0x88FA20
    { 0x8262, "setvehweapon" }, // 0x88FA70
    { 0x8263, "fireweapon" }, // 0x88FB20
    { 0x8264, "vehicleturretcontrolon" }, // 0x890620
    { 0x8265, "finishplayerdamage" }, // 0x5B01A0
    { 0x8266, "suicide" }, // 0x5B0C80
    { 0x8267, "closeingamemenu" }, // 0x5B0E80
    { 0x8268, "iprintln" }, // 0x5B0FE0
    { 0x8269, "iprintlnbold" }, // 0x5B1220
    { 0x826A, "_meth_826A" }, // 0x5B1540
    { 0x826B, "spawn" }, // 0x5B12C0
    { 0x826C, "_meth_826C" }, // 0x5B1550
    { 0x826D, "cloneplayer" }, // 0x5B1770
    { 0x826E, "_meth_826E" }, // 0x5B2030
    { 0x826F, "allowspectateteam" }, // 0x5B22A0
    { 0x8270, "forcespectatepov" }, // 0x5B27A0
    { 0x8271, "getguid" }, // 0x5B2D60
    { 0x8272, "physicslaunchserver" }, // 0x617680
    { 0x8273, "_meth_8273" }, // 0x6178F0
    { 0x8274, "_meth_8274" }, // 0x617AA0
    { 0x8275, "clonebrushmodeltoscriptmodel" }, // 0x618250
    { 0x8276, "scriptmodelplayanim" }, // 0x6155B0
    { 0x8277, "scriptmodelclearanim" }, // 0x615AD0
    { 0x8278, "scriptmodelplayanimdeltamotion" }, // 0x615820
    { 0x8279, "vehicle_teleport" }, // 0x88F840
    { 0x827A, "attachpath" }, // 0x8901F0
    { 0x827B, "getattachpos" }, // 0x890320
    { 0x827C, "startpath" }, // 0x890530
    { 0x827D, "setswitchnode" }, // 0x890720
    { 0x827E, "setwaitspeed" }, // 0x890770
    { 0x827F, "vehicle_finishdamage" }, // 0x890830
    { 0x8280, "vehicle_setspeed" }, // 0x890DB0
    { 0x8281, "vehicle_setspeedimmediate" }, // 0x890DD0
    { 0x8282, "vehicle_rotateyaw" }, // 0x890FB0
    { 0x8283, "vehicle_getspeed" }, // 0x891110
    { 0x8284, "_meth_8284" }, // 0x8911E0
    { 0x8285, "_meth_8285" }, // 0x8914B0
    { 0x8286, "_meth_8286" }, // 0x891580
    { 0x8287, "_meth_8287" }, // 0x8916B0
    { 0x8288, "_meth_8288" }, // 0x8917A0
    { 0x8289, "vehicle_getvelocity" }, // 0x891960
    { 0x828A, "vehicle_getbodyvelocity" }, // 0x891A90
    { 0x828B, "vehicle_getsteering" }, // 0x891AC0
    { 0x828C, "vehicle_getthrottle" }, // 0x891B80
    { 0x828D, "vehicle_turnengineoff" }, // 0x891BB0
    { 0x828E, "vehicle_turnengineon" }, // 0x891C10
    { 0x828F, "vehicle_orientto" },
    { 0x8290, "getgoalspeedmph" }, // 0x891CA0
    { 0x8291, "setacceleration" }, // 0x891CD0
    { 0x8292, "setdeceleration" }, // 0x891D70
    { 0x8293, "resumespeed" }, // 0x891DF0
    { 0x8294, "setyawspeed" }, // 0x891F00
    { 0x8295, "setyawspeedbyname" }, // 0x892170
    { 0x8296, "setmaxpitchroll" }, // 0x892300
    { 0x8297, "setairresistance" }, // 0x8923A0
    { 0x8298, "setturningability" }, // 0x892400
    { 0x8299, "getxuid" }, // 0x5B2F00
    { 0x829A, "getucdidhigh" }, // 0x5B3310
    { 0x829B, "getucdidlow" }, // 0x5B33F0
    { 0x829C, "getclanidhigh" }, // 0x5B34E0
    { 0x829D, "getclanidlow" }, // 0x5AEB90
    { 0x829E, "ishost" }, // 0x5AEC90
    { 0x829F, "getspectatingplayer" }, // 0x5AF200
    { 0x82A0, "_meth_82A0" }, // 0x5AF350
    { 0x82A1, "_meth_82A1" }, // 0x5AF7E0
    { 0x82A2, "_meth_82A2" }, // 0x5AFAB0
    { 0x82A3, "updatescores" }, // 0x5AF500
    { 0x82A4, "updatedmscores" }, // 0x5AF510
    { 0x82A5, "setrank" }, // 0x5AF590
    { 0x82A6, "_meth_82A6" }, // 0x5AFFC0
    { 0x82A7, "weaponlocknoclearance" }, // 0x17DAC0
    { 0x82A8, "visionsyncwithplayer" }, // 0x16D3A0
    { 0x82A9, "setperk" }, // 0x198630
    { 0x82AA, "hasperk" }, // 0x199CC0
    { 0x82AB, "clearperks" }, // 0x19EAE0
    { 0x82AC, "unsetperk" }, // 0x19B1D0
    { 0x82AD, "registerparty" }, // 0x5B1C90
    { 0x82AE, "getfireteammembers" }, // 0x5B1E40
    { 0x82AF, "_meth_82AF" }, // 0x19FB20
    { 0x82B0, "_meth_82B0" }, // 0x19FBE0
    { 0x82B1, "moveto" }, // 0x616030
    { 0x82B2, "movex" }, // 0x616910
    { 0x82B3, "movey" }, // 0x616920
    { 0x82B4, "movez" }, // 0x616940
    { 0x82B5, "movegravity" }, // 0x616440
    { 0x82B6, "moveslide" }, // 0x616610
    { 0x82B7, "stopmoveslide" }, // 0x616870
    { 0x82B8, "rotateto" }, // 0x616960
    { 0x82B9, "rotatepitch" }, // 0x616AF0
    { 0x82BA, "rotateyaw" }, // 0x616B00
    { 0x82BB, "rotateroll" }, // 0x616B20
    { 0x82BC, "addpitch" }, // 0x616AA0
    { 0x82BD, "addyaw" }, // 0x616AC0
    { 0x82BE, "addroll" }, // 0x616AE0
    { 0x82BF, "vibrate" }, // 0x616B40
    { 0x82C0, "rotatevelocity" }, // 0x616F10
    { 0x82C1, "solid" }, // 0x615D80
    { 0x82C2, "notsolid" }, // 0x615E40
    { 0x82C3, "setcandamage" }, // 0x617130
    { 0x82C4, "setcanradiusdamage" }, // 0x6171A0
    { 0x82C5, "physicslaunchclient" }, // 0x617230
    { 0x82C6, "_meth_82C6" }, // 0x5AFFD0
    { 0x82C7, "_meth_82C7" }, // 0x5AFFE0
    { 0x82C8, "setcarddisplayslot" }, // 0x5AFFF0
    { 0x82C9, "laststandrevive" }, // 0x5B0120
    { 0x82CA, "_meth_82CA" }, // 0x5B08D0
    { 0x82CB, "setspectatedefaults" }, // 0x5B0950
    { 0x82CC, "getthirdpersoncrosshairoffset" }, // 0x5B0BF0
    { 0x82CD, "disableweaponpickup" }, // 0x16E6F0
    { 0x82CE, "enableweaponpickup" }, // 0x170AA0
    { 0x82CF, "weaponpickupenabled" }, // 0x16F960
    { 0x82D0, "issplitscreenplayer" }, // 0x5B0DD0
    { 0x82D1, "getweaponslistoffhands" }, // 0x16A6E0
    { 0x82D2, "getweaponslistitems" }, // 0x16A7B0
    { 0x82D3, "getweaponslistexclusives" }, // 0x16A7F0
    { 0x82D4, "getweaponslist" }, // 0x16AA50
    { 0x82D5, "_meth_82D5" }, // 0x16C090
    { 0x82D6, "_meth_82D6" }, // 0x194470
    { 0x82D7, "_meth_82D7" }, // 0x196C70
    { 0x82D8, "visionsetnakedforplayer" }, // 0x179600
    { 0x82D9, "visionsetnightforplayer" }, // 0x179850
    { 0x82DA, "visionsetmissilecamforplayer" }, // 0x179AA0
    { 0x82DB, "visionsetthermalforplayer" }, // 0x179C70
    { 0x82DC, "visionsetpainforplayer" }, // 0x179E90
    { 0x82DD, "setblurforplayer" }, // 0x18C580
    { 0x82DE, "_meth_82DE" }, // 0x193CB0
    { 0x82DF, "_meth_82DF" }, // 0x194190
    { 0x82E0, "updateentitywithweapons" },
    { 0x82E1, "notifyonplayercommand" }, // 0x19FC30
    { 0x82E2, "canmantle" }, // 0x16A730
    { 0x82E3, "forcemantle" }, // 0x16ADB0
    { 0x82E4, "ismantling" }, // 0x16CB60
    { 0x82E5, "_meth_82E5" }, // 0x16D650
    { 0x82E6, "_meth_82E6" }, // 0x170BB0
    { 0x82E7, "_meth_82E7" }, // 0x1724F0
    { 0x82E8, "playerrecoilscaleoff" }, // 0x174710
    { 0x82E9, "weaponlockstart" }, // 0x175730
    { 0x82EA, "weaponlockfinalize" }, // 0x1772C0
    { 0x82EB, "weaponlockfree" }, // 0x17A380
    { 0x82EC, "weaponlocktargettooclose" }, // 0x17BE10
    { 0x82ED, "issplitscreenplayerprimary" }, // 0x5B0F40
    { 0x82EE, "markforeyeson" }, // 0x5B13D0
    { 0x82EF, "issighted" }, // 0x5B1460
    { 0x82F0, "getsightedplayers" }, // 0x5B1AF0
    { 0x82F1, "_meth_82F1" }, // 0x5B15C0
    { 0x82F2, "_meth_82F2" }, // 0x5B1650
    { 0x82F3, "getviewmodel" }, // 0x16ACA0
    { 0x82F4, "fragbuttonpressed" }, // 0x195B30
    { 0x82F5, "secondaryoffhandbuttonpressed" }, // 0x196ED0
    { 0x82F6, "getcurrentweaponclipammo" }, // 0x174EA0
    { 0x82F7, "setvelocity" }, // 0x1750D0
    { 0x82F8, "getplayerviewheight" }, // 0x17DF60
    { 0x82F9, "getnormalizedmovement" }, // 0x180860
    { 0x82FA, "setweaponammoclip" }, // 0x19FD70
    { 0x82FB, "setweaponammostock" }, // 0x169D50
    { 0x82FC, "getweaponammoclip" }, // 0x16AF80
    { 0x82FD, "getweaponammostock" }, // 0x16C460
    { 0x82FE, "anyammoforweaponmodes" }, // 0x16D7C0
    { 0x82FF, "setclientomnvar" }, // 0x1731E0
    { 0x8300, "setclientdvar" }, // 0x176D70
    { 0x8301, "setclientdvars" }, // 0x179280
    { 0x8302, "_meth_8302" },
    { 0x8303, "_meth_8303" },
    { 0x8304, "allowads" }, // 0x1847A0
    { 0x8305, "allowjump" }, // 0x186B90
    { 0x8306, "allowladder" }, // 0x197EF0
    { 0x8307, "allowmantle" }, // 0x198E10
    { 0x8308, "allowsprint" }, // 0x1995D0
    { 0x8309, "_meth_8309" }, // 0x19AB40
    { 0x830A, "_meth_830A" }, // 0x16D2D0
    { 0x830B, "resetspreadoverride" }, // 0x16E780
    { 0x830C, "setaimspreadmovementscale" }, // 0x16F610
    { 0x830D, "setactionslot" }, // 0x19F2F0
    { 0x830E, "setviewkickscale" }, // 0x17FC60
    { 0x830F, "getviewkickscale" }, // 0x1829C0
    { 0x8310, "getweaponslistall" }, // 0x16A440
    { 0x8311, "getweaponslistprimaries" }, // 0x16A640
    { 0x8312, "getnormalizedcameramovements" }, // 0x182A30
    { 0x8313, "giveweapon" }, // 0x16B1A0
    { 0x8314, "takeweapon" }, // 0x16EED0
    { 0x8315, "takeallweapons" }, // 0x170360
    { 0x8316, "getcurrentweapon" }, // 0x171B20
    { 0x8317, "getcurrentprimaryweapon" }, // 0x1732B0
    { 0x8318, "getcurrentoffhand" }, // 0x176800
    { 0x8319, "hasweapon" }, // 0x17FF20
    { 0x831A, "switchtoweapon" }, // 0x186160
    { 0x831B, "switchtoweaponimmediate" }, // 0x187530
    { 0x831C, "gethybridsightenabled" }, // 0x194860
    { 0x831D, "switchtooffhand" }, // 0x196140
    { 0x831E, "settacticalweapon" }, // 0x17B7C0
    { 0x831F, "gettacticalweapon" }, // 0x17DE10
    { 0x8320, "beginlocationselection" }, // 0x17E850
    { 0x8321, "endlocationselection" }, // 0x182DB0
    { 0x8322, "disableweapons" }, // 0x180710
    { 0x8323, "enableweapons" }, // 0x182C80
    { 0x8324, "disableoffhandweapons" }, // 0x186B00
    { 0x8325, "enableoffhandweapons" }, // 0x1881D0
    { 0x8326, "disableweaponswitch" }, // 0x1921E0
    { 0x8327, "enableweaponswitch" }, // 0x194290
    { 0x8328, "disablealternatemelee" }, // 0x1975E0
    { 0x8329, "enablealternatemelee" }, // 0x199FD0
    { 0x832A, "openpopupmenu" }, // 0x1716F0
    { 0x832B, "openpopupmenunomouse" }, // 0x172BF0
    { 0x832C, "closepopupmenu" }, // 0x174A90
    { 0x832D, "openmenu" }, // 0x1758C0
    { 0x832E, "closemenu" }, // 0x176F20
    { 0x832F, "_meth_832F" },
    { 0x8330, "freezecontrols" }, // 0x178F00
    { 0x8331, "disableusability" }, // 0x17C1F0
    { 0x8332, "enableusability" }, // 0x17E590
    { 0x8333, "setwhizbyspreads" }, // 0x17C0A0
    { 0x8334, "setwhizbyradii" }, // 0x17DC80
    { 0x8335, "givestartammo" }, // 0x199030
    { 0x8336, "givemaxammo" }, // 0x199690
    { 0x8337, "getfractionstartammo" }, // 0x19A1F0
    { 0x8338, "getfractionmaxammo" }, // 0x19D060
    { 0x8339, "isdualwielding" }, // 0x19EEC0
    { 0x833A, "isreloading" }, // 0x19F710
    { 0x833B, "isswitchingweapon" }, // 0x16ABE0
    { 0x833C, "setorigin" }, // 0x173D30
    { 0x833D, "getvelocity" }, // 0x176770
    { 0x833E, "setplayerangles" }, // 0x179700
    { 0x833F, "getplayerangles" }, // 0x17A9A0
    { 0x8340, "_meth_8340" }, // 0x17C7B0
    { 0x8341, "usebuttonpressed" }, // 0x18CEE0
    { 0x8342, "attackbuttonpressed" }, // 0x18EEF0
    { 0x8343, "adsbuttonpressed" }, // 0x1924F0
    { 0x8344, "meleebuttonpressed" }, // 0x194600
    { 0x8345, "playerads" }, // 0x199EE0
    { 0x8346, "isonground" }, // 0x19CED0
    { 0x8347, "isusingturret" }, // 0x19F570
    { 0x8348, "setviewmodel" }, // 0x169AD0
    { 0x8349, "setlethalweapon" }, // 0x177E40
    { 0x834A, "getlethalweapon" }, // 0x179F20
    { 0x834B, "_meth_834B" }, // 0x5DDDC0
    { 0x834C, "enablemousesteer" }, // 0x17FF00
    { 0x834D, "setscriptmoverkillcam" }, // 0x6080A0
    { 0x834E, "usinggamepad" }, // 0x198D80
    { 0x834F, "forcethirdpersonwhenfollowing" }, // 0x609940
    { 0x8350, "disableforcethirdpersonwhenfollowing" }, // 0x609980
    { 0x8351, "_meth_8351" }, // 0x60A760
    { 0x8352, "_meth_8352" }, // 0x60B370
    { 0x8353, "botsetflag" }, // 0x739DF0
    { 0x8354, "botsetstance" }, // 0x73A8A0
    { 0x8355, "botsetscriptmove" }, // 0x73A6A0
    { 0x8356, "botsetscriptgoal" }, // 0x73A220
    { 0x8357, "botsetscriptgoalnode" }, // 0x73A470
    { 0x8358, "botclearscriptgoal" }, // 0x7377D0
    { 0x8359, "botsetscriptenemy" }, // 0x73A130
    { 0x835A, "botclearscriptenemy" }, // 0x737720
    { 0x835B, "botsetattacker" }, // 0x739A80
    { 0x835C, "botgetscriptgoal" }, // 0x738360
    { 0x835D, "botgetscriptgoalradius" }, // 0x738500
    { 0x835E, "botgetscriptgoalyaw" }, // 0x738660
    { 0x835F, "botgetscriptgoaltype" }, // 0x7385B0
    { 0x8360, "_meth_8360" },
    { 0x8361, "botgetworldsize" }, // 0x738820
    { 0x8362, "botnodeavailable" }, // 0x739060
    { 0x8363, "botfindnoderandom" }, // 0x737880
    { 0x8364, "botmemoryevent" }, // 0x738D60
    { 0x8365, "_meth_8365" },
    { 0x8366, "botnodepick" }, // 0x739140
    { 0x8367, "bothasscriptgoal" }, // 0x738860
    { 0x8368, "botgetpersonality" }, // 0x7382B0
    { 0x8369, "_meth_8369" }, // 0x73A9B0
    { 0x836A, "_meth_836A" },
    { 0x836B, "botsetpersonality" }, // 0x73A040
    { 0x836C, "botsetdifficulty" }, // 0x739C00
    { 0x836D, "botgetdifficulty" }, // 0x737AB0
    { 0x836E, "botgetworldclosestedge" }, // 0x738710
    { 0x836F, "botlookatpoint" }, // 0x738B40
    { 0x8370, "botpredictseepoint" }, // 0x739750
    { 0x8371, "botcanseeentity" }, // 0x7374F0
    { 0x8372, "botgetnodesonpath" }, // 0x738040
    { 0x8373, "botnodepickmultiple" }, // 0x7392E0
    { 0x8374, "_meth_8374" },
    { 0x8375, "botgetfovdot" }, // 0x737C60
    { 0x8376, "botsetawareness" }, // 0x739B30
    { 0x8377, "botpursuingscriptgoal" }, // 0x7399C0
    { 0x8378, "botgetscriptgoalnode" }, // 0x738440
    { 0x8379, "botgetimperfectenemyinfo" }, // 0x737DC0
    { 0x837A, "_meth_837A" },
    { 0x837B, "botsetpathingstyle" }, // 0x739F00
    { 0x837C, "botsetdifficultysetting" }, // 0x739CF0
    { 0x837D, "botgetdifficultysetting" }, // 0x737B70
    { 0x837E, "botgetpathdist" }, // 0x738130
    { 0x837F, "botisrandomized" }, // 0x7389D0
    { 0x8380, "botpressbutton" }, // 0x739860
    { 0x8381, "botclearbutton" }, // 0x737630
    { 0x8382, "botnodescoremultiple" }, // 0x7394C0
    { 0x8383, "getnodenumber" }, // 0x16A460
    { 0x8384, "setclientowner" }, // 0x6070B0
    { 0x8385, "setotherent" }, // 0x60F2C0
    { 0x8386, "_meth_8386" }, // 0x5EB680
    { 0x8387, "setentityowner" }, // 0x610FB0
    { 0x8388, "_meth_8388" }, // 0x611260
    { 0x8389, "nodeisdisconnected" }, // 0x16A780
    { 0x838A, "getnearestnode" }, // 0x1A08F0
    { 0x838B, "makeentitynomeleetarget" }, // 0x607F60
    { 0x838C, "_meth_838C" },
    { 0x838D, "botthrowgrenade" }, // 0x1A10C0
    { 0x838E, "_meth_838E" },
    { 0x838F, "spawnagent" }, // 0x708A00
    { 0x8390, "finishagentdamage" }, // 0x707DC0
    { 0x8391, "setagentattacker" }, // 0x708740
    { 0x8392, "cloneagent" }, // 0x707840
    { 0x8393, "agentcanseesentient" }, // 0x707470
    { 0x8394, "scragentsetwaypoint" }, // 0x70B8D0
    { 0x8395, "scragentsetgoalpos" }, // 0x70AAA0
    { 0x8396, "scragentgetgoalpos" }, // 0x7092A0
    { 0x8397, "scragentsetgoalnode" }, // 0x70A9F0
    { 0x8398, "scragentsetgoalentity" }, // 0x70A930
    { 0x8399, "scragentsetgoalradius" }, // 0x70AC00
    { 0x839A, "scragentsetanimscale" }, // 0x70A7B0
    { 0x839B, "scragentsetorientmode" }, // 0x70B010
    { 0x839C, "scragentsetanimmode" }, // 0x70A5A0
    { 0x839D, "scragentsetphysicsmode" }, // 0x70B340
    { 0x839E, "scragentsetclipmode" }, // 0x70A880
    { 0x839F, "scragentsetmaxturnspeed" }, // 0x70AD40
    { 0x83A0, "scragentgetmaxturnspeed" }, // 0x709420
    { 0x83A1, "scragentbeginmelee" }, // 0x708E50
    { 0x83A2, "scragentsetscripted" }, // 0x70B430
    { 0x83A3, "scragentdotrajectory" }, // 0x7091F0
    { 0x83A4, "scragentdoanimlerp" }, // 0x709080
    { 0x83A5, "scragentsetviewheight" }, // 0x70B840
    { 0x83A6, "scragentclaimnode" }, // 0x708F30
    { 0x83A7, "scragentrelinquishclaimednode" }, // 0x70A460
    { 0x83A8, "setradarping" }, // 0x5BCE60
    { 0x83A9, "setradarhighlight" }, // 0x5BCF40
    { 0x83AA, "setsonarvision" }, // 0x5BCFB0
    { 0x83AB, "setharmonicbreach" }, // 0x5BD020
    { 0x83AC, "setmaterialscriptparam" },
    { 0x83AD, "getaimassistdeltas" }, // 0x184910
    { 0x83AE, "getaimassisttargetangles" }, // 0x185170
    { 0x83AF, "_meth_83AF" },
    { 0x83B0, "overridereflectionprobe" },
    { 0x83B1, "defaultreflectionprobe" },
    { 0x83B2, "isholdinggrenade" },
    { 0x83B3, "isswitchinggrenade" },
    { 0x83B4, "ispreparinggrenade" },
    { 0x83B5, "_meth_83B5" },
    { 0x83B6, "_meth_83B6" },
    { 0x83B7, "_meth_83B7" }, // 0x18A4F0
    { 0x83B8, "isjumping" }, // 0x16EAB0
    { 0x83B9, "ishighjumping" }, // 0x16FA60
    { 0x83BA, "vehicle_setvelocity" }, // 0x8901C0
    { 0x83BB, "vehicle_addvelocity" }, // 0x8901D0
    { 0x83BC, "_meth_83BC" },
    { 0x83BD, "getmodelfromentity" }, // 0x6082A0
    { 0x83BE, "_meth_83BE" }, // 0x5F3920
    { 0x83BF, "getweaponheatlevel" }, // 0x5EAC30
    { 0x83C0, "isweaponoverheated" }, // 0x5EAD40
    { 0x83C1, "sprintbuttonpressed" }, // 0x198300
    { 0x83C2, "vehicle_planethrottleoverride" }, // 0x8932D0
    { 0x83C3, "vehicle_planethrottlereturncontrol" }, // 0x88E7B0
    { 0x83C4, "vehicle_planecrash" }, // 0x88E820
    { 0x83C5, "copyanimtreestate" },
    { 0x83C6, "lightsetforplayer" }, // 0x17CCD0
    { 0x83C7, "lightsetoverrideenableforplayer" }, // 0x17F140
    { 0x83C8, "lightsetoverridedisableforplayer" }, // 0x181920
    { 0x83C9, "_meth_83C9" }, // 0x617360
    { 0x83CA, "iswheelslipping" }, // 0x892930
    { 0x83CB, "killnotification" }, // 0x18A350
    { 0x83CC, "setanimrate" },
    { 0x83CD, "setdoghandler" },
    { 0x83CE, "setdogcommand" },
    { 0x83CF, "setdogattackradius" },
    { 0x83D0, "isdogfollowinghandler" },
    { 0x83D1, "setdogmaxdrivespeed" },
    { 0x83D2, "isdogbeingdriven" },
    { 0x83D3, "setdogautoattackwhendriven" },
    { 0x83D4, "getdogattackbeginnode" },
    { 0x83D5, "setanimclass" }, // 0x29D960
    { 0x83D6, "enableanimstate" }, // 0x29D1D0
    { 0x83D7, "setanimstate" }, // 0x29DA40
    { 0x83D8, "getanimentry" }, // 0x29D3D0
    { 0x83D9, "getanimentryname" }, // 0x29D610
    { 0x83DA, "getanimentryalias" }, // 0x29D470
    { 0x83DB, "getanimentrycount" }, // 0x29D4D0
    { 0x83DC, "pushplayervector" },
    { 0x83DD, "issprinting" }, // 0x187260
    { 0x83DE, "playerlinkeduselinkedvelocity" }, // 0x188EE0
    { 0x83DF, "_meth_83DF" },
    { 0x83E0, "_meth_83E0" },
    { 0x83E1, "setclothtype" }, // 0x5E0690
    { 0x83E2, "_meth_83E2" },
    { 0x83E3, "_meth_83E3" },
    { 0x83E4, "jumpbuttonpressed" }, // 0x197B40
    { 0x83E5, "rotateby" }, // 0x616A00
    { 0x83E6, "getlookaheaddir" }, // 0x709360
    { 0x83E7, "getpathgoalpos" }, // 0x709CA0
    { 0x83E8, "_meth_83E8" }, // 0x5EB480
    { 0x83E9, "setcorpsefalling" }, // 0x608A90
    { 0x83EA, "setsurfacetype" }, // 0x5E07A0
    { 0x83EB, "aiphysicstrace" }, // 0x5F1390
    { 0x83EC, "aiphysicstracepassed" }, // 0x5F2870
    { 0x83ED, "_meth_83ED" }, // 0x5BB2A0
    { 0x83EE, "forcemovingplatformentity" },
    { 0x83EF, "setmovingplatformtrigger" }, // 0x5F4E40
    { 0x83F0, "visionsetstage" }, // 0x175E40
    { 0x83F1, "linkwaypointtotargetwithoffset" }, // 0x5BB790
    { 0x83F2, "getlinkedparent" }, // 0x5E8CB0
    { 0x83F3, "getmovingplatformparent" }, // 0x5EA2E0
    { 0x83F4, "setnameplatematerial" }, // 0x1859A0
    { 0x83F5, "_meth_83F5" },
    { 0x83F6, "_meth_83F6" },
    { 0x83F7, "_meth_83F7" }, // 0x5E2760
    { 0x83F8, "getbobrate" },
    { 0x83F9, "setbobrate" },
    { 0x83FA, "setscriptablepartstate" }, // 0x5E2220
    { 0x83FB, "_meth_83FB" }, // 0x5E5C00
    { 0x83FC, "_meth_83FC" }, // 0x5EB660
    { 0x83FD, "_meth_83FD" }, // 0x892B10
    { 0x83FE, "hudoutlineenable" }, // 0x5E1EE0
    { 0x83FF, "hudoutlinedisable" }, // 0x5E2480
    { 0x8400, "motionblurhqenable" }, // 0x5E30A0
    { 0x8401, "motionblurhqdisable" }, // 0x5E30F0
    { 0x8402, "screenshakeonentity" },
    { 0x8403, "setpitchorient" },
    { 0x8404, "worldpointtoscreenpos" }, // 0x5F4830
    { 0x8405, "_meth_8405" }, // 0x5F4F80
    { 0x8406, "_meth_8406" },
    { 0x8407, "_meth_8407" },
    { 0x8408, "_meth_8408" }, // 0x737940
    { 0x8409, "_meth_8409" },
    { 0x840A, "_meth_840A" },
    { 0x840B, "_meth_840B" },
    { 0x840C, "_meth_840C" },
    { 0x840D, "_meth_840D" },
    { 0x840E, "_meth_840E" }, // 0x60CA10
    { 0x840F, "_meth_840F" },
    { 0x8410, "_meth_8410" },
    { 0x8411, "_meth_8411" }, // 0x5B2240
    { 0x8412, "_meth_8412" }, // 0x5B2260
    { 0x8413, "_meth_8413" }, // 0x5B2280
    { 0x8414, "setviewmodeldepth" },
    { 0x8415, "isenemyaware" },
    { 0x8416, "hasenemybeenseen" },
    { 0x8417, "_meth_8417" }, // 0x298940
    { 0x8418, "_meth_8418" }, // 0x29A300
    { 0x8419, "_meth_8419" }, // 0x617C00
    { 0x841A, "_meth_841A" }, // 0x617CC0
    { 0x841B, "physicsgetlinvel" }, // 0x617D90
    { 0x841C, "physicsgetlinspeed" }, // 0x617E60
    { 0x841D, "physicsgetangvel" }, // 0x617F60
    { 0x841E, "physicsgetangspeed" }, // 0x618030
    { 0x841F, "disablemissileboosting" }, // 0x5FD740
    { 0x8420, "enablemissileboosting" }, // 0x5FD7A0
    { 0x8421, "canspawntestclient" }, // 0x6113C0
    { 0x8422, "spawntestclient" }, // 0x6113E0
    { 0x8423, "loadcustomizationplayerview" }, // 0x5B24A0
    { 0x8424, "setgrenadethrowscale" }, // 0x5E4730
    { 0x8425, "setgrenadecookscale" }, // 0x5E5530
    { 0x8426, "_meth_8426" }, // 0x611550
    { 0x8427, "hudoutlineenableforclient" }, // 0x5DEC40
    { 0x8428, "hudoutlinedisableforclient" }, // 0x5DF8D0
    { 0x8429, "hudoutlineenableforclients" }, // 0x5E13C0
    { 0x842A, "hudoutlinedisableforclients" }, // 0x5E1C60
    { 0x842B, "turretsetbarrelspinenabled" }, // 0x5E80F0
    { 0x842C, "hasloadedcustomizationplayerview" }, // 0x5B28A0
    { 0x842D, "_meth_842D" },
    { 0x842E, "_meth_842E" },
    { 0x842F, "_meth_842F" },
    { 0x8430, "getcorpseentity" }, // 0x608CA0
    { 0x8431, "removefrommovingplatformsystem" },
    { 0x8432, "logmatchdatalife" }, // 0x60CB40
    { 0x8433, "_meth_8433" },
    { 0x8434, "queuedialogforplayer" }, // 0x60C810
    { 0x8435, "setmlgcameradefaults" }, // 0x5B0B40
    { 0x8436, "ismlgspectator" }, // 0x5B29E0
    { 0x8437, "disableautoreload" }, // 0x171ED0
    { 0x8438, "enableautoreload" }, // 0x172EC0
    { 0x8439, "_meth_8439" },
    { 0x843A, "getlinkedchildren" }, // 0x5E9A20
    { 0x843B, "botpredictenemycampspots" }, // 0x739620
    { 0x843C, "cancelmantle" }, // 0x16BCB0
    { 0x843D, "hasfemalecustomizationmodel" }, // 0x5B30D0
    { 0x843E, "_meth_843E" }, // 0x5B2DF0
    { 0x843F, "_meth_843F" }, // 0x5E1530
    { 0x8440, "_meth_8440" }, // 0x60E7C0
    { 0x8441, "getdogavoident" },
    { 0x8442, "enabledogavoidance" },
    { 0x8443, "enablehybridsight" }, // 0x192EF0
    { 0x8444, "lastknownreason" },
    { 0x8445, "gettagindex" }, // 0x5E72F0
    { 0x8446, "challengenotification" }, // 0x18B090
    { 0x8447, "cancelaimove" }, // 0x88FA50
    { 0x8448, "vehicle_jetbikesethoverforcescale" }, // 0x88EB40
    { 0x8449, "linktosynchronizedparent" }, // 0x5E7D30
    { 0x844A, "getclientomnvar" }, // 0x175190
    { 0x844B, "_meth_844B" },
    { 0x844C, "_meth_844C" },
    { 0x844D, "getcacplayerdataforgroup" }, // 0x5E6270
    { 0x844E, "_meth_844E" }, // 0x5E3640
    { 0x844F, "_meth_844F" }, // 0x5E3750
    { 0x8450, "_meth_8450" }, // 0x5E3970
    { 0x8451, "getunnormalizedcameramovement" }, // 0x184380
    { 0x8452, "_meth_8452" }, // 0x5F9750
    { 0x8453, "_meth_8453" }, // 0x5FAC70
    { 0x8454, "_meth_8454" }, // 0x88ED60
    { 0x8455, "_meth_8455" }, // 0x88EDB0
    { 0x8456, "_meth_8456" }, // 0x88EE00
    { 0x8457, "_meth_8457" }, // 0x88EE50
    { 0x8458, "_meth_8458" },
    { 0x8459, "_meth_8459" },
    { 0x845A, "_meth_845A" }, // 0x88EAA0
    { 0x845B, "_meth_845B" }, // 0x88EB00
    { 0x845C, "_meth_845C" }, // 0x88EC50
    { 0x845D, "forcesprint" }, // 0x199E50
    { 0x845E, "_meth_845E" },
    { 0x845F, "_meth_845F" },
    { 0x8460, "_meth_8460" },
    { 0x8461, "_meth_8461" },
    { 0x8462, "getvieworigin" }, // 0x5EBBE0
    { 0x8463, "setweaponmodelvariant" }, // 0x197CA0
    { 0x8464, "_meth_8464" }, // 0x5FC080
    { 0x8465, "_meth_8465" }, // 0x5FC800
    { 0x8466, "_meth_8466" },
    { 0x8467, "autoboltmissileeffects" }, // 0x5EAB90
    { 0x8468, "_meth_8468" }, // 0x5ED620
    { 0x8469, "_meth_8469" }, // 0x5EDBD0
    { 0x846A, "_meth_846A" }, // 0x60DAF0
    { 0x846B, "_meth_846B" }, // 0x60DB70
    { 0x846C, "isoffhandweaponreadytothrow" }, // 0x16DA60
    { 0x846D, "_meth_846D" }, // 0x18A7D0
    { 0x846E, "_meth_846E" }, // 0x5E3590
    { 0x846F, "_meth_846F" },
    { 0x8470, "visionsetpostapplyforplayer" }, // 0x17A130
    { 0x8471, "_meth_8471" }, // 0x616230
    { 0x8472, "_meth_8472" }, // 0x6167E0
    { 0x8473, "_meth_8473" },
    { 0x8474, "_meth_8474" },
    { 0x8475, "_meth_8475" },
    { 0x8476, "_meth_8476" },
    { 0x8477, "_meth_8477" },
    { 0x8478, "_meth_8478" },
    { 0x8479, "_meth_8479" },
    { 0x847A, "_meth_847A" },
    { 0x847B, "_meth_847B" },
    { 0x847C, "_meth_847C" }, // 0x88EF30
    { 0x847D, "_meth_847D" }, // 0x88EF90
    { 0x847E, "_meth_847E" }, // 0x88F020
    { 0x847F, "_meth_847F" }, // 0x88F090
    { 0x8480, "_meth_8480" }, // 0x88F0E0
    { 0x8481, "getturretyawrate" }, // 0x5F2720
    { 0x8482, "getturretpitchrate" }, // 0x5F2E00
    { 0x8483, "setclienttriggervisionset" }, // 0x17A400
    { 0x8484, "overridelightingorigin" },
    { 0x8485, "defaultlightingorigin" },
    { 0x8486, "_meth_8486" },
    { 0x8487, "_meth_8487" },
    { 0x8488, "_meth_8488" },
    { 0x8489, "_meth_8489" },
    { 0x848A, "_meth_848A" }, // 0x8929D0
    { 0x848B, "_meth_848B" }, // 0x892A00
    { 0x848C, "showviewmodel" }, // 0x16BBD0
    { 0x848D, "hideviewmodel" }, // 0x16C860
    { 0x848E, "setpickupweapon" }, // 0x5F56E0
    { 0x848F, "_meth_848F" },
    { 0x8490, "_meth_8490" }, // 0x18ABD0
    { 0x8491, "despawnagent" }, // 0x707D50
    { 0x8492, "_meth_8492" }, // 0x892060
    { 0x8493, "vehicle_jetbikesetthrustscale" }, // 0x88EEC0
    { 0x8494, "agentclearscriptvars" }, // 0x707520
    { 0x8495, "scriptmodelplayanimdeltamotionfrompos" }, // 0x615960
    { 0x8496, "drawfacingentity" },
    { 0x8497, "allowdodge" }, // 0x18AA60
    { 0x8498, "setcanspawnvehicleson" }, // 0x88F250
    { 0x8499, "vehicle_setminimapvisible" }, // 0x892080
    { 0x849A, "setclutforplayer" }, // 0x185D40
    { 0x849B, "setclutoverrideenableforplayer" }, // 0x1877B0
    { 0x849C, "setclutoverridedisableforplayer" }, // 0x1896A0
    { 0x849D, "setpainvisioneq" },
    { 0x849E, "_meth_849E" }, // 0x5F3360
    { 0x849F, "setdamagecallbackon" }, // 0x60F6F0
    { 0x84A0, "finishentitydamage" }, // 0x60FE60
    { 0x84A1, "getlightshadowstate" },
    { 0x84A2, "setlightshadowstate" },
    { 0x84A3, "forceviewmodelanimationclear" },
    { 0x84A4, "designatefoftarget" }, // 0x60C310
    { 0x84A5, "sethintstringvisibleonlytoowner" }, // 0x60D7B0
    { 0x84A6, "_meth_84A6" }, // 0x60D980
    { 0x84A7, "notifyonplayercommandremove" }, // 0x1A00A0
    { 0x84A8, "canmantleex" }, // 0x16A850
    { 0x84A9, "allowboostjump" }, // 0x18A980
    { 0x84AA, "_meth_84AA" }, // 0x60C410
    { 0x84AB, "_meth_84AB" }, // 0x60C420
    { 0x84AC, "_meth_84AC" }, // 0x60C550
    { 0x84AD, "_meth_84AD" }, // 0x60C560
    { 0x84AE, "_meth_84AE" }, // 0x60C630
    { 0x84AF, "batteryfullrecharge" }, // 0x60C650
    { 0x84B0, "_meth_84B0" }, // 0x60C640
    { 0x84B1, "_meth_84B1" }, // 0x60C710
    { 0x84B2, "_meth_84B2" }, // 0x60C760
    { 0x84B3, "_meth_84B3" }, // 0x60C700
    { 0x84B4, "enablephysicaldepthoffieldscripting" }, // 0x5ECAE0
    { 0x84B5, "disablephysicaldepthoffieldscripting" }, // 0x5EDB70
    { 0x84B6, "_meth_84B6" }, // 0x5EDCF0
    { 0x84B7, "setphysicaldepthoffield" }, // 0x5EDFF0
    { 0x84B8, "setadsphysicaldepthoffield" }, // 0x5EF420
    { 0x84B9, "_meth_84B9" }, // 0x5EF6F0
    { 0x84BA, "_meth_84BA" }, // 0x891920
    { 0x84BB, "gettoparc" }, // 0x5DE560
    { 0x84BC, "getbottomarc" }, // 0x5DF200
    { 0x84BD, "forcejump" }, // 0x1993E0
    { 0x84BE, "vehicle_helicoptersetmaxangularvelocity" }, // 0x8921A0
    { 0x84BF, "vehicle_helicoptersetmaxangularacceleration" }, // 0x892290
    { 0x84C0, "setdemigod" }, // 0x5EC770
    { 0x84C1, "attachnobuilddobj" }, // 0x5F85E0
    { 0x84C2, "setviewmodelanim" }, // 0x5F3390
    { 0x84C3, "setviewmodelanimtime" }, // 0x5F33B0
    { 0x84C4, "pauseviewmodelanim" }, // 0x5F3490
    { 0x84C5, "setadditiveviewmodelanim" }, // 0x5F34A0
    { 0x84C6, "_meth_84C6" }, // 0x5E2470
    { 0x84C7, "setcostumemodels" }, // 0x5E5CF0
    { 0x84C8, "vehicle_getcurrentnode" }, // 0x890680
    { 0x84C9, "setphysicalviewmodeldepthoffield" }, // 0x5EEF60
    { 0x84CA, "scriptmodelpauseanim" }, // 0x615BD0
    { 0x84CB, "disableoffhandsecondaryweapons" }, // 0x18AE60
    { 0x84CC, "enableoffhandsecondaryweapons" }, // 0x18D910
    { 0x84CD, "_meth_84CD" }, // 0x5B3140
    { 0x84CE, "_meth_84CE" }, // 0x5B3380
    { 0x84CF, "enabledetonate" }, // 0x18C700
    { 0x84D0, "getdetonateenabled" }, // 0x18FC40
    { 0x84D1, "playergetuseent" }, // 0x60E330
    { 0x84D2, "refreshshieldmodels" }, // 0x5FB4E0
    { 0x84D3, "vehicle_diveboatissubmerged" }, // 0x88F140
    { 0x84D4, "scragentusemodelcollisionbounds" }, // 0x70BE00
    { 0x84D5, "_meth_84D5" }, // 0x70B8C0
    { 0x84D6, "getgravity" }, // 0x177C30
    { 0x84D7, "_meth_84D7" },
    { 0x84D8, "_meth_84D8" },
    { 0x84D9, "vehphys_getvelocity" }, // 0x891D00
    { 0x84DA, "vehphys_isoffground" }, // 0x891DA0
    { 0x84DB, "_meth_84DB" }, // 0x5B3270
    { 0x84DC, "_meth_84DC" }, // 0x88F190
    { 0x84DD, "_meth_84DD" },
    { 0x84DE, "isusingoffhand" }, // 0x16CCC0
    { 0x84DF, "_meth_84DF" },
    { 0x84E0, "physicsstop" }, // 0x618130
    { 0x84E1, "_meth_84E1" }, // 0x5E1B30
    { 0x84E2, "_meth_84E2" },
    { 0x84E3, "_meth_84E3" },
    { 0x84E4, "_meth_84E4" },
    { 0x84E5, "_meth_84E5" },
    { 0x84E6, "_meth_84E6" }, // 0x5E7C80
    { 0x84E7, "_meth_84E7" }, // 0x5BAA00
    { 0x84E8, "_meth_84E8" }, // 0x88F200
    { 0x84E9, "initwaterclienttrigger" }, // 0x5EF970
    { 0x84EA, "_meth_84EA" }, // 0x608E90
    { 0x84EB, "_meth_84EB" }, // 0x609450
    { 0x84EC, "_meth_84EC" }, // 0x609730
    { 0x84ED, "_meth_84ED" }, // 0x1917C0
    { 0x84EE, "_meth_84EE" }, // 0x5F9C00
    { 0x84EF, "setthreatdetection" },
    { 0x84F0, "loadcostumemodels" }, // 0x5E8960
    { 0x84F1, "_meth_84F1" }, // 0x191160
    { 0x84F2, "_meth_84F2" },
    { 0x84F3, "getactiveanimations" }, // 0x5DE160
    { 0x84F4, "_meth_84F4" }, // 0x5E6C10
    { 0x84F5, "_meth_84F5" }, // 0x5FAAB0
    { 0x84F6, "_meth_84F6" }, // 0x5F6DD0
    { 0x84F7, "_meth_84F7" }, // 0x5E3870
    { 0x84F8, "_meth_84F8" }, // 0x890AB0
    { 0x84F9, "_meth_84F9" }, // 0x890B20
    { 0x84FA, "_meth_84FA" }, // 0x5E9EF0
    { 0x84FB, "_meth_84FB" }, // 0x5EA370
    { 0x84FC, "_meth_84FC" }, // 0x5E7F10
    { 0x84FD, "_meth_84FD" }, // 0x5E8690
    { 0x84FE, "_meth_84FE" }, // 0x5E8790
    { 0x84FF, "_meth_84FF" }, // 0x5E87A0
    { 0x8500, "selfiescreenshottaken" }, // 0x5E88F0
    { 0x8501, "_meth_8501" }, // 0x5E9090
    { 0x8502, "_meth_8502" }, // 0x5E9510
    { 0x8503, "getsystemtimesp" }, // 0x5EF3A0
    { 0x8504, "_meth_8504" }, // 0x5FDCE0
    { 0x8505, "_meth_8505" }, // 0x5FE4E0
    { 0x8506, "setmlgspectator" }, // 0x5B2AE0
    { 0x8507, "gettotalmpxp" }, // 0x60E7E0
    { 0x8508, "_meth_8508" }, // 0x60EA60
    { 0x8509, "_meth_8509" }, // 0x60EA90
    { 0x850A, "hideweapontags" }, // 0x5E7890
    { 0x850B, "getweapondamagelocationmultiplier" }, // 0x5E4F90
    { 0x850C, "_meth_850C" }, // 0x611720
    { 0x850D, "enablereload" }, // 0x5EB580
    { 0x850E, "isgroundentoverwater" }, // 0x60F4E0
    { 0x850F, "setballpassallowed" }, // 0x60A650
    { 0x8510, "_meth_8510" }, // 0x611A90
    { 0x8511, "ghost" }, // 0x611840
    { 0x8512, "loadweapons" }, // 0x5B2B50
    { 0x8513, "setopaqueunlitforplayer" }, // 0x18AAC0
    { 0x8514, "setwaypointiconfadeatcenter" }, // 0x5BCD70
    { 0x8515, "setreinforcementhintstrings" }, // 0x60D7A0
    { 0x8516, "_meth_8516" }, // 0x609810
    { 0x8517, "_meth_8517" }, // 0x609820
    { 0x8518, "setshadowrendering" }, // 0x5FDA80
    { 0x8519, "_meth_8519" }, // 0x5FE9A0
    { 0x851A, "vehicle_diveboatgetthrottleforce" }, // 0x88F2C0
    { 0x851B, "vehicle_diveboatgetdragforce" }, // 0x88F310
    { 0x851C, "isdodging" }, // 0x170930
    { 0x851D, "getusableentity" }, // 0x5FC3E0
    { 0x851E, "getcurrentping" }, // 0x60AB00
    { 0x851F, "sethidetrigger" }, // 0x5BBB50
    { 0x8520, "detonatebydoubletap" }, // 0x60EC40
    { 0x8521, "_meth_8521" }, // 0x186020
    { 0x8522, "getdwid" }, // 0x5EF8B0
    { 0x8523, "setplayerinfospmatchdata" }, // 0x5ED390
    { 0x8524, "physicsisactive" }, // 0x6181C0
    { 0x8525, "hasanimtree" },
    { 0x8526, "_meth_8526" },
    { 0x8527, "isgod" }, // 0x1712A0
    { 0x8528, "setagentcostumeindex" }, // 0x708900
    { 0x8529, "_meth_8529" },
    { 0x852A, "_meth_852A" }, // 0x5B1080
    { 0x852B, "setowneroriginal" }, // 0x5E7E40
    { 0x852C, "getlinkedtagname" }, // 0x5E9330
    { 0x852D, "forcefirstpersonwhenfollowed" }, // 0x609AB0
    { 0x852E, "disableforcefirstpersonwhenfollowed" }, // 0x609BE0
    { 0x852F, "setwaypointaerialtargeting" }, // 0x5BCDE0
    { 0x8530, "worldweaponsloaded" }, // 0x5B2CB0
    { 0x8531, "enablegrenadethrowback" }, // 0x5EBA50
    { 0x8532, "usetriggertouchcheckstance" }, // 0x5EC810
    { 0x8533, "onlystreamactiveweapon" }, // 0x5B2A50
    { 0x8534, "precachekillcamiconforweapon" }, // 0x5B09D0
    { 0x8535, "selfierequestupdate" }, // 0x5E9520
    { 0x8536, "getclanwarsbonus" }, // 0x60F460
    { 0x8537, "scragentsetspecies" }, // 0x70B4C0
    { 0x8538, "scragentallowboost" }, // 0x708D70
    { 0x8539, "scragentsetnopenetrate" }, // 0x70AE80
    { 0x853A, "finishplayerdamage_impactfx" }, // 0x5AFB60
    { 0x853B, "finishagentdamage_impactfx" }, // 0x708470
    { 0x853C, "scragentsetorienttoground" }, // 0x70B160
    { 0x853D, "scragentsetallowragdoll" }, // 0x70A500
    { 0x853E, "scragentsetobstacleavoid" }, // 0x70AF60
    { 0x853F, "scragentsetlateralcodemove" }, // 0x70ACA0
    { 0x8540, "scragentsetpathteamspread" }, // 0x70B2A0
    { 0x8541, "isnotarget" }, // 0x171F60
    { 0x8542, "setmovingplatformjitter" }, // 0x616E40
    { 0x8543, "agentusescragentclipmask" }, // 0x707760
    { 0x8544, "setmeleechargevalid" }, // 0x5EA930
    { 0x8545, "ishighjumpallowed" }, // 0x18A870
    { 0x8546, "_meth_8546" }, // 0x188320
    { 0x8547, "_meth_8547" }, // 0x60F550
    { 0x8548, "agentsetfavoriteenemy" }, // 0x707600
    { 0x8549, "getpointinmodelbounds" }, // 0x5FA2A0
    { 0x854A, "setexomeleechargevalid" }, // 0x5EAC50
    { 0x854B, "_meth_854B" },
    { 0x854C, "_meth_854C" }, // 0x60F790
    { 0x854D, "_meth_854D" }, // 0x60C800
    { 0x854E, "scragentgetnodesonpath" }, // 0x709BD0
    { 0x854F, "addzmexploderbloodfx" }, // 0x5B3460
    { 0x8550, "_meth_8550" }, // 0x70B9E0
    { 0x8551, "getgroundentity" }, // 0x19E360
    { 0x8552, "isnoclip" }, // 0x172A60
    { 0x8553, "deleteonhostmigration" }, // 0x6107E0
    { 0x8554, "scragentgetphysicsmode" }, // 0x709E20
    { 0x8555, "_meth_8555" }, // 0x5AFA30
    { 0x8556, "_meth_8556" }, // 0x70B660
    { 0x8557, "_meth_8557" }, // 0x70A1E0
    { 0x8558, "allowriotshieldplant" }, // 0x615FA0
    { 0x8559, "_meth_8559" }, // 0x5EEDC0
    { 0x855A, "scragentsynchronizeanims" }, // 0x70BAD0
    { 0x855B, "settertiaryhintstring" }, // 0x60D0C0
    { 0x855C, "scragentclearpath" }, // 0x708FD0
    { 0x855D, "scragenttrimpath" }, // 0x70BC20
    { 0x855E, "getsnapshotindexforclient" }, // 0x60B310
    { 0x855F, "getsnapshotacknowledgedindexforclient" }, // 0x60B670
    { 0x8560, "hasanimstate" }, // 0x29D8A0
    { 0x8561, "_meth_8561" }, // 0x60F010
    { 0x8562, "_meth_8562" }, // 0x5F6FB0
    { 0x8563, "_meth_8563" },
    { 0x8564, "_meth_8564" }, // 0x891820
    { 0x8565, "_meth_8565" },
    { 0x8566, "_meth_8566" }, // 0x5EAD70
    { 0x8567, "_meth_8567" },
    { 0x8568, "_meth_8568" },
    { 0x8569, "_meth_8569" },
    { 0x856A, "_meth_856A" }, // 0x61D1E0
    { 0x856B, "_meth_856B" }, // 0x61D1C0
    { 0x856C, "_meth_856C" }, // 0x7087D0
    { 0x856D, "_meth_856D" },
    { 0x856E, "_meth_856E" }, // 0x5E9B70
    { 0x856F, "_meth_856F" },
    { 0x8570, "_meth_8570" },
    { 0x8571, "_meth_8571" }, // 0x617470
    { 0x8572, "_meth_8572" }, // 0x5E91B0
    { 0x8573, "_meth_8573" }, // 0x5E9460
    { 0x8574, "_meth_8574" }, // 0x5E96F0
    { 0x8575, "_meth_8575" }, // 0x5E9AC0
    { 0x8576, "_meth_8576" },
    { 0x8577, "_meth_8577" },
    { 0x8578, "_meth_8578" },
    { 0x8579, "_meth_8579" },
    { 0x857A, "_meth_857A" },
    { 0x857B, "_meth_857B" }, // 0x298BA0
    { 0x857C, "_meth_857C" }, // 0x298E10
    { 0x857D, "_meth_857D" },
    { 0x857E, "_meth_857E" },
    { 0x857F, "_meth_857F" }, // 0x709630
    { 0x8580, "_meth_8580" },
    { 0x8581, "_meth_8581" }, // 0x299230
    { 0x8582, "_meth_8582" }, // 0x299190
    { 0x8583, "_meth_8583" },
    { 0x8584, "_meth_8584" },
    { 0x8585, "_meth_8585" },
    { 0x8586, "_meth_8586" },
    { 0x8587, "_meth_8587" },
    { 0x8588, "_meth_8588" },
    { 0x8589, "_meth_8589" },
    { 0x858A, "_meth_858A" }, // 0x7077D0
    { 0x858B, "_meth_858B" }, // 0x5ECD30
    { 0x858C, "_meth_858C" }, // 0x5F34F0
    { 0x858D, "_meth_858D" }, // 0x5EC0D0
    { 0x858E, "_meth_858E" }, // 0x5EC210
    { 0x858F, "_meth_858F" }, // 0x5EC3D0
    { 0x8590, "_meth_8590" },
    { 0x8591, "_meth_8591" },
    { 0x8592, "_meth_8592" },
    { 0x8593, "_meth_8593" },
    { 0x8594, "_meth_8594" },
    { 0x8595, "_meth_8595" },
    { 0x8596, "_meth_8596" },
    { 0x8597, "_meth_8597" },
    { 0x8598, "_meth_8598" },
    { 0x8599, "_meth_8599" },
    { 0x859A, "_meth_859A" },
    { 0x859B, "_meth_859B" },
    { 0x859C, "_meth_859C" },
    { 0x859D, "_meth_859D" },
    { 0x859E, "_meth_859E" }, // 0x610B10
    { 0x859F, "_meth_859F" },
    { 0x85A0, "_meth_85A0" }, // 0x5F63A0
    { 0x85A1, "_meth_85A1" }, // 0x70B710
    { 0x85A2, "_meth_85A2" },
    { 0x85A3, "_meth_85A3" }, // 0x5DDE50
    { 0x85A4, "_meth_85A4" }, // 0x5FED30
    { 0x85A5, "_meth_85A5" }, // 0x29D330
    { 0x85A6, "_meth_85A6" }, // 0x5F8F80
    { 0x85A7, "_meth_85A7" }, // 0x610B80
    { 0x85A8, "_meth_85A8" }, // 0x709EB0
    { 0x85A9, "setdefaultdroppitch" }, // 0x5E1B80
    { 0x85AA, "restoredefaultdroppitch" }, // 0x5E2180
    { 0x85AB, "_meth_85AB" },
    { 0x85AC, "_meth_85AC" }, // 0x609E50
    { 0x85AD, "_meth_85AD" }, // 0x60A010
    { 0x85AE, "_meth_85AE" }, // 0x1970D0
    { 0x85AF, "_meth_85AF" }, // 0x611020
    { 0x85B0, "_meth_85B0" },
    { 0x85B1, "_meth_85B1" }, // 0x5F8BF0
    { 0x85B2, "_meth_85B2" }, // 0x611040
    { 0x85B3, "_meth_85B3" }, // 0x6119C0
    { 0x85B4, "_meth_85B4" }, // 0x605740
    { 0x85B5, "_meth_85B5" }, // 0x605D50
    { 0x85B6, "_meth_85B6" }, // 0x6061F0
    { 0x85B7, "_meth_85B7" }, // 0x611420
    { 0x85B8, "_meth_85B8" }, // 0x611870
    { 0x85B9, "_meth_85B9" }, // 0x5AED30
    { 0x85BA, "_meth_85BA" }, // 0x5B3550
    { 0x85BB, "_meth_85BB" }, // 0x5AF2A0
    { 0x85BC, "_meth_85BC" }, // 0x5AF480
    { 0x85BD, "_meth_85BD" }, // 0x5FDB80
    { 0x85BE, "_meth_85BE" }, // 0x5FD110
    { 0x85BF, "_meth_85BF" }, // 0x5FE920
    { 0x85C0, "_meth_85C0" }, // 0x5DDFA0
    { 0x85C1, "_meth_85C1" }, // 0x5F3500
    { 0x85C2, "_meth_85C2" }, // 0x5F3990
    { 0x85C3, "_meth_85C3" }, // 0x88FAB0
    { 0x85C4, "_meth_85C4" },
    { 0x85C5, "_meth_85C5" },
    { 0x85C6, "_meth_85C6" },
    { 0x85C7, "_meth_85C7" }, // 0x609CF0
    { 0x85C8, "_meth_85C8" }, // 0x609D90
    { 0x85C9, "_meth_85C9" }, // 0x6095A0
    { 0x85CA, "_meth_85CA" }, // 0x609EE0
    { 0x85CB, "_meth_85CB" }, // 0x609FD0
    { 0x85CC, "_meth_85CC" }, // 0x6057C0
    { 0x85CD, "_meth_85CD" }, // 0x605850
    { 0x85CE, "_meth_85CE" }, // 0x5EC3E0
    { 0x85CF, "_meth_85CF" }, // 0x5F72E0
    { 0x85D0, "_meth_85D0" }, // 0x5F7CA0
    { 0x85D1, "_meth_85D1" }, // 0x5F8240
    { 0x85D2, "_meth_85D2" }, // 0x70A280
    { 0x85D3, "_meth_85D3" }, // 0x70BD60
    { 0x85D4, "_meth_85D4" }, // 0x70A6E0
    { 0x85D5, "_meth_85D5" }, // 0x70A080
    { 0x85D6, "_meth_85D6" }, // 0x7097A0
    { 0x85D7, "_meth_85D7" }, // 0x610330
    { 0x85D8, "_meth_85D8" }, // 0x890BF0
    { 0x85D9, "_meth_85D9" }, // 0x890F40
    { 0x85DA, "_meth_85DA" }, // 0x8910B0
    { 0x85DB, "_meth_85DB" }, // 0x5E0090
    { 0x85DC, "_meth_85DC" }, // 0x610620
    { 0x85DD, "_meth_85DD" }, // 0x7094D0
    { 0x85DE, "_meth_85DE" }, // 0x70ADE0
    { 0x85DF, "_meth_85DF" }, // 0x709D80
    { 0x85E0, "_meth_85E0" }, // 0x70B200
    { 0x85E1, "_meth_85E1" }, // 0x198F00
    { 0x85E2, "_meth_85E2" }, // 0x5F47B0
    { 0x85E3, "_meth_85E3" }, // 0x5F4130
    { 0x85E4, "_meth_85E4" }, // 0x5E3040
    { 0x85E5, "_meth_85E5" }, // 0x5E3530
    { 0x85E6, "_meth_85E6" }, // 0x5E2AC0
    { 0x85E7, "_meth_85E7" }, // 0x5E2700
    { 0x85E8, "_meth_85E8" }, // 0x1A0B10
    { 0x85E9, "_meth_85E9" }, // 0x5F8A70
    { 0x85EA, "_meth_85EA" }, // 0x5B2C00
    { 0x85EB, "_meth_85EB" }, // 0x1960B0
    { 0x85EC, "_meth_85EC" }, // 0x19AF20
    { 0x85ED, "_meth_85ED" }, // 0x70A320
    { 0x85EE, "_meth_85EE" }, // 0x194C60
    { 0x85EF, "_meth_85EF" }, // 0x5FA6B0
    { 0x85F0, "_meth_85F0" }, // 0x5ECDD0
    { 0x85F1, "_meth_85F1" },
    { 0x85F2, "_meth_85F2" }, // 0x5F4A60
    { 0x85F3, "_meth_85F3" },
    { 0x85F4, "_meth_85F4" },
    { 0x85F5, "_meth_85F5" },
    { 0x85F6, "_meth_85F6" },
    { 0x85F7, "_meth_85F7" },
    { 0x85F8, "_meth_85F8" },
    { 0x85F9, "_meth_85F9" }, // 0x5EDC60
    { 0x85FA, "_meth_85FA" }, // 0x5EE1D0
    { 0x85FB, "_meth_85FB" },
    { 0x85FC, "_meth_85FC" },
    { 0x85FD, "isitemunlocked2" }, // 0x5FE3C0
    { 0x85FE, "isitemunlocked" }, // 0x5FE680
    { 0x85FF, "_meth_85FF" }, // 0x5EEBD0
    { 0x8600, "_meth_8600" },
    { 0x8601, "_meth_8601" }, // 0x5EECF0
    { 0x8602, "_meth_8602" }, // 0x5FBDB0
    { 0x8603, "_meth_8603" },
    { 0x8604, "_meth_8604" },
    { 0x8605, "_meth_8605" },
    { 0x8606, "_meth_8606" }, // 0x5EEEE0
    { 0x8607, "_meth_8607" }, // 0x5EF310
    { 0x8608, "_meth_8608" }, // 0x5EF630
    { 0x8609, "_meth_8609" }, // 0x5EF830
    { 0x860A, "_meth_860A" }, // 0x5EFB10
    { 0x860B, "_meth_860B" }, // 0x5F0300
    { 0x860C, "_meth_860C" }, // 0x5F07D0
    { 0x860D, "_meth_860D" }, // 0x5F0CB0
    { 0x860E, "playsoundtoteam" }, // 0x287E30
    { 0x860F, "playsoundtoplayer" }, // 0x287F30
    { 0x8610, "_meth_8610" },
    { 0x8611, "setsoundblend" },
    { 0x8612, "stoploopsound" }, // 0x289200
    { 0x8613, "stopsound" }, // 0x289300
    { 0x8614, "stopsounds" }, // 0x289400
    { 0x8615, "playlocalsound" }, // 0x288AB0
    { 0x8616, "_meth_8616" }, // 0x289100
    { 0x8617, "playsound" }, // 0x288F80
    { 0x8618, "_meth_8618" },
    { 0x8619, "_meth_8619" },
    { 0x861A, "scalepitch" }, // 0x2894D0
    { 0x861B, "scalevolume" }, // 0x2895A0
    { 0x861C, "playsoundasmaster" }, // 0x2880E0
    { 0x861D, "playloopsound" }, // 0x2883F0
    { 0x861E, "_meth_861E" }, // 0x2884E0
    { 0x861F, "playsoundonmovingent" }, // 0x288000
    { 0x8620, "_meth_8620" }, // 0x288E30
    { 0x8621, "_meth_8621" }, // 0x28B470
    { 0x8622, "setclienttriggeraudiozone" }, // 0x28B0C0
    { 0x8623, "_meth_8623" }, // 0x28B210
    { 0x8624, "_meth_8624" }, // 0x28B300
    { 0x8625, "scragentdoanimrelative" }, // 0x709130
    { 0x8626, "clientaddsoundsubmix" }, // 0x28AF80
    { 0x8627, "clientclearsoundsubmix" }, // 0x28AFA0
    { 0x8628, "clientclearallsubmixes" }, // 0x28AFC0
    { 0x8629, "clientblendsoundsubmix" }, // 0x28AFE0
    { 0x862A, "clientmakesoundsubmixsticky" }, // 0x28B000
    { 0x862B, "_meth_862B" }, // 0x28B020
    { 0x862C, "_meth_862C" }, // 0x28B040
    { 0x862D, "_meth_862D" }, // 0x28B060
    { 0x862E, "enablecustomweaponcontext" }, // 0x28AEA0
    { 0x862F, "disablecustomweaponcontext" }, // 0x28AF10
    { 0x8630, "_meth_8630" }, // 0x28B5E0
    { 0x8631, "setreverb" }, // 0x28B5C0
    { 0x8632, "deactivatereverb" }, // 0x28B5D0
    { 0x8633, "playdynamicambience" }, // 0x28B730
    { 0x8634, "stopdynamicambience" }, // 0x28B880
    { 0x8635, "_meth_8635" },
    { 0x8636, "_meth_8636" },
    { 0x8637, "_meth_8637" },
    { 0x8638, "_meth_8638" },
    { 0x8639, "_meth_8639" },
    { 0x863A, "_meth_863A" },
    { 0x863B, "_meth_863B" },
    { 0x863C, "iswaitingonsound" }, // 0x289670
    { 0x863D, "_meth_863D" }, // 0x28BA90
    { 0x863E, "_meth_863E" }, // 0x288200
    { 0x863F, "_meth_863F" }, // 0x288630
    { 0x8640, "_meth_8640" }, // 0x288700
    { 0x8641, "_meth_8641" }, // 0x288C00
    { 0x8642, "_meth_8642" }, // 0x288D00
    { 0x8643, "_meth_8643" },
    { 0x8644, "_meth_8644" },
    { 0x8645, "_meth_8645" },
    { 0x8646, "_meth_8646" },
    { 0x8647, "_meth_8647" },
    { 0x8648, "_meth_8648" }, // 0x184BE0
    { 0x8649, "_meth_8649" }, // 0x189C40
    { 0x864A, "_meth_864A" }, // 0x18FBC0
    { 0x864B, "_meth_864B" }, // 0x5EB8B0
    { 0x864C, "_meth_864C" }, // 0x5E87D0
    { 0x864D, "_meth_864D" }, // 0x5EB3B0
    { 0x864E, "_meth_864E" }, // 0x5BC9E0
    { 0x864F, "_meth_864F" }, // 0x88A2F0
    { 0x8650, "_meth_8650" }, // 0x88A4F0
    { 0x8651, "_meth_8651" }, // 0x5F5B50
    { 0x8652, "_meth_8652" },
    { 0x8653, "_meth_8653" }, // 0x7076B0
    { 0x8654, "_meth_8654" }, // 0x16F040
    { 0x8655, "_meth_8655" }, // 0x170410
    { 0x8656, "_meth_8656" }, // 0x60B6D0
    { 0x8657, "_meth_8657" },
    { 0x8658, "_meth_8658" },
    { 0x8659, "_meth_8659" }, // 0x891140
    { 0x865A, "_meth_865A" }, // 0x8913D0
    { 0x865B, "_meth_865B" }, // 0x891440
    { 0x865C, "_meth_865C" }, // 0x891510
    { 0x865D, "_meth_865D" }, // 0x891630
    { 0x865E, "_meth_865E" }, // 0x737D10
    { 0x865F, "_meth_865F" },
    { 0x8660, "_meth_8660" }, // 0x5EC330
    { 0x8661, "_meth_8661" }, // 0x16EDD0
    { 0x8662, "_meth_8662" },
    { 0x8663, "_meth_8663" },
    { 0x8664, "_meth_8664" },
    { 0x8665, "_meth_8665" }, // 0x6060C0
    { 0x8666, "_meth_8666" },
    { 0x8667, "_meth_8667" }, // 0x5F5F50
    { 0x8668, "_meth_8668" }, // 0x5F6BD0
    { 0x8669, "_meth_8669" }, // 0x5F7930
    { 0x866A, "_meth_866A" }, // 0x5F89B0
    { 0x866B, "_meth_866B" }, // 0x5E3650
    { 0x866C, "_meth_866C" }, // 0x5FA240
    { 0x866D, "_meth_866D" }, // 0x5FD530
    { 0x866E, "_meth_866E" }, // 0x60AA30
    { 0x866F, "_meth_866F" }, // 0x5EBDA0
    { 0x8670, "_meth_8670" }, // 0x5EC8C0
    { 0x8671, "_meth_8671" },
    { 0x8672, "_meth_8672" }, // 0x5F4090
    { 0x8673, "_meth_8673" }, // 0x606410
    { 0x8674, "_meth_8674" }, // 0x606210
    { 0x8675, "_meth_8675" }, // 0x18B500
    { 0x8676, "_meth_8676" }, // 0x19AC40
    { 0x8677, "_meth_8677" }, // 0x1A06F0
    { 0x8678, "_meth_8678" }, // 0x16A0A0
    { 0x8679, "_meth_8679" }, // 0x5EEA50
    { 0x867A, "_meth_867A" }, // 0x29A2A0
    { 0x867B, "_meth_867B" }, // 0x88E930
    { 0x867C, "_meth_867C" }, // 0x16AE30
    { 0x867D, "_meth_867D" },
    { 0x867E, "_meth_867E" },
    { 0x867F, "_meth_867F" }, // 0x608570
    { 0x8680, "_meth_8680" }, // 0x5EDF70
    { 0x8681, "_meth_8681" }, // 0x5EEB60
    { 0x8682, "_meth_8682" }, // 0x5EE880
    { 0x8683, "_meth_8683" }, // 0x5F7D20
    { 0x8684, "_meth_8684" }, // 0x5F7500
    { 0x8685, "_meth_8685" }, // 0x5F78C0
    { 0x8686, "_meth_8686" }, // 0x5EAAB0
    { 0x8687, "_meth_8687" }, // 0x5F3C10
    { 0x8688, "_meth_8688" }, // 0x613EF0
    { 0x8689, "_meth_8689" }, // 0x738A80
    { 0x868A, "_meth_868A" },
    { 0x868B, "_meth_868B" },
    { 0x868C, "_meth_868C" }, // 0x198000
    { 0x868D, "_meth_868D" },
    { 0x868E, "_meth_868E" }, // 0x6087B0
    { 0x868F, "_meth_868F" }, // 0x5F54F0
    { 0x8690, "_meth_8690" }, // 0x5F58A0
    { 0x8691, "_meth_8691" }, // 0x60C670
    { 0x8692, "_meth_8692" },
    { 0x8693, "_meth_8693" },
    { 0x8694, "_meth_8694" },
    { 0x8695, "_meth_8695" }, // 0x5E2350
    { 0x8696, "_meth_8696" }, // 0x5E2D10
    { 0x8697, "_meth_8697" }, // 0x18E9D0
    { 0x8698, "_meth_8698" }, // 0x5E3CA0
    { 0x8699, "_meth_8699" }, // 0x19D600
    { 0x869A, "_meth_869A" }, // 0x19E860
    { 0x869B, "_meth_869B" }, // 0x19F4D0
    { 0x869C, "_meth_869C" }, // 0x5FE5F0
    { 0x869D, "_meth_869D" }, // 0x5BACC0
    { 0x869E, "_meth_869E" }, // 0x5BAD40
    { 0x869F, "_meth_869F" }, // 0x5BAD90
    { 0x86A0, "_meth_86A0" }, // 0x5EF010
    { 0x86A1, "_meth_86A1" },
    { 0x86A2, "_meth_86A2" }, // 0x5EAD50
    { 0x86A3, "_meth_86A3" },
    { 0x86A4, "_meth_86A4" }, // 0x183DE0
    { 0x86A5, "_meth_86A5" }, // 0x1883C0
    { 0x86A6, "_meth_86A6" }, // 0x5E97E0
    { 0x86A7, "_meth_86A7" }, // 0x5BAE70
    { 0x86A8, "_meth_86A8" },
    { 0x86A9, "_meth_86A9" }, // 0x615EE0
    { 0x86AA, "_meth_86AA" }, // 0x60B3E0
    { 0x86AB, "_meth_86AB" }, // 0x608A40
    { 0x86AC, "_meth_86AC" }, // 0x737F80
    { 0x86AD, "_meth_86AD" }, // 0x608B40
    { 0x86AE, "_meth_86AE" }, // 0x5E4230
    { 0x86AF, "_meth_86AF" }, // 0x5E55A0
    { 0x86B0, "_meth_86B0" }, // 0x5E7D50
    { 0x86B1, "_meth_86B1" }, // 0x198160
    { 0x86B2, "_meth_86B2" }, // 0x5F63F0
    { 0x86B3, "_meth_86B3" }, // 0x5F5ED0
    { 0x86B4, "_meth_86B4" }, // 0x60A1C0
    { 0x86B5, "_meth_86B5" },
    { 0x86B6, "_meth_86B6" },
    { 0x86B7, "_meth_86B7" }, // 0x608720
    { 0x86B8, "_meth_86B8" }, // 0x609CA0
    { 0x86B9, "_meth_86B9" }, // 0x5EA9E0
    { 0x86BA, "_meth_86BA" }, // 0x608DD0
    { 0x86BB, "_meth_86BB" }, // 0x5AF520
    { 0x86BC, "_meth_86BC" }, // 0x5AF770
    { 0x86BD, "_meth_86BD" }, // 0x5AF860
    { 0x86BE, "_meth_86BE" }, // 0x199260
    { 0x86BF, "_meth_86BF" }, // 0x199960
    { 0x86C0, "_meth_86C0" }, // 0x6102F0
    { 0x86C1, "_meth_86C1" }, // 0x608930
    { 0x86C2, "_meth_86C2" }, // 0x738910
    { 0x86C3, "_meth_86C3" }, // 0x5B23A0
    { 0x86C4, "_meth_86C4" }, // 0x5B26E0
    { 0x86C5, "_meth_86C5" }, // 0x5B2E00
    { 0x86C6, "_meth_86C6" }, // 0x60D900
    { 0x86C7, "_meth_86C7" }, // 0x60D720
    { 0x86C8, "_meth_86C8" }, // 0x8920C0
    { 0x86C9, "_meth_86C9" }, // 0x17A640
    { 0x86CA, "_meth_86CA" }, // 0x19E7E0
    { 0x86CB, "_meth_86CB" }, // 0x60A1A0
    { 0x86CC, "_meth_86CC" }, // 0x5E28D0
    { 0x86CD, "_meth_86CD" }, // 0x19CF60
    { 0x86CE, "_meth_86CE" }, // 0x19D370
    { 0x86CF, "_meth_86CF" }, // 0x19E430
    { 0x86D0, "_meth_86D0" }, // 0x606B90
    { 0x86D1, "_meth_86D1" }, // 0x606D50
    { 0x86D2, "_meth_86D2" }, // 0x606F50
    { 0x86D3, "_meth_86D3" }, // 0x707590
    { 0x86D4, "_meth_86D4" }, // 0x19F200
    { 0x86D5, "_meth_86D5" }, // 0x19FA30
}};

} // namespace xsk::gsc::s2
