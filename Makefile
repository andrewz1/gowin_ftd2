CUR_DIR := $(abspath .)
LIBS :=
CPPDEFS := -D_GNU_SOURCE
CPPFLAGS := -I$(CUR_DIR) -I$(CUR_DIR)/include
CFLAGS := -O3 -Wall -fPIC -ffunction-sections -fdata-sections -s
LDFLAGS := -Wl,--strip-discarded,--gc-sections,-rpath=.
ifneq ($(STAGING_PREFIX),)
LDFLAGS += -Wl,-rpath-link=$(STAGING_PREFIX)/lib
endif

SUBDIR :=
SRCS := $(wildcard *.c $(foreach v, $(SUBDIR), $(v)/*.c))
OBJS := $(SRCS:.c=.o)
DEPS := $(SRCS:.c=.d)
TARGET := libftd2xx.so
LDFLAGS += -Wl,-soname=$(TARGET)
PHONY :=

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -shared -o $@ $^ $(LDFLAGS)

%.d: %.c Makefile
	$(CC) -MM -MT '$*.o $@' -MF $@ $(CPPFLAGS) $(CPPDEFS) $(CFLAGS) $<

%.o: %.c Makefile
	$(CC) $(CPPFLAGS) $(CPPDEFS) $(CFLAGS) -c -o $@ $<

PHONY += clean
clean:
	rm -f $(OBJS) $(DEPS) $(TARGET)

PHONY += distclean
distclean: clean
	find . -name '*.d' -exec rm -f {} \;
	find . -name '*.o' -exec rm -f {} \;
	find . -name '*.so' -exec rm -f {} \;

-include $(DEPS)

.PHONY: $(PHONY)
