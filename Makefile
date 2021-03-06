CC = gcc
CFLAGS=-I$(IDIR) -Wall

IDIR =./include
ODIR = ../lib
LDIR = ./
EDIR = ../

LIBS= -lwiringPi -lmpdclient -lasound

_DEPS = alhambra.h boca.h player.h sculpture.h volume.h 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = alhambra.o boca.o player.o sculpture.o volume.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

7x7: $(OBJ) 
	$(CC) -o $(EDIR)$@ $^ $(CFLAGS) $(LIBS)

clean: 
	rm -rf *.o

mpropre: clean 
	rm -rf 7x7


