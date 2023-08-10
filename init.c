#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

#include "config.h"

static void *hdl;

static __attribute__((constructor, unused)) void realOpen(void)
{
	if (hdl)
		return;
	hdl = dlmopen(LM_ID_NEWLM, LIB_FTD_REAL, RTLD_LAZY);
	if (!hdl) {
		fprintf(stderr, "dlopen: %s\n", dlerror());
		abort();
	}
}

void *realSym(const char *name)
{
	return dlsym(hdl, name);
}
