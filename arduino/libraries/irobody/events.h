#ifndef _EVENTS_H
#define _EVENTS_H

#define MAX_PUB_SIG 100
//list all possible event signals
typedef enum _Singal {
	//
	SIG_ROBUDDY_S = 0,
	SIG_ROBUDDY_C,
	//
	SIG_ROBODY_S,
	SIG_ROBODY_C,
	//
	SIG_MOVE_S,
	SIG_MOVE_C,
	//
	SIG_MAX
} Singal;

typedef enum _SigFunc {
	SFUNC_START = 0,
	SFUNC_STOP,
	SFUNC_RESET,
	SFUNC_SPEC_BASE
} SigFunc;

typedef enum _MoveFunc {
	MOVE_FUNC_FORWARD = SFUNC_SPEC_BASE,
	MOVE_FUNC_BACKWARD,
	MOVE_FUNC_RIGH,
	MOVE_FUNC_LEFT,
	MOVE_FUNC_SPEED,
	MOVE_FUNC_RAW
} MoveFunc;
#endif //_EVENTS_H
