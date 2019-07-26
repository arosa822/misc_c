# file: makefile
all: main
CC=gcc
LD=gcc
DEL=rm -f
CFLAGS=-I. -ggdb -g
LDFLAGS=-ggdb -Og
SRC=$(wildcard *.c)
SUFFIXES += .d
DEPFILES=$(patsubst %.c,%.d,$(SRC))
-include $(DEPFILES)
main: $(SRC:%.c=%.o)
	$(CC) $(SRC:%.c=%.o) $(LDFLAGS) -o $@
%.d: %.c
	$(CC) $(CFLAGS) -MM -MT '$(patsubst %.c,%.o,$<)' $< -MF $@
%.o: %.c %.d %.h
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	$(DEL) main *.o *.d
