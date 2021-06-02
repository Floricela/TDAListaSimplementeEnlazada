# La siguiente no es necesariamente requerida, se agrega para
# mostrar como funciona.

CC = gcc
CFLAGS = -g -Wall
SRC = Proyecto.c Listas.c Listas.h
OBJ = Proyecto.o Listas.o


# Reglas explicitas

all: $(OBJ)
	$(CC) $(CFLAGS) -o Proyecto $(OBJ)
clean:
	$(RM) $(OBJ) main

# Reglas implicitas

Cola.o: Listas.c Listas.h
Proyecto.o: Proyecto.c Listas.h
