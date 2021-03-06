#ifndef __psp_error__
#define __psp_error__

#define MSG_DEFAULT 0x7FFFFFFF

#define ERR_OUT_OF_MEM 0x0
#define ERR_READ_MEMSTICK 0x1

#define ERR_INIT_OSK 0x2
#define ERR_ADD_CODE 0x3


#define ASK_EXIT 0x1000
#define ASK_DELETE 0x1001

#define INFO_USB_ON 0x2000
#define INFO_USB_OFF 0x2001
#define INFO_DELETING 0x2002
#define INFO_EXITING 0x2003

#define FILER_STATUS_CANEXIT1 0x3000
#define FILER_STATUS_NOEXIT1 0x3001
#define FILER_STATUS_CANEXIT2 0x3002
#define FILER_STATUS_NOEXIT2 0x3003

#define FILER_HELP_WINDOW1 0x3004
#define FILER_HELP_WINDOW2 0x3005
#define FILER_HELP_WINDOW3 0x3006
#define FILER_HELP_WINDOW4 0x3007
#define FILER_HELP_WINDOW5 0x3008

#define FILE_IPS_PATCHSUCCESS 0x3009


// GAME
#define MENU_ICONS_GAME 0x4000
#define MENU_ICONS_GAME_RESET 0x4001
#define MENU_ICONS_GAME_NEW 0x4002
#define MENU_ICONS_GAME_DEFAULTSETTINGS 0x4003
#define MENU_ICONS_GAME_DEFAULTSETTINGS_HELP 0x4103
#define MENU_ICONS_GAME_EXIT 0x4004

#define MENU_GAME_SAVINGDEFAULTSETTINGS 0x4200
#define MENU_GAME_CONFIRMRESET 0x4201
// LOAD/SAVE
#define MENU_ICONS_LOADSAVE 0x4020
#define MENU_ICONS_LOADSAVE_LOADSTATE 0x4021
#define MENU_ICONS_LOADSAVE_LOADSTATE_HELP 0x4121
#define MENU_ICONS_LOADSAVE_SAVESTATE 0x4022
#define MENU_ICONS_LOADSAVE_SAVESTATE_HELP 0x4122
#define MENU_ICONS_LOADSAVE_DELETESTATE 0x4023
#define MENU_ICONS_LOADSAVE_DELETESTATE_HELP 0x4123
#define MENU_ICONS_LOADSAVE_IMPORTSTATE 0x4024
#define MENU_ICONS_LOADSAVE_IMPORTSTATE_HELP 0x4124
#define MENU_ICONS_LOADSAVE_AUTOSAVETIMER 0x4025
#define MENU_ICONS_LOADSAVE_AUTOSAVETIMER_HELP 0x4125
#define MENU_ICONS_LOADSAVE_AUTOSRAM 0x4026
#define MENU_ICONS_LOADSAVE_AUTOSRAM_HELP 0x4126

#define MENU_ICONS_LOADSAVE_EXPORTS9XSTATE 0x4027
#define MENU_ICONS_LOADSAVE_EXPORTS9XSTATE_HELP 0x4127

#define MENU_STATE_CHOOSEDEL 0x4220
#define MENU_STATE_CHOOSELOAD 0x4221
#define MENU_STATE_CHOOSESAVE 0x4222
#define MENU_STATE_FREESLOT 0x4223
#define MENU_STATE_SCANNING 0x4224

#define MENU_STATE_CONFIRMLOAD 0x4225
#define MENU_STATE_CONFIRMDELETE 0x4226
#define MENU_STATE_CONFIRMSAVE 0x4227
#define MENU_STATE_ISSAVING 0x4228
#define MENU_STATE_ISLOADING 0x4229
#define MENU_STATE_ISIMPORTING 0x422A
#define MENU_STATE_ISEXPORTINGS9X 0x422B
#define MENU_STATE_NOSTATE 0x422C


// CONTROLS
#define MENU_ICONS_CONTROLS 0x4040
#define MENU_ICONS_CONTROLS_REDEFINE 0x4041
#define MENU_ICONS_CONTROLS_REDEFINE_HELP 0x4141
#define MENU_ICONS_CONTROLS_INPUT 0x4042
#define MENU_ICONS_CONTROLS_INPUT_HELP 0x4142
// VIDEO OPTIONS
#define MENU_ICONS_VIDEO 0x4060
#define MENU_ICONS_VIDEO_MODE 0x4061
#define MENU_ICONS_VIDEO_MODE_HELP 0x4161
#define MENU_ICONS_VIDEO_ENGINE 0x4062
#define MENU_ICONS_VIDEO_ENGINE_HELP 0x4162
#define MENU_ICONS_VIDEO_SLIMITONOFF 0x4063
#define MENU_ICONS_VIDEO_SLIMITONOFF_HELP 0x4163
#define MENU_ICONS_VIDEO_SLIMITVALUE 0x4064
#define MENU_ICONS_VIDEO_SLIMITVALUE_HELP 0x4164
#define MENU_ICONS_VIDEO_FSKIP 0x4065
#define MENU_ICONS_VIDEO_FSKIP_HELP 0x4165
#define MENU_ICONS_VIDEO_VSYNC 0x4066
#define MENU_ICONS_VIDEO_VSYNC_HELP 0x4166
#define MENU_ICONS_VIDEO_SMOOTHING 0x4067
#define MENU_ICONS_VIDEO_SMOOTHING_HELP 0x4167
#define MENU_ICONS_VIDEO_PALASNTSC  0x4068
#define MENU_ICONS_VIDEO_PALASNTSC_HELP 0x4168
#define MENU_ICONS_VIDEO_GAMMA 0x4069
#define MENU_ICONS_VIDEO_GAMMA_HELP 0x4169
#define MENU_ICONS_VIDEO_SCRCALIB 0x406A
#define MENU_ICONS_VIDEO_SCRCALIB_HELP 0x416A
#define MENU_ICONS_VIDEO_SHOWFPS 0x406B
#define MENU_ICONS_VIDEO_SHOWFPS_HELP 0x416B
// SOUND OPTIONS
#define MENU_ICONS_SOUND 0x4080
#define MENU_ICONS_SOUND_MODE 0x4081
#define MENU_ICONS_SOUND_MODE_HELP 0x4181
#define MENU_ICONS_SOUND_FREQ 0x4082
#define MENU_ICONS_SOUND_FREQ_HELP 0x4182
#define MENU_ICONS_SOUND_APURATIO 0x4083
#define MENU_ICONS_SOUND_APURATIO_HELP 0x4183

#define MENU_SOUND_MODE_NOTEMUL 0x4280
#define MENU_SOUND_MODE_EMULOFF 0x4281
#define MENU_SOUND_MODE_EMULON 0x4282


// MISC OPTIONS
#define MENU_ICONS_MISC 0x40A0
#define MENU_ICONS_MISC_FILEVIEWER 0x40A1
#define MENU_ICONS_MISC_FILEVIEWER_HELP 0x41A1
#define MENU_ICONS_MISC_PSPCLOCK 0x40A2
#define MENU_ICONS_MISC_PSPCLOCK_HELP 0x41A2
#define MENU_ICONS_MISC_HACKDEBUG 0x40A3
#define MENU_ICONS_MISC_HACKDEBUG_HELP 0x41A3
#define MENU_ICONS_MISC_SNAPSHOT 0x40A4
#define MENU_ICONS_MISC_SNAPSHOT_HELP 0x41A4
#define MENU_ICONS_MISC_RANDBG 0x40A5
#define MENU_ICONS_MISC_RANDBG_HELP 0x41A5
#define MENU_ICONS_MISC_BGMUSIC  0x40A6
#define MENU_ICONS_MISC_BGMUSIC_HELP 0x41A6
#define MENU_ICONS_MISC_BGFX 0x40A7
#define MENU_ICONS_MISC_BGFX_HELP 0x41A7
#define MENU_ICONS_MISC_PADBEEP 0x40A8
#define MENU_ICONS_MISC_PADBEEP_HELP 0x41A8

#define MENU_MISC_SAVINGJPEG 0x42A0

// CHEATS
#define MENU_ICONS_CHEATS 0x40C0
#define MENU_ICONS_CHEATS_ADDRAW 0x40C1
#define MENU_ICONS_CHEATS_ADDRAW_HELP 0x41C1
#define MENU_ICONS_CHEATS_ADDGG 0x40C2
#define MENU_ICONS_CHEATS_ADDGG_HELP 0x41C2
#define MENU_ICONS_CHEATS_ADDPAR  0x40C3
#define MENU_ICONS_CHEATS_ADDPAR_HELP 0x41C3
#define MENU_ICONS_CHEATS_ADDGF  0x40C4
#define MENU_ICONS_CHEATS_ADDGF_HELP 0x41C4
#define MENU_ICONS_CHEATS_DISABLE 0x40C5
#define MENU_ICONS_CHEATS_DISABLE_HELP 0x41C5
#define MENU_ICONS_CHEATS_DISABLEALL 0x40C6
#define MENU_ICONS_CHEATS_DISABLEALL_HELP 0x41C6
#define MENU_ICONS_CHEATS_ENABLE 0x40C7
#define MENU_ICONS_CHEATS_ENABLE_HELP 0x41C7
#define MENU_ICONS_CHEATS_ENABLEALL 0x40C8
#define MENU_ICONS_CHEATS_ENABLEALL_HELP 0x41C8
#define MENU_ICONS_CHEATS_REMOVE 0x40C9
#define MENU_ICONS_CHEATS_REMOVE_HELP 0x41C9
#define MENU_ICONS_CHEATS_REMOVEALL 0x40CA
#define MENU_ICONS_CHEATS_REMOVEALL_HELP 0x41CA


#define MENU_CHEATS_ENTERGF 0x42C0
#define MENU_CHEATS_ENTERPAR 0x42C1
#define MENU_CHEATS_ENTERGG 0x42C2
#define MENU_CHEATS_ENTERRAW 0x42C3


// ABOUT
#define MENU_ICONS_ABOUT 0x40E0
#define MENU_ICONS_ABOUT_CREDITS 0x40E1
#define MENU_ICONS_ABOUT_VERSION 0x40E2

// MENU GENERIC (status bar, ...)
#define MENU_STATUS_GENERIC_MSG1 0x4300
#define MENU_STATUS_GENERIC_NEEDRELOAD 0x4301
#define MENU_STATUS_GENERIC_NEEDRESET 0x4302

int psp_msg(int num,int len);
char *psp_msg_string(int num);

void save_msg_list(char *fname);
void load_msg_list(char *fname);

#endif
