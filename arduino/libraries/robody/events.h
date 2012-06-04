#ifndef _EVENTS_H
#define _EVENTS_H

#include <qp/qp_port.h>

/**
 * party channel
 * one party has a pair of channel:one is for status report, another is for command receive.
 */
enum BaseChannel {
	EVENT_CH_PRIVATE = 0,

	MAX_BASE_EVENT_CH
};

enum RobodyChannel {
	EVENT_CH_ACC_S = MAX_BASE_EVENT_CH,
	EVENT_CH_ACC_C,

	EVENT_CH_MOVE_S,
	EVENT_CH_MOVE_C,

	MAX_ROBODY_PUB_EVENT_CH

	//above 1024 is for robuddy
};


/**
 * basic signals
 * one party could to support partially
 */
enum BaseSignal {
	EVENT_SIG_RESET = Q_USER_SIG,
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
	MV_SIG_DIRECT = MAX_BASIC_EVENT_SIG,
	MV_SIG_STEER,
	MV_SIG_ACCEL,
	MV_SIG_BRAKE,
	MV_SIG_RAW,
	MAX_MOVE_SIG
};

#endif //_EVENTS_H
