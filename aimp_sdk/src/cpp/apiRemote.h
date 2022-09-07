#ifndef apiRemoteH
#define apiRemoteH

#include <windows.h>

const char AIMPRemoteAccessClass[] = "AIMP2_RemoteInfo";
const int  AIMPRemoteAccessMapFileSize = 2048;

#pragma pack (push, 1)

struct TAIMPRemoteFileInfo
{
	DWORD Deprecated1;
	BOOL Active;
	DWORD BitRate;
	DWORD Channels;
	DWORD Duration;
	INT64 FileSize;
	DWORD FileMark;
	DWORD SampleRate;
	DWORD TrackNumber;
	DWORD AlbumLength;
	DWORD ArtistLength;
	DWORD DateLength;
	DWORD FileNameLength;
	DWORD GenreLength;
	DWORD TitleLength;
	DWORD Deprecated2[6];
};

#pragma pack (pop)

typedef TAIMPRemoteFileInfo *PAIMPRemoteFileInfo;

const int WM_AIMP_COMMAND  = WM_USER + 0x75;
const int WM_AIMP_NOTIFY   = WM_USER + 0x76;
const int WM_AIMP_PROPERTY = WM_USER + 0x77;

const int WM_AIMP_COPYDATA_ALBUMART_ID = 0x41495043;

const int AIMP_RA_PROPVALUE_GET = 0;
const int AIMP_RA_PROPVALUE_SET = 1;

const int AIMP_RA_PROPERTY_MASK = 0xFFFFFFF0;

const int AIMP_RA_PROPERTY_VERSION = 0x10;

const int AIMP_RA_PROPERTY_PLAYER_POSITION = 0x20;

const int AIMP_RA_PROPERTY_PLAYER_DURATION = 0x30;

const int AIMP_RA_PROPERTY_PLAYER_STATE = 0x40;

const int AIMP_RA_PROPERTY_VOLUME = 0x50;

const int AIMP_RA_PROPERTY_MUTE = 0x60;

const int AIMP_RA_PROPERTY_TRACK_REPEAT = 0x70;

const int AIMP_RA_PROPERTY_TRACK_SHUFFLE = 0x80;

const int AIMP_RA_PROPERTY_RADIOCAP = 0x90;

const int AIMP_RA_PROPERTY_VISUAL_FULLSCREEN = 0xA0;

const int AIMP_RA_CMD_BASE = 10;

const int AIMP_RA_CMD_REGISTER_NOTIFY = AIMP_RA_CMD_BASE + 1;

const int AIMP_RA_CMD_UNREGISTER_NOTIFY = AIMP_RA_CMD_BASE + 2;

const int AIMP_RA_CMD_PLAY = AIMP_RA_CMD_BASE + 3;

const int AIMP_RA_CMD_PLAYPAUSE = AIMP_RA_CMD_BASE + 4;

const int AIMP_RA_CMD_PAUSE = AIMP_RA_CMD_BASE + 5;

const int AIMP_RA_CMD_STOP = AIMP_RA_CMD_BASE + 6;

const int AIMP_RA_CMD_NEXT = AIMP_RA_CMD_BASE + 7;

const int AIMP_RA_CMD_PREV = AIMP_RA_CMD_BASE + 8;

const int AIMP_RA_CMD_VISUAL_NEXT = AIMP_RA_CMD_BASE + 9;

const int AIMP_RA_CMD_VISUAL_PREV = AIMP_RA_CMD_BASE + 10;

const int AIMP_RA_CMD_QUIT = AIMP_RA_CMD_BASE + 11;

const int AIMP_RA_CMD_ADD_FILES = AIMP_RA_CMD_BASE + 12;

const int AIMP_RA_CMD_ADD_FOLDERS = AIMP_RA_CMD_BASE + 13;

const int AIMP_RA_CMD_ADD_PLAYLISTS = AIMP_RA_CMD_BASE + 14;

const int AIMP_RA_CMD_ADD_URL = AIMP_RA_CMD_BASE + 15;

const int AIMP_RA_CMD_OPEN_FILES = AIMP_RA_CMD_BASE + 16;

const int AIMP_RA_CMD_OPEN_FOLDERS = AIMP_RA_CMD_BASE + 17;

const int AIMP_RA_CMD_OPEN_PLAYLISTS = AIMP_RA_CMD_BASE + 18;

const int AIMP_RA_CMD_GET_ALBUMART = AIMP_RA_CMD_BASE + 19;

const int AIMP_RA_CMD_VISUAL_START = AIMP_RA_CMD_BASE + 20;

const int AIMP_RA_CMD_VISUAL_STOP = AIMP_RA_CMD_BASE + 21;

const int AIMP_RA_NOTIFY_BASE = 0;

const int AIMP_RA_NOTIFY_TRACK_INFO = AIMP_RA_NOTIFY_BASE + 1;

const int AIMP_RA_NOTIFY_TRACK_START = AIMP_RA_NOTIFY_BASE + 2;

const int AIMP_RA_NOTIFY_PROPERTY = AIMP_RA_NOTIFY_BASE + 3; 

#endif
