////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////  THIS FILE WAS AUTO-GENERATED - DO NOT EDIT  ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Sound.h>
#include <VBSoundTrack.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

// Waveforms

const WaveformData BeepWaveform1 =
{
	// Data
	{
		62, 60, 58, 56, 54, 52, 50, 48, 46, 44, 42, 40, 38, 36, 34, 32, 30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6, 4, 2, 0
	},

	// Checksum
	3405039715
};

// Modulation Data

const int8 BeepModulationData1[] =
{
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

// Track 1

const uint8 BeepSoundTrack0SxINT[] =
{
	0xC0, 
};

const uint8 BeepSoundTrack0SxLRV[] =
{
	0xBB, 0x00, 
};

const uint16 BeepSoundTrack0SxFQ[] =
{
	0x0762, 0x0739, 0x074E, 
};

const uint8 BeepSoundTrack0SxEV0[] =
{
	0xB0, 
};

const uint8 BeepSoundTrack0SxEV1[] =
{
	0xA0, 
};

const WaveformData* const BeepSoundTrack0SxRAM[] =
{
	&BeepWaveform1, 
};

const uint8 BeepSoundTrack0SxSWP[] =
{
	0x00
};

const int8* const BeepSoundTrack0SxMOD[] =
{
	NULL
};

const SoundTrackKeyframe BeepSoundTrack0Keyframes[] =
{
	{50, kSoundTrackEventStart},
	{50, kSoundTrackEventSxFQ},
	{100, kSoundTrackEventSxFQ},
	{12600, kSoundTrackEventSxLRV},
	{0, kSoundTrackEventEnd}, 
};

VBSoundTrackROMSpec BeepSoundTrack0 =
{
	// SoundTrack
	{
		// Allocator
		__TYPE(VBSoundTrack),

		// Priority for sound channel usage
		10,

		// Skip if no sound source available?
		true,

		// Loop back point (cursor)
		0,

		// Keyframes that define the track
		(SoundTrackKeyframe*)BeepSoundTrack0Keyframes
	},

	// SxINT values
	(uint8*)BeepSoundTrack0SxINT,

	// SxLRV values
	(uint8*)BeepSoundTrack0SxLRV,

	// SxFQH and SxFQL values
	(uint16*)BeepSoundTrack0SxFQ,

	// SxEV0 values
	(uint8*)BeepSoundTrack0SxEV0,

	// SxEV1 values
	(uint8*)BeepSoundTrack0SxEV1,

	// SxRAM pointers
	(WaveformData**)BeepSoundTrack0SxRAM,

	// SxSWP values
	(uint8*)BeepSoundTrack0SxSWP,

	// SxMOD pointers
	(int8**)BeepSoundTrack0SxMOD,
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// DEFINITIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

VBSoundTrackROMSpec* const BeepSoundTracks[] =
{&BeepSoundTrack0,
	NULL
};

SoundROMSpec BeepSoundSpec =
{
	// Component
	{
		// Allocator
		__TYPE(Sound),

		// Component type
		kSoundComponent
	},

	// Name
	"",

	// Author
	"",

	// Play in loop
	false,

	// Tick duration in US
	1280,

	// Tracks
	(SoundTrackSpec**)BeepSoundTracks,

	// Sound group
	kSoundGroupNone,
};
