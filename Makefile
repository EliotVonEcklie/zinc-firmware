SOURCES = src/main.c src/post.c src/hardware/memory.c src/hardware/screen.c

PROGRAM = zinc-firmware

CC65_TARGET = none

CC 		= cl65 -v
CFLAGS 	= -t $(CC65_TARGET) --create-dep $(<:.c=.d) -O
LDFLAGS = -t $(CC65_TARGET) -m $(PROGRAM).map

###############################################################################

.SUFFIXES:
.PHONY: all clean

all: $(PROGRAM)

ifneq ($(MAKECMDGOALS),clean)
-include $(SOURCES:.c=.d)
endif

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(PROGRAM): $(SOURCES:.c=.o)
	$(CC) $(LDFLAGS) -o $@.bin $^

clean:
	$(RM) $(SOURCES:.c=.o) $(SOURCES:.c=.d) $(PROGRAM).bin $(PROGRAM).map
