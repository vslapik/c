TARGET = evolution
include ../Makefile.common

SOURCES = $(wildcard *.c)
OBJECTS = $(patsubst %.c, auto/%.png, $(SOURCES))

auto/%.png: auto/%.c
	@-rm a.out
	clear
	-colorgcc $<
	-./a.out
	@scrot -u -d 1 $@

debug:
	echo $(SOURCES)
	echo $(OBJECTS)
