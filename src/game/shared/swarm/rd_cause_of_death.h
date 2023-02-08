#pragma once

enum RD_Cause_of_Death_t
{
	DEATHCAUSE_UNKNOWN,
	DEATHCAUSE_DM_SELF,
	DEATHCAUSE_DM_PLAYER,
	DEATHCAUSE_DM_BOT,
	DEATHCAUSE_DM_OTHER,
	DEATHCAUSE_PHYSICS,
	DEATHCAUSE_FALLING,
	DEATHCAUSE_TRIGGER,
	DEATHCAUSE_COUNTDOWN,
	DEATHCAUSE_COMMAND,
	DEATHCAUSE_FF_WHILE_INFESTED,
	DEATHCAUSE_INFESTATION,
	DEATHCAUSE_MARINE_MELEE,
	DEATHCAUSE_MARINE_BUCKSHOT,
	DEATHCAUSE_MARINE_BULLET,
	DEATHCAUSE_CHAINSAW,
	DEATHCAUSE_ZAPPED,
	DEATHCAUSE_SENTRY_PLACED,
	DEATHCAUSE_SENTRY_MAPPER,
	DEATHCAUSE_DOOR,
	DEATHCAUSE_EXPLOSIVE_BARREL_SELF,
	DEATHCAUSE_EXPLOSIVE_BARREL,
	DEATHCAUSE_RADIOACTIVE_BARREL,
	DEATHCAUSE_EXPLOSIVE_PROP_SELF,
	DEATHCAUSE_EXPLOSIVE_PROP,
	DEATHCAUSE_STOOD_ON_ALIEN,
	DEATHCAUSE_DRONE_CLAWS,
	DEATHCAUSE_RANGER_SPIT,
	DEATHCAUSE_SHIELDBUG_CLAWS,
	DEATHCAUSE_BUZZER_STING,
	DEATHCAUSE_BOOMER_KICK,
	DEATHCAUSE_BOOMER_BLOB,
	DEATHCAUSE_BIOMASS_SKIN,
	DEATHCAUSE_XENOMITE_BURST,
	DEATHCAUSE_HARVESTER_SKIN,
	DEATHCAUSE_MORTARBUG_SKIN,
	DEATHCAUSE_MORTARBUG_SHELL,
	DEATHCAUSE_QUEEN_TENTACLES,
	DEATHCAUSE_QUEEN_CLAWS,
	DEATHCAUSE_QUEEN_SPIT,
	DEATHCAUSE_JACOB_TOXIC_PIT,
	DEATHCAUSE_JACOB_TURBINE,
	DEATHCAUSE_JACOB_NUKE,
	DEATHCAUSE_AREA9800_BRIDGE,
	DEATHCAUSE_RES7_FAN_EXPLODE,
	DEATHCAUSE_RES7_ROCK_EXPLODE,
	DEATHCAUSE_RES7_LAVA,
	DEATHCAUSE_TFT_EGG,
	DEATHCAUSE_TFT_LASER,
	DEATHCAUSE_TIL_HOSPITAL_TOXIN,
	DEATHCAUSE_LANA_TRASH_COMPACTOR,
	DEATHCAUSE_LANA_SEWER_MIXER,
	DEATHCAUSE_LANA_VENT_PISTON,
	DEATHCAUSE_LANA_NUKE,
	DEATHCAUSE_NH_DOOR_SECURITY,
	DEATHCAUSE_NH_NUKE,
	DEATHCAUSE_BIO_VENT_HOLE,
	DEATHCAUSE_BIO_ELEVATOR,
	DEATHCAUSE_BIO_FAN,
	DEATHCAUSE_ACC32_BRIDGE,
	DEATHCAUSE_ACC32_REACTOR,
	DEATHCAUSE_ACC32_ELECTRIFIER,
	DEATHCAUSE_ACC32_FORKLIFT,
	DEATHCAUSE_ACC32_CRUSHER,
	DEATHCAUSE_ACC32_DOORS,
	DEATHCAUSE_ACC32_TRAIN,
	DEATHCAUSE_RUN_OVER,
	DEATHCAUSE_HEADCRAB_CLASSIC,
	DEATHCAUSE_HEADCRAB_FAST,
	DEATHCAUSE_HEADCRAB_POISON,
	DEATHCAUSE_ZOMBINE,
	DEATHCAUSE_ZOMBINE_GRENADE,
	DEATHCAUSE_ZOMBIE_CLASSIC,
	DEATHCAUSE_ZOMBIE_CLASSIC_TORSO,
	DEATHCAUSE_ZOMBIE_FAST,
	DEATHCAUSE_ZOMBIE_FAST_TORSO,
	DEATHCAUSE_ZOMBIE_POISON,
	DEATHCAUSE_COMBINE_SHOVE,
	DEATHCAUSE_COMBINE_SMG,
	DEATHCAUSE_COMBINE_SHOTGUN,
	DEATHCAUSE_COMBINE_AR2,
	DEATHCAUSE_COMBINE_GRENADE,
	DEATHCAUSE_COMBINE_BALL,
	DEATHCAUSE_HUNTER_FLECHETTE,
	DEATHCAUSE_HUNTER_FLECHETTE_EXPLODE,
	DEATHCAUSE_HUNTER_CHARGE,
	DEATHCAUSE_HUNTER_KICK,
	DEATHCAUSE_ANTLION_SHOVE,
	DEATHCAUSE_ANTLION_WORKER_SHOVE,
	DEATHCAUSE_ANTLION_WORKER_SPIT,
	DEATHCAUSE_ANTLION_GUARD_CHARGE,
	DEATHCAUSE_ANTLION_GUARD_SHOVE,
	DEATHCAUSE_ANTLION_GUARDIAN_CHARGE,
	DEATHCAUSE_ANTLION_GUARDIAN_SHOVE,
	DEATHCAUSE_COMBINE_LARGE_SYNTH,
	DEATHCAUSE_MINING_LASER,
	DEATHCAUSE_RAILGUN,
	DEATHCAUSE_DISSOLVE_OTHER,
	DEATHCAUSE_FIREWALL,
	DEATHCAUSE_TRIPMINE,
	DEATHCAUSE_VINDICATOR_GRENADE,
	DEATHCAUSE_ROCKET,
	DEATHCAUSE_GRENADE_GAS,
	DEATHCAUSE_GRENADE_LAUNCHER,
	DEATHCAUSE_GRENADE_OTHER,
	DEATHCAUSE_FLAMER,
	DEATHCAUSE_ENV_EXPLOSION,
	DEATHCAUSE_ENV_FIRE,
	DEATHCAUSE_ENV_LASER,
	DEATHCAUSE_BURN_OTHER,
	DEATHCAUSE_GRENADE_LAUNCHER_SELF,
	DEATHCAUSE_RICOCHET_BULLET,
	// ^^^ add new items here!

	DEATHCAUSE_COUNT,
};

extern const char *const g_szDeathCauseStatName[DEATHCAUSE_COUNT];

#ifndef CLIENT_DLL
RD_Cause_of_Death_t GetCauseOfDeath( CBaseEntity *pVictim, const CTakeDamageInfo &info );
#endif
