#ifndef common_h
#define common_h

#include "pebble.h"

//#define INVERSE

#define GRECT_FULL_WINDOW GRect(0,0,144,168)
#define ANIM_IDLE 0
#define ANIM_START 1
#define ANIM_HOURS 2
#define ANIM_MINUTES 3
#define ANIM_SECONDS 4
#define ANIM_DONE 5
#define COOKIE_MY_TIMER 1

const GPathInfo MINUTE_HAND_PATH_POINTS = { 4, (GPoint[] ) { { 0, 15 },
				{ 6, 0 }, { 0, -72 }, { -6, 0 }, } };

const GPathInfo HOUR_HAND_PATH_POINTS = { 4, (GPoint[] ) { { 0, 15 }, { 7, 0 },
				{ 0, -50 }, { -7, 0 }, } };

#endif
