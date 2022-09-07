#ifndef apiMessagesH
#define apiMessagesH

#include <windows.h>
#include <unknwn.h>

const int AIMP_MSG_CMD_BASE = 0;

const int AIMP_MSG_CMD_STATE_GET = AIMP_MSG_CMD_BASE + 1;

const int AIMP_MSG_CMD_QFI_PLAYBACK_TRACK = AIMP_MSG_CMD_BASE + 2;

const int AIMP_MSG_CMD_SHOW_NOTIFICATION = AIMP_MSG_CMD_BASE + 3;

const int AIMP_MSG_CMD_TOGGLE_PARTREPEAT = AIMP_MSG_CMD_BASE + 5;

const int AIMP_MSG_CMD_ABOUT = AIMP_MSG_CMD_BASE + 6;

const int AIMP_MSG_CMD_OPTIONS = AIMP_MSG_CMD_BASE + 7;

const int AIMP_MSG_CMD_PLUGINS = AIMP_MSG_CMD_BASE + 8;

const int AIMP_MSG_CMD_QUIT = AIMP_MSG_CMD_BASE + 9;

const int AIMP_MSG_CMD_SCHEDULER = AIMP_MSG_CMD_BASE + 11;

const int AIMP_MSG_CMD_VISUAL_NEXT = AIMP_MSG_CMD_BASE + 12;

const int AIMP_MSG_CMD_VISUAL_PREV = AIMP_MSG_CMD_BASE + 13;

const int AIMP_MSG_CMD_PLAY = AIMP_MSG_CMD_BASE + 14;

const int AIMP_MSG_CMD_PLAYPAUSE = AIMP_MSG_CMD_BASE + 15;

const int AIMP_MSG_CMD_PLAY_PREV_PLAYLIST = AIMP_MSG_CMD_BASE + 16;

const int AIMP_MSG_CMD_PAUSE = AIMP_MSG_CMD_BASE + 17;

const int AIMP_MSG_CMD_STOP = AIMP_MSG_CMD_BASE + 18;

const int AIMP_MSG_CMD_NEXT = AIMP_MSG_CMD_BASE + 19;

const int AIMP_MSG_CMD_PREV = AIMP_MSG_CMD_BASE + 20;

const int AIMP_MSG_CMD_OPEN_FILES = AIMP_MSG_CMD_BASE + 21;

const int AIMP_MSG_CMD_OPEN_FOLDERS = AIMP_MSG_CMD_BASE + 22;

const int AIMP_MSG_CMD_OPEN_PLAYLISTS  = AIMP_MSG_CMD_BASE + 23;

const int AIMP_MSG_CMD_SAVE_PLAYLISTS  = AIMP_MSG_CMD_BASE + 24;

const int AIMP_MSG_CMD_BOOKMARKS = AIMP_MSG_CMD_BASE + 25;

const int AIMP_MSG_CMD_BOOKMARKS_ADD = AIMP_MSG_CMD_BASE + 26;

const int AIMP_MSG_CMD_PLS_RESCAN  = AIMP_MSG_CMD_BASE + 27;

const int AIMP_MSG_CMD_PLS_FOCUS_PLAYABLE = AIMP_MSG_CMD_BASE + 28;

const int AIMP_MSG_CMD_PLS_DELETE_ALL = AIMP_MSG_CMD_BASE + 29;

const int AIMP_MSG_CMD_PLS_DELETE_NON_EXISTS = AIMP_MSG_CMD_BASE + 30;

const int AIMP_MSG_CMD_PLS_DELETE_NON_SELECTED = AIMP_MSG_CMD_BASE + 31;

const int AIMP_MSG_CMD_PLS_DELETE_PLAYING_FROM_HDD = AIMP_MSG_CMD_BASE + 32;

const int AIMP_MSG_CMD_PLS_DELETE_SELECTED = AIMP_MSG_CMD_BASE + 33;

const int AIMP_MSG_CMD_PLS_DELETE_SELECTED_FROM_HDD = AIMP_MSG_CMD_BASE + 34;

const int AIMP_MSG_CMD_PLS_DELETE_SWITCHEDOFF = AIMP_MSG_CMD_BASE + 35;

const int AIMP_MSG_CMD_PLS_DELETE_SWITCHEDOFF_FROM_HDD = AIMP_MSG_CMD_BASE + 36;

const int AIMP_MSG_CMD_PLS_DELETE_DUPLICATES = AIMP_MSG_CMD_BASE + 37;

const int AIMP_MSG_CMD_PLS_SORT_BY_ARTIST = AIMP_MSG_CMD_BASE + 38;

const int AIMP_MSG_CMD_PLS_SORT_BY_TITLE = AIMP_MSG_CMD_BASE + 39;

const int AIMP_MSG_CMD_PLS_SORT_BY_PATH = AIMP_MSG_CMD_BASE + 40;

const int AIMP_MSG_CMD_PLS_SORT_BY_DURATION = AIMP_MSG_CMD_BASE + 41;

const int AIMP_MSG_CMD_PLS_SORT_RANDOMIZE = AIMP_MSG_CMD_BASE + 42;

const int AIMP_MSG_CMD_PLS_SORT_INVERT = AIMP_MSG_CMD_BASE + 43;

const int AIMP_MSG_CMD_PLS_SWITCH_ON = AIMP_MSG_CMD_BASE + 44;

const int AIMP_MSG_CMD_PLS_SWITCH_OFF = AIMP_MSG_CMD_BASE + 45;

const int AIMP_MSG_CMD_ADD_FILES = AIMP_MSG_CMD_BASE + 46;

const int AIMP_MSG_CMD_ADD_FOLDERS = AIMP_MSG_CMD_BASE + 47;

const int AIMP_MSG_CMD_ADD_PLAYLISTS = AIMP_MSG_CMD_BASE + 48;

const int AIMP_MSG_CMD_ADD_URL = AIMP_MSG_CMD_BASE + 49;

const int AIMP_MSG_CMD_QTE_PLAYABLE_TRACK = AIMP_MSG_CMD_BASE + 51;

const int AIMP_MSG_CMD_SEARCH = AIMP_MSG_CMD_BASE + 52;

const int AIMP_MSG_CMD_DSPMANAGER = AIMP_MSG_CMD_BASE + 53;

const int AIMP_MSG_CMD_PLS_RELOAD_FROM_PREIMAGE = AIMP_MSG_CMD_BASE + 55;

const int AIMP_MSG_CMD_VISUAL_START = AIMP_MSG_CMD_BASE + 57;

const int AIMP_MSG_CMD_VISUAL_STOP = AIMP_MSG_CMD_BASE + 58;

const int AIMP_MSG_CMD_PLS_RESCAN_SELECTED  = AIMP_MSG_CMD_BASE + 59;

const int AIMP_MSG_PROPERTY_BASE = 0x1000;

const int AIMP_MSG_PROPVALUE_GET = 0;
const int AIMP_MSG_PROPVALUE_SET = 1;

const int AIMP_MSG_PROPERTY_VOLUME = AIMP_MSG_PROPERTY_BASE + 1;

const int AIMP_MSG_PROPERTY_MUTE = AIMP_MSG_PROPERTY_BASE + 2;

const int AIMP_MSG_PROPERTY_BALANCE = AIMP_MSG_PROPERTY_BASE + 3;

const int AIMP_MSG_PROPERTY_CHORUS = AIMP_MSG_PROPERTY_BASE + 4;

const int AIMP_MSG_PROPERTY_ECHO = AIMP_MSG_PROPERTY_BASE + 5;

const int AIMP_MSG_PROPERTY_ENHANCER = AIMP_MSG_PROPERTY_BASE + 6;

const int AIMP_MSG_PROPERTY_FLANGER = AIMP_MSG_PROPERTY_BASE + 7;

const int AIMP_MSG_PROPERTY_REVERB = AIMP_MSG_PROPERTY_BASE + 8;

const int AIMP_MSG_PROPERTY_PITCH = AIMP_MSG_PROPERTY_BASE + 9;

const int AIMP_MSG_PROPERTY_SPEED = AIMP_MSG_PROPERTY_BASE + 10;

const int AIMP_MSG_PROPERTY_TEMPO = AIMP_MSG_PROPERTY_BASE + 11;

const int AIMP_MSG_PROPERTY_TRUEBASS = AIMP_MSG_PROPERTY_BASE + 12;

const int AIMP_MSG_PROPERTY_PREAMP = AIMP_MSG_PROPERTY_BASE + 13;

const int AIMP_MSG_PROPERTY_EQUALIZER = AIMP_MSG_PROPERTY_BASE + 14;

const int AIMP_MSG_PROPERTY_EQUALIZER_BAND = AIMP_MSG_PROPERTY_BASE + 15;

const int AIMP_MSG_PROPERTY_PLAYER_STATE = AIMP_MSG_PROPERTY_BASE + 16;

const int AIMP_MSG_PROPERTY_PLAYER_POSITION = AIMP_MSG_PROPERTY_BASE + 17;

const int AIMP_MSG_PROPERTY_PLAYER_DURATION = AIMP_MSG_PROPERTY_BASE + 18;

const int AIMP_MSG_PROPERTY_PARTREPEAT = AIMP_MSG_PROPERTY_BASE + 19;

const int AIMP_MSG_PROPERTY_REPEAT = AIMP_MSG_PROPERTY_BASE + 20;

const int AIMP_MSG_PROPERTY_SHUFFLE = AIMP_MSG_PROPERTY_BASE + 21;

const int AIMP_MSG_PROPERTY_HWND = AIMP_MSG_PROPERTY_BASE + 22;
const int AIMP_MPH_MAINFORM      = 0;
const int AIMP_MPH_APPLICATION   = 1;
const int AIMP_MPH_TRAYCONTROL   = 2;
const int AIMP_MPH_PLAYLISTFORM  = 3;
const int AIMP_MPH_EQUALIZERFORM = 4;

const int AIMP_MSG_PROPERTY_STAYONTOP = AIMP_MSG_PROPERTY_BASE + 23;

const int AIMP_MSG_PROPERTY_REVERSETIME = AIMP_MSG_PROPERTY_BASE + 24;

const int AIMP_MSG_PROPERTY_MINIMIZED_TO_TRAY = AIMP_MSG_PROPERTY_BASE + 25;

const int AIMP_MSG_PROPERTY_REPEAT_SINGLE_FILE_PLAYLISTS = AIMP_MSG_PROPERTY_BASE + 26;

const int AIMP_MSG_PROPERTY_ACTION_ON_END_OF_PLAYLIST = AIMP_MSG_PROPERTY_BASE + 27;

const int AIMP_MSG_PROPERTY_STOP_AFTER_TRACK = AIMP_MSG_PROPERTY_BASE + 28;

const int AIMP_MSG_PROPERTY_RADIOCAP = AIMP_MSG_PROPERTY_BASE + 29;

const int AIMP_MSG_PROPERTY_LOADED = AIMP_MSG_PROPERTY_BASE + 30;

const int AIMP_MSG_PROPERTY_VISUAL_FULLSCREEN = AIMP_MSG_PROPERTY_BASE + 31;

const int AIMP_MSG_PROPERTY_PLAYER_BUFFERING = AIMP_MSG_PROPERTY_BASE + 32;

const int AIMP_MSG_PROPERTY_RADIOCAP_SINGLE_TRACK = AIMP_MSG_PROPERTY_BASE + 33;

const int AIMP_MSG_PROPERTY_CROSSMIXING = AIMP_MSG_PROPERTY_BASE + 34;

const int AIMP_MSG_PROPERTY_ACTION_ON_END_OF_TRACK = AIMP_MSG_PROPERTY_BASE + 35;

const int AIMP_MSG_EVENT_BASE = 0x2000;

const int AIMP_MSG_EVENT_CMD_STATE = AIMP_MSG_EVENT_BASE + 1;

const int AIMP_MSG_EVENT_OPTIONS = AIMP_MSG_EVENT_BASE + 2;

const int AIMP_MSG_EVENT_STREAM_START = AIMP_MSG_EVENT_BASE + 3;

const int AIMP_MSG_EVENT_STREAM_START_SUBTRACK = AIMP_MSG_EVENT_BASE + 4;

const int AIMP_MSG_EVENT_STREAM_END = AIMP_MSG_EVENT_BASE + 5;

const int AIMP_MES_END_OF_QUEUE    = 1;
const int AIMP_MES_END_OF_PLAYLIST = 2;

const int AIMP_MSG_EVENT_PLAYER_STATE = AIMP_MSG_EVENT_BASE + 6;

const int AIMP_MSG_EVENT_PROPERTY_VALUE = AIMP_MSG_EVENT_BASE + 7;

const int AIMP_MSG_EVENT_OPTIONS_FRAME_LIST = AIMP_MSG_EVENT_BASE + 8;

const int AIMP_MSG_EVENT_OPTIONS_FRAME_MODIFIED = AIMP_MSG_EVENT_BASE + 9;

const int AIMP_MSG_EVENT_VISUAL_PLUGIN = AIMP_MSG_EVENT_BASE + 11;

const int AIMP_MSG_EVENT_FILEMARK = AIMP_MSG_EVENT_BASE + 12;

const int AIMP_MSG_EVENT_STATISTICS_CHANGED = AIMP_MSG_EVENT_BASE + 14;

const int AIMP_MSG_EVENT_SKIN = AIMP_MSG_EVENT_BASE + 15;

const int AIMP_MSG_EVENT_PLAYER_UPDATE_POSITION = AIMP_MSG_EVENT_BASE + 16;

const int AIMP_MSG_EVENT_LANGUAGE = AIMP_MSG_EVENT_BASE + 17;

const int AIMP_MSG_EVENT_LOADED = AIMP_MSG_EVENT_BASE + 18;

const int AIMP_MSG_EVENT_TERMINATING = AIMP_MSG_EVENT_BASE + 19;

const int AIMP_MSG_EVENT_PLAYABLE_FILE_INFO	= AIMP_MSG_EVENT_BASE + 20;

const int AIMP_MSG_EVENT_PLAYER_UPDATE_POSITION_HR = AIMP_MSG_EVENT_BASE + 21;

const int AIMP_MSG_EVENT_EQUALIZER_PRESET_NAME = AIMP_MSG_EVENT_BASE + 22;

static const GUID IID_IAIMPMessageHook = { 0xFC6FB524, 0xA959, 0x4089, 0xAA, 0x0A, 0xEA, 0x40, 0xAB, 0x73, 0x74, 0xCD };
static const GUID IID_IAIMPServiceMessageDispatcher = { 0x41494D50, 0x5372, 0x764D, 0x73, 0x67, 0x44, 0x73, 0x70, 0x72, 0x00, 0x00 };
  
class IAIMPMessageHook: public IUnknown
{
	public:
		virtual void WINAPI CoreMessage (DWORD AMessage, int AParam1, void *AParam2, HRESULT *AResult) = 0;
};

class IAIMPServiceMessageDispatcher: public IUnknown
{
	public:
		virtual HRESULT WINAPI Send (DWORD AMessage, int AParam1, void *AParam2) = 0;

		virtual DWORD   WINAPI Register (PWCHAR AMessageName) = 0;

		virtual HRESULT WINAPI Hook (IAIMPMessageHook *AHook) = 0;
		virtual HRESULT WINAPI Unhook (IAIMPMessageHook *AHook) = 0;
};

#endif
