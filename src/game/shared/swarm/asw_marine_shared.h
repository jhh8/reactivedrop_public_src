//========= Copyright � 1996-2005, Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================//

#ifndef ASW_MARINE_SHARED_H
#define ASW_MARINE_SHARED_H

#ifdef _WIN32
#pragma once
#endif

// Shared header file for players
#if defined( CLIENT_DLL )
	#define CASW_Marine C_ASW_Marine
#endif

enum ASW_Bullet_Attribute_Bits
{
	BULLET_ATT_FIRE				=	0x00000001,
	BULLET_ATT_EXPLODE			=	0x00000002,
	BULLET_ATT_CHEMICAL			=	0x00000004,
	BULLET_ATT_ELECTRIC			=	0x00000008,
	BULLET_ATT_FREEZE			=	0x00000010,
	BULLET_ATT_TRACER_BUCKSHOT	=	0x00000020, // used to determine if tracers should play secondary fire animation for some weapons

	// Highest legal value
	BULLET_ATT_MAX				=	0x0000002F,
};

enum ASW_Forced_Action
{
	FORCED_ACTION_NONE = 0,
	FORCED_ACTION_STUMBLE_FORWARD = 1,
	FORCED_ACTION_STUMBLE_RIGHT = 2,
	FORCED_ACTION_STUMBLE_LEFT = 3,
	FORCED_ACTION_STUMBLE_BACKWARD = 4,
	FORCED_ACTION_STUMBLE_SHORT_FORWARD,
	FORCED_ACTION_STUMBLE_SHORT_RIGHT,
	FORCED_ACTION_STUMBLE_SHORT_LEFT,
	FORCED_ACTION_STUMBLE_SHORT_BACKWARD,
	FORCED_ACTION_KNOCKDOWN_FORWARD,
	FORCED_ACTION_KNOCKDOWN_BACKWARD,
	FORCED_ACTION_CHAINSAW_SYNC_KILL,
	FORCED_ACTION_BLINK,
	FORCED_ACTION_JUMP_JET,
	FORCED_ACTION_BLINK_FROM_TRIGGER,
	FORCED_ACTION_JUMP_JET_FROM_TRIGGER,
};
#endif // ASW_MARINE_SHARED_H
