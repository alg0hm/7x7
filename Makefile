
IDIR =./
CC = gcc
CFLAGS=-I$(IDIR) -Wall

ODIR = ../lib
LDIR = ./
EDIR = ../

LIBS= -lwiringPi -lmpdclient -lasound

_DEPS = alhambra.h boca.h input.h player.h sculpture.h volume.h 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = alhambra.o boca.o input.o player.o sculpture.o volume.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

7x7: $(OBJ) 
	gcc -o $(EDIR)$@ $^ $(CFLAGS) $(LIBS)

clean: 
	rm -rf *.o

mpropre: clean 
	rm -rf 7x7


