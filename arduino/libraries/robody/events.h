#ifndef _EVENTS_H
#define _EVENTS_H

#include <qp/qp_port.h>

/**
 * party channel
 * one party has a pair of channel:one is for status report, another is for command receive.
 */
enum EventChannel {
	EVENT_CH_PRIVATE = 0,

	EVENT_CH_ROBUDDY_S,
	EVENT_CH_ROBUDDY_C,

	EVENT_CH_ROBODY_S,
	EVENT_CH_ROBODY_C,

	EVENT_CH_ACC_S,
	EVENT_CH_ACC_C,

	EVENT_CH_MOVE_S,
	EVENT_CH_MOVE_C,
	//
	MAX_PUB_EVENT_CH
};

/**
 * basic signals
 * one party could to support partially
 */
enum EventSignal {
	EVENT_SIG_RESET = Q_USER_SIG,
	EVENT_SIG_START,
	EVENT_SIG_STOP,
	EVENT_SIG_TIMEOUT,
	//
	MAX_BASIC_EVENT_SIG
};

/**
 * accessory signals
 * both for publish and private
 */
enum AccessorySignal {
	ACC_SIG_DETACH = MAX_BASIC_EVENT_SIG,
	ACC_SIG_ATTACH,
	ACC_SIG_BUSEVENT,
	ACC_SIG_SOF,

	MAX_ACC_SIG
};

/**
 * move signals
 * both for publish and private
 */
enum MoveSignal {
	MV_SIG_FORWARD = MAX_BASIC_EVENT_SIG,
	MV_SIG_BACKWARD,
	MV_SIG_STOP,
	MV_SIG_RIGH,
	MV_SIG_LEFT,
	MV_SIG_SPEED,
	MV_SIG_RAW,

	MAX_MOVE_SIG
};

#endif //_EVENTS_H
