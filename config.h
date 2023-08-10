#pragma once
#ifndef LIBFTD_CONFIG_H
#define LIBFTD_CONFIG_H

#include <string.h>
#include <dlfcn.h>

#ifndef LIB_FTD_REAL
#define LIB_FTD_REAL "libftd2xx.so.real"
#endif

#define GOWIN_CABLE "RS232-HS" // may be "Dual RS232-HS", must contain string "RS232-HS"
//#define GOWIN_SERIAL "DEADBEAF" // optional

static inline void fillId(void *p)
{
#ifdef GOWIN_CABLE
	memcpy(p, GOWIN_CABLE, sizeof(GOWIN_CABLE));
#endif
}

static inline void fillSerial(void *p)
{
#ifdef GOWIN_SERIAL
	memcpy(p, GOWIN_SERIAL, sizeof(GOWIN_SERIAL));
#endif
}

void *realSym(const char *name);

#endif //LIBFTD_CONFIG_H
