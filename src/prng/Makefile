CC = gcc
CFLAGS = -O0 -Wall

OBJS := $(patsubst %.c,%.o,$(wildcard *.c))

all: $(OBJS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm *.o *~
